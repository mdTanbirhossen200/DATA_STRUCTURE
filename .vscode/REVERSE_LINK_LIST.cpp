//  NAME OF ALLAH//

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

struct Node *createlinklist(int arr[],int size);
void reverselinklist(struct Node *head);

struct Node{
    int data;
    struct Node *next;
};

int main()
{
  int a[]={12,3,4,5};
  struct Node *head = NULL;
  head = createlinklist(a,4);
  struct Node *newhead = head;
  while(head != NULL)
  {
    cout<<head->data;
    head = head->next;
  }

  cout<<"NULL:\n";
  
  reverselinklist(newhead);
  return 0;

}
void reverselinklist(struct Node *head)
{
    struct Node *prev = NULL,*current = head,*next = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
     while(head != NULL)
  {
    cout<<head->data;
    head = head->next;
  }

  cout<<"NULL:\n";

}

struct Node *createlinklist(int arr[],int size)
{
    struct Node *head = NULL,*temp = NULL,*current = NULL;
    int i;
    for(i = 0;i < size; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;
        if(head == NULL)
        {
            head = temp;
            current = temp;
        }else{
            current->next = temp;
            current = current->next;
        }

    }
    return head;
}