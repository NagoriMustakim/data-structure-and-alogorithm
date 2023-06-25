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
};
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
    tail->next = NULL;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *l1 = new Node(2);
    Node *head1 = l1;
    Node *tail1 = l1;
    insertAtTail(tail1, 4);
    insertAtTail(tail1, 3);
    print(head1);
    cout << endl;
    Node *l2 = new Node(5);
    Node *head2 = l2;
    Node *tail2 = l2;
    insertAtTail(tail2, 6);
    insertAtTail(tail2, 4);
    print(head2);
    return 0;
}