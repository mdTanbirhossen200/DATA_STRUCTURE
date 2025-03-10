// THE NAME OF ALLAH

#include<bits\stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int x)
{
    struct Node* temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void inorder(struct Node* root){

  if(root == NULL)
   return;
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
   return;

}

void preorder(struct Node* root){
    if(root == NULL)
    return;
    cout<<root->data <<" ";
    preorder(root->left);
    preorder(root->right);
    return;
}

void postorder(struct Node* root){
    if(root == NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data <<" ";
    return;
}


int main()
{
   struct Node *root = NULL;
   root = createNode(2);
   root->left = createNode(7);
   root->right =createNode(5);
   root->left->left = createNode(2);
   root->left->right=createNode(6);
   root->left->right->left=createNode(5);
   root->left->right->right=createNode(11);
   root->right->right = createNode(9);
   root->left->right->right = createNode(4);

   inorder(root);
   cout<<"\n";

   preorder(root);
   cout<<"\n";

   postorder(root);
   cout<<"\n";

    return 0;
}
