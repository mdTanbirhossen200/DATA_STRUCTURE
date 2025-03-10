// NAME OF ALLAH

#include <bits\stdc++.h>
using namespace std;
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

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

int diameterRecur(Node *root, int &res)
{

    if (root == nullptr)
        return 0;

    int lHeight = diameterRecur(root->left, res);
    int rHeight = diameterRecur(root->right, res);

    res = max(res, lHeight + rHeight);

    return 1 + max(lHeight, rHeight);
}

int diameter(Node *root)
{

    int res = 0;
    diameterRecur(root, res);
    return res;
}

int main()
{

    // Constructed binary tree is
    //          5
    //        /   \
    //       8     6
    //      / \   /
    //     3   7 9
    Node *root = new Node(5);
    root->left = new Node(8);
    root->right = new Node(6);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(9);
    cout << diameter(root) << endl;

    return 0;
}
