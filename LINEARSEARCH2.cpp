// NAME OF ALLAH//

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";

int main()
{

  int a[]={1,2,3,4,5,6};
  int searchitem = 6;
  int i;
  for(i = 0; i < 6; i++)
  {
    if(a[i]==searchitem)
    {
        cout<<"Item found at index: " << i;
        return 0;
    }
  }
 
  cout<<"Item Not found:\n";

  return 0;
 
}