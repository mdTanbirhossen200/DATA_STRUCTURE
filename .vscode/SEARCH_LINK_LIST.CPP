/// NAME OF ALLAH//

#include <bits\stdc++.h>
using namespace std;
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

struct Node *createlinklist(int arr[],int size);
int searchinlinklist(struct Node *head,int val);


struct Node
{
    int data;
    struct Node *next;
};

int main()
{

    int a[] = {1, 2, 3, 4, 5, 6};
    struct Node *head = NULL;
    head = createlinklist(a, 6);

    struct Node *current = head;
    cout<<"Indx :"<<searchinlinklist(head, 8);

    return 0;
}

int searchlinkedlist(struct Node *head, int val)
{

    int index = 1;
    while (head != NULL)
    {
        if (head->data == val)
        {
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}

struct Node *createlinklist(int arr[], int size)
{
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    int i;
    for (i = 0; i < size; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}