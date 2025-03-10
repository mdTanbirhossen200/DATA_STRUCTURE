// NAME OF ALLAH//

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int a[]={8,4,9,2,1,7,3};
    int i,value,hole,count = 0;

    for(i = 1; i<7; i++){
        value = a[i];
        hole = i;//Time complexctity O(n^2)
                 //Space Complexcity O(1/constant);
        count++;

        while(hole >0 && a[hole -1]> value)
        {
            a[hole]= a[hole-1];
            hole--;
        }
        a[hole]=value;
    }
    
    cout<<"Sorted Arry:";

    for(i = 0; i<7; i++){
        cout<<a[i]<<" ";
    }

    cout<<"\nTotal loop:"<<count;
    cout<<("\n\n");
    return 0;
}