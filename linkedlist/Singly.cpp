// Linked List:linear data and dynamic structure,
// collection of nodes contains a data field and a reference(link) to the next node in the list.
// 1.singly 2.doubly 3.circular 4.circular doubly

#include "iostream"
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory free data is: " << value << endl;
    }
};
void insertAtHead(Node *&head, int data)
{
    // creating new node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
    tail->next = NULL;
}

void insertAtMiddle(Node *&head, int data, int pos)
{
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *NewNode = new Node(data);
    NewNode->next = temp->next;
    temp->next = NewNode;
}

void traverse(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(Node *&head, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}


int main()
{
    Node *node1 = new Node(12);
    Node *head = node1;
    Node *tail = node1;
    traverse(node1);

    // insertAtHead(node1, 11);
    // insertAtHead(node1, 10);
    // insertAtHead(node1, 9);
    // insertAtHead(node1, 8);
    // traverse(node1);

    insertAtTail(tail, 13);
    insertAtTail(tail, 14);
    insertAtTail(tail, 15);
    insertAtTail(tail, 16);
    insertAtTail(tail, 17);
    insertAtTail(tail, 18);
    insertAtTail(tail, 19);
    insertAtTail(tail, 20);
    traverse(head);

    // insertAtMiddle(node1, 14, 3);
    deleteNode(head, 3);
    traverse(head);

    return 0;
}