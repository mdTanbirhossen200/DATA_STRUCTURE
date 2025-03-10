// NAME OF ALLAH

#include <bits\stdc++.h>
using namespace std;

struct Node *createlinklist(int arr[], int size);

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int a[] = {1, 2, 3, 4};
    struct Node *head;
    head = createlinklist(a, 4);
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"NULL";
    return 0;
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