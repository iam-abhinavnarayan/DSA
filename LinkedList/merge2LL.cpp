/*Given the head of two sorted linked lists consisting of nodes respectively. 
  Merge both lists and return the head of the sorted merged list.*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Function to merge two sorted linked lists
Node* sortedMerge(Node* head1, Node* head2) {
    
    if (head1 == NULL || head2 == NULL) {
        return head1 == NULL ? head2 : head1;
    }

    if (head1->data <= head2->data) {
        head1->next = sortedMerge(head1->next, head2);
        return head1;
    } else {
        head2->next = sortedMerge(head1, head2->next);
        return head2;
    }
}

// Function to insert at end
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to print list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;

    // First sorted list: 1 3 5
    insertEnd(head1, 1);
    insertEnd(head1, 3);
    insertEnd(head1, 5);

    // Second sorted list: 2 4 6
    insertEnd(head2, 2);
    insertEnd(head2, 4);
    insertEnd(head2, 6);

    cout << "List 1: ";
    printList(head1);

    cout << "List 2: ";
    printList(head2);

    Node* mergedHead = sortedMerge(head1, head2);

    cout << "Merged List: ";
    printList(mergedHead);

    return 0;
}
