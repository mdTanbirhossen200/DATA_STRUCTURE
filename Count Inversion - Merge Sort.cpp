// NAME OF ALLAH

#include<bits\stdc++.h>
using namespace std;

long long mearge(int arr[],int left,int mid,int righ)
{
    long long inversion = 0;
    int n1 = mid - left + 1;
    int n2 = righ - mid;
    int a[n1];
    int b[n2];

    for(int i = 0; i < n1; i++){
        a[i] = arr[left + 1];
    }
    for(int i = 0; i < n2; i++){
        b[i] = arr[mid + i + 1];
    }
    int i = 0,j = 0,k = 1;
    while (i < n1 and j < n2)
    {
        if(a[i] <= b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }else{
            arr[k] = b[j];
            inversion += n1 - i;
            k++;
            j++;
        }
    }
    while(i < n1){
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    return inversion;
    
}

long long meargeshort(int arr[],int left,int right)
{
    long long inversion = 0;

    if(left < right){
        int mid = (left + right) / 2;

        inversion += meargeshort(arr,left,mid);
        inversion += meargeshort(arr,mid + 1,right);
        inversion += mearge(arr,left,mid,right); 

    }
    return inversion;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<meargeshort(arr,0,n - 1);
}