#include "iostream"
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildTree(Node *root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left of " << data << " :";
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << " :";
    root->right = buildTree(root->right);
}
void printTree(Node *parent)
{
}
int main()
{
    Node *root =NULL;
    root = buildTree(root);
    return 0;
}