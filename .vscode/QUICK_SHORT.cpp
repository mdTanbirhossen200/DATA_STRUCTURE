//NAME OF ALLAH//

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

void swap(int arr[],int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp; 
}


int partittion(int arr[],int left,int right)
{
    int pivot = arr[right];
    int i = left - 1;

    for(int j = left; j < right; j++)
    {
        if(arr[j] < pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i + 1,right);
    return i + 1;
}

void Quickshort(int arr[],int left,int right)
{
    if(left < right)
    {
        int pi = partittion(arr,left,right);
        Quickshort(arr,left,pi - 1);
        Quickshort(arr,pi + 1,right);
    }
}




int main()
{
    int arr[] = {7,3,5,6,4,1,2};
    Quickshort(arr,0,6);
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}