// NAME OF ALLAH

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);


struct Node{
    int data;
    struct Node *next;
};

int main()
{

 int a[]={1,2,3,4,5,6};
 struct Node *head;
 head = createlinklist(a,6);
 insertatbegining(head,50000);


 return 0;

}

void insertatbegining(struct Node *head,int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data= data;
    temp->next = head;

    struct Node *newhead = temp;
    struct Node *current = newhead;
    newhead = temp;

    printlist(newhead);


}

void printlist(struct Node *head){
    struct Node *current = head;
    while(current != NULL){
        cout<<current->data;
        current = current->next;
    }
    cout<<("NULL:\n");
}


struct Node *createlinklist(int arr[],int size)
{
    struct Node *head = NULL,*temp = NULL,*current = NULL;
    int i;
    for(i=0; i<size; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next =NULL;
        if(head==NULL)
        {
            head = temp;
            current = temp;
        }else{
            current ->next = temp;
            current = current->next;
        }
    }
    return head;
}
