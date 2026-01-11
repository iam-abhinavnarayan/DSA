/*You are given the head of a singly linked list,
 you have to left rotate the linked list k times. 
Return the head of the modified linked list.*/

#include <iostream>
using namespace std;

// Definition of Node
struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Function to rotate the linked list by k nodes
Node* rotate(Node* head, int k) {
    if (head == nullptr || head->next == nullptr || k == 0) {
        return head;
    }

    // Find length and last node
    Node* temp = head;
    int len = 1;
    while (temp->next != nullptr) {
        temp = temp->next;
        len++;
    }

    // Make list circular
    temp->next = head;

    // Normalize k
    k = k % len;
    if (k == 0) {
        temp->next = nullptr;
        return head;
    }

    // Find new tail
    Node* newTail = head;
    for (int i = 1; i < k; i++) {
        newTail = newTail->next;
    }

    // Set new head
    Node* newHead = newTail->next;
    newTail->next = nullptr;

    return newHead;
}

// Function to insert node at end
void insert(Node*& head, int data) {
    if (head == nullptr) {
        head = new Node(data);
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new Node(data);
}

// Function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* head = nullptr;

    // Creating linked list: 1 -> 2 -> 3 -> 4 -> 5
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    cout << "Original List: ";
    printList(head);

    int k = 2;
    head = rotate(head, k);

    cout << "List after rotating by " << k << " nodes: ";
    printList(head);

    return 0;
}

