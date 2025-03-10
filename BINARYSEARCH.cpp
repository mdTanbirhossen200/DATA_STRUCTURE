// THE NAME OF ALLLH

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

int main()
{
    int A[]= {1,2,5,6,9,99,999};
    int item = 909;

    int left,right,middle;
    left = 0;
    right = 6;

    while(left<=right)
    {
        middle = (left + right) / 2;
        if(A[middle] == item)
        {
            cout<<("Item found at index: %d\n",middle);
            return 0;
        }
        else if(A[middle] < item)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    cout<<("Item not found:\n");
    return 0;

}
