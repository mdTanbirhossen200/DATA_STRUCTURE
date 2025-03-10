// NAME OF ALLAH//

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

int main()
{


  int a[]={1,2,3,4,5};
  int value,position=-1,i;

  cout<<"Enter value want a serach:";
  cin>>value;

  for(i = 0; i<6; i++)
  {
    if(value == a[i])
    {
      position = i + 1;
        break;
    }
  }

  if(position ==-1)
   cout<<"Item not found:";

  else
    cout<<"The value position: "<<position;


}