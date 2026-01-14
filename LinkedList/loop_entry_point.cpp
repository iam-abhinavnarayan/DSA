/* You are given the head of a singly linked list.
   If a loop is present in the linked list then,
   return the first node of the loop else return -1. */

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int cycleStart(Node* head) {

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            break;
        }
    }
    
    if (fast == NULL || fast->next == NULL) {
        return -1;
    }

    slow = head;

    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow->data;
}

int main() {

    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(4);

    head->next->next->next = head->next;

    cout << cycleStart(head);

    return 0;
}
