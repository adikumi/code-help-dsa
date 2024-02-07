#include <iostream>
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

void insertAtHead(Node *Head, int val)
{
    Node *temp = new Node(val);
    temp->next = Head;
    Head = temp;
}

void printLL(Node *head)
{
    Node *temp = head;
    cout << temp->data << endl;
    // for (; temp->next == NULL; temp = temp->next)
    // {
    //     cout << temp->data << endl;
    // }
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    // Node *head = new Node(10);

    printLL(head);
}