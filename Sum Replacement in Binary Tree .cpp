// NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

void replaceNodeRecur(Node *root, int &index, vector<int> &arr)
{
    if (root == nullptr)
        return;

    replaceNodeRecur(root->left, index, arr);

    root->data = arr[index - 1] + arr[index + 1];
    index++;

    replaceNodeRecur(root->right, index, arr);
}

void storeInorder(Node *root, vector<int> &arr)
{
    if (root == nullptr)
        return;

    storeInorder(root->left, arr);
    arr.push_back(root->data);
    storeInorder(root->right, arr);
}

void replaceNodeWithSum(Node *root)
{
    if (root == nullptr)
        return;

    vector<int> arr;
    arr.push_back(0);

    storeInorder(root, arr);
    arr.push_back(0);

    int index = 1;
    replaceNodeRecur(root, index, arr);
}

void inOrder(Node *root)
{
    if (root == nullptr)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{

    // Binary tree
    //       1
    //      / \
    //     2   3
    //   / \  / \
    //  3   5 6  7
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    replaceNodeWithSum(root);
    inOrder(root);
    return 0;
}
