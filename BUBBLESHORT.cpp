#include <bits\stdc++.h>
using namespace std;

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n";

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    int i, j, size = 9;

    int swap, counter = 0;
    for (i = 0; i < size - 1; i++)
    {

        swap = 0;
        for (j = 0; j < size - 1 - i; j++)
        {
            counter++;
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = 1;
            }
        }
        if (swap == 0)
        {
            break;
        }
    }

    cout<<("\nAfter sorting:\n");

    for (i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
   cout<<"\nTotal loop: "<<counter<<endl;
}