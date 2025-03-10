 // NAME OF ALLAH

 #include<bits\stdc++.h>
 using namespace std;
 #define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


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

Node *searchBst(Node *root,int key)
{
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }

    if(root->data > key)
    {
        return searchBst(root->left, key);
    }

    return searchBst(root->right, key);
}


int main()
{
   struct Node *root = NULL;
   root = createNode(4);
   root->left = createNode(2);
   root->right =createNode(5);
   root->left->left = createNode(1);
   root->left->right=createNode(3);
   root->left->right->left=createNode(6);

   if(searchBst(root,5) == NULL){
    cout<<"Key not Exist: ";
   }else{
    cout<<"Key exist: ";
   }

    return 0;

//      4
//      |
//     /\
//    2  5
//   /\  \
//  1  3  6
}
