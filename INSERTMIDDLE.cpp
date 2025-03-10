  // NAME OF ALLAH
  
  #include<bits\stdc++.h>
  using namespace std;

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

struct Node{
    int data;
    struct Node *next;
};

int main()
{
    int a[]={1,4,6,7,8};
    struct Node *head = NULL;
    head = cretelinklist(a,5);
    
    printlist(head);
    insertMIddle(head,1,40);
    return 0;
}

struct Node *insertMIddle(struct Node *head,int position,int value)
{

  struct Node *temp = head;
  int counter = 0;
  while(temp != NULL)
  {
    counter++;
    if(counter == position)
    {
        struct Node *newNode =(struct Node *)malloc(sizeof(struct Node));

        newNode->data = value;
        newNode->next = temp->next;
        temp->next = newNode;
    }

    temp = temp->next;
  }

  printlist(head);

}


struct Node *printlist(struct Node *head)
{
    struct Node *current = head;
    while(current != NULL)
    {
        cout<<current->data;
        current = current->next;
    }
    cout<<("NULL:\n");
}

struct Node *cretelinklist(int arr[],int size)
{
    struct Node *head = NULL,*temp = NULL,*current = NULL;
    int i;
    for(i = 0; i<size; i++)
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