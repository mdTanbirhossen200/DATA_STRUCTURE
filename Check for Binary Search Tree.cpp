// NAME OF ALLAH

#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


struct Node
{
    int data;
    Node *left,*right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


bool isBst(Node *root,Node *min, Node *max)
{

    if(root == NULL){
        return true;
    }

    if(min != NULL && root->data <= min->data){
        return false;
    }

    if(max != NULL && root->data >= max->data){
        return false;
    }

    bool leftvalid = isBst(root->left,min,root);
    bool rightvalid = isBst(root->right,root,max);
    return leftvalid and rightvalid;
}


int main()
{
   struct Node *root = NULL;
   root = new Node(2);
   root->left = new Node(7);
   root->right = new Node(5);
   root->left->left = new Node(2);
   root->left->right = new Node(6);
   root->left->right->left = new Node(5);
   root->left->right->right = new Node(11);
   root->right->right = new Node(9);
   root->left->right->right = new Node(4);

   if(isBst(root ,NULL,NULL))
   {
    cout<<"Valid Bst: ";
   }else{
    cout<<"Invalid Bst : ";
   }

    return 0;
}
