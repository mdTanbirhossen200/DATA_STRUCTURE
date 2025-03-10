// NAME OF ALLAH

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *createNode(int new_data) {
    struct Node *new_node =
    (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

struct Node* insertEnd(struct Node *head, int new_data) {
    struct Node *new_node = createNode(new_data);

    if (head == NULL) {
        head = new_node;
    } else {
        struct Node *curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }

        curr->next = new_node;
        new_node->prev = curr;
    }

    return head;
}

void printList(struct Node *head) {
    struct Node *curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

int main() {
    struct Node *head = createNode(1);
    head->next = createNode(2);
    head->next->prev = head;
    head->next->next = createNode(3);
    head->next->next->prev = head->next;

    // Print the original list
    cout<<"Original Linked List: ";
    printList(head);

    // Insert a new node with data 4 at the end
    cout<<"Inserting Node with data 4 at the end: ";
    head = insertEnd(head, 4);

    // Print the updated list
    printList(head);

    return 0;
}