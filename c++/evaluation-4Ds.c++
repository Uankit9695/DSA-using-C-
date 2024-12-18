#include <iostream>
#include <climits>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *newNode(int val)
{
    Node *node = new Node;
    node->data = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}
int isBSTUtil(Node *node, int min, int max)
{
    if (node == NULL) // if root is NULL
        return 1;
    if (node->data < min || node->data > max)
        return 0;
    return isBSTUtil(node->left, min, node->data - 1) && isBSTUtil(node->right,
                                                                   node->data + 1, max);
}
int isBST(Node *node)
{
    return (isBSTUtil(node, INT_MIN, INT_MAX));
}
int main()
{
    Node *root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(1);
    root->left->right = newNode(3);
    if (isBST(root))
        cout << "yes it is true" << endl;
    else
        cout << "it is false" << endl;
    return 0;
}
