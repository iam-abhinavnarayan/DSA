// Given a linked list with next and random pointers, create an identical deep copy.
// Both next and random pointers in the new list must point only to newly created nodes.


#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *random;
    Node *next;

    Node(int val)
    {
        data = val;
        random = NULL;
        next = NULL;
    }
};

Node *cloneLinkedList(Node *head)
{
    // Insert copied nodes
    Node *temp = head;

    while (temp != NULL)
    {
        Node *copy = new Node(temp->data);
        copy->next = temp->next;
        temp->next = copy;
        temp = temp->next->next;
    }

    // Set random pointers
    temp = head;

    while (temp != NULL)
    {
        if (temp->random != NULL)
        {
            temp->next->random = temp->random->next;
        }
        temp = temp->next->next;
    }

    // Separate the list
    Node *dummy = new Node(-1);
    Node *res = dummy;
    temp = head;

    while (temp != NULL)
    {
        res->next = temp->next;
        temp->next = temp->next->next;

        res = res->next;
        temp = temp->next;
    }

    return dummy->next;
}

void printList(Node *head)
{

    while (head)
    {
        cout << "Data: " << head->data << " | Random: ";
        if (head->random)
            cout << head->random->data;
        else
            cout << "NULL";
        cout << endl;
        head = head->next;
    }
}
int main()
{
    // Create list: 1 -> 2 -> 3
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Random pointers
    head->random = head->next->next;       // 1 -> 3
    head->next->random = head;             // 2 -> 1
    head->next->next->random = head->next; // 3 -> 2

    cout << "Original List:\n";
    printList(head);

    Node *cloned = cloneLinkedList(head);

    cout << "\nCloned List:\n";
    printList(cloned);

    return 0;
}