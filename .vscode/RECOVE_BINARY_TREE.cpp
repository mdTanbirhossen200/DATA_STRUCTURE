// NAME OF ALLAH//

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

void calcpointer(Node *root,Node **lef,Node **mid,Node **right,Node **prev)
{
    if(root == NULL){
        return;
    }
    calcpointer(root->left,lef,mid,right,prev);
    if(*prev && root->data < (*prev) ->data){
        if(!*lef){
        *lef = *prev;
        *mid = root;
        }
        else
        {
            *right = root;

        }
    }
    *prev = root;
    calcpointer(root->right,lef,mid,right,prev);

}

void recoverBst(Node *root)
{
    Node *left;
    Node *mid;
    Node *right;
    Node *prev;

    left = NULL;
    mid = NULL;
    right = NULL;
    prev = NULL;

    calcpointer(root,&left,&mid,&right,&prev);

    if(left && right){
        swap(&(left->data),& (right->data));
    }
    else if(left && mid){
        swap(&(left->data) ,& (mid->data));
    }
}

void inorder(Node *Root)
{
    if(Root == NULL){
        return;
    }
    inorder(Root->left);
    cout<<Root->data<<" ";
    inorder(Root->right);
}


int main()
{
    Node *root = new Node(6);
    root->left = new Node(9);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->right = new Node(13);

    inorder(root);
    cout<<endl;

    recoverBst(root);

    inorder(root);
    cout<<endl;

}

       /*     6
             /\
            9  3
           /\   \
          1  4  13*/