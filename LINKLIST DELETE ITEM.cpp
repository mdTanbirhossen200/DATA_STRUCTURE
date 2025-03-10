// NAME OF ALLAH

#include <bits\stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *deletei(struct Node *head, int data)
{
    struct Node *dummyhead = (struct Node *)malloc(sizeof(struct Node));
    dummyhead->next = head;
    struct Node *temp = dummyhead;
    while (temp->next != NULL)
    {
        if (temp->next->data == data)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return dummyhead->next;
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

 void printlist(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL: ";
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    struct Node *head = NULL;
    head = createlinklist(a, 10);

    printlist(head);
    struct Node *newhead = deletei (head, 6);
    cout<<endl;
    printlist(newhead);

    return 0;
}