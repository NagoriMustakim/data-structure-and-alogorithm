#include "iostream"
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;
    Node(int data)
    {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};

void insertATHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void insertAtTail(Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    newNode->next = NULL;
    tail = newNode;
}
void traverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(12);
    Node *head = node1;
    Node *tail = node1;
    traverse(head);
    // insertATHead(head, 11);
    insertAtTail(tail, 13);
    insertAtTail(tail, 14);
    insertAtTail(tail, 15);
    traverse(head);

    return 0;
}