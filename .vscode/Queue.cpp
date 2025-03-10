//  NAME OF ALLAH//

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define cepacity 5
int ourqueue[cepacity];
int front = 0,rear = -1,totalitem =0;

bool isfull()
{
    if(totalitem==cepacity)
    {
        return true;
    }
    return false;
}

bool isempty()
{
    if(totalitem ==0)
    {
        return true;
    }
    return false;
}

void enqueue(int item)
{
  if(isfull())
  {
    printf("Srry Q is full:\n\n");

    return;
  }
  rear = (rear + 1) % cepacity;
  ourqueue[rear] = item;
  totalitem++;

}

int deque()
{
  if(isempty())
  {
   printf("Sorry The que is empty:\n");
   return -1;

  }
  int frontitem = ourqueue[front];
  ourqueue[front]=-1;
  front = (front + 1) %cepacity;
  totalitem--;
   
  return frontitem;

}

void printqueue()
{
    cout<<"Queue:";
    int i;
    for(i = 0;i<cepacity;i++)
    {
       
    cout<<ourqueue[i];
    }
    cout<<"\n";

}



int main()
{
    cout<<"Lets implement our queue:\n";
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printqueue();
    enqueue(50);
    printqueue();
    enqueue(60);
    cout<<"dequeue "<<deque();
    printqueue();
    enqueue(60);
    printqueue();
        

}