#include <bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;
    treeNode(int data)
    {
        this->data = data;
        leftChild = NULL;
        rightChild = NULL;
    }
};
treeNode *insertionBST(treeNode *root, int value)
{
    treeNode *newNode = new treeNode(value);
    if (root == NULL)
    {
        root = newNode;
        return root;
    }
    // value<root->data
    if (value < root->data)
    {
        root->leftChild = insertionBST(root->leftChild, value);
    }
    // value>root->data
    else if (value > root->data)
    {
        root->rightChild = insertionBST(root->rightChild, value);
    }
    return root;
}
treeNode *searchBST(treeNode *root, int value)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == value)
    {
        cout << root->data;
        return root;
    }
    else if (value < root->data)
    {
        cout << root->data << "->";
        searchBST(root->leftChild, value);
    }
    else
    {
        cout << root->data << "->";
        searchBST(root->rightChild, value);
    }
}
int main()
{
    int n;
    cin >> n;
    treeNode *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        root = insertionBST(root, value);
    }
    // string result = "";
    // inorderTraversal(root, result);
    // cout << result << endl;

    int key;
    cin >> key;

    if (searchBST(root, key) == NULL)
    {
        cout << endl
             << "That doesn't BST" << endl;
    }
    else
    {
        cout << endl
             << "Value exist in BST" << endl;
    }
}

/*
9
11 5 9 43 36 1 2 7 21
*/