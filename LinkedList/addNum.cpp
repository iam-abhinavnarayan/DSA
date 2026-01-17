#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Reverse linked list
Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* Next = NULL;

    while (curr != NULL) {
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}

// Add two numbers represented by linked lists (forward order)
Node* addTwoLists(Node* head1, Node* head2) {

    head1 = reverse(head1);
    head2 = reverse(head2);

    Node* ans = NULL;
    int sum = 0, carry = 0;

    while (head1 || head2 || carry) {
        sum = carry;

        if (head1) {
            sum += head1->data;
            head1 = head1->next;
        }
        if (head2) {
            sum += head2->data;
            head2 = head2->next;
        }

        Node* node = new Node(sum % 10);
        node->next = ans;
        ans = node;

        carry = sum / 10;
    }

    // Remove leading zeros
    while (ans && ans->data == 0 && ans->next != NULL) {
        ans = ans->next;
    }

    return ans;
}

// Helper function to create linked list from array
Node* createList(int arr[], int n) {
    if (n == 0) return NULL;

    Node* head = new Node(arr[0]);
    Node* curr = head;

    for (int i = 1; i < n; i++) {
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }
    return head;
}

// Print linked list
void printList(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    // Example input:
    // 0 0 0 2 3 7 1
    // 0 0 3 1 1 2

    int arr1[] = {0, 0, 0, 2, 3, 7, 1};
    int arr2[] = {0, 0, 3, 1, 1, 2};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    Node* head1 = createList(arr1, n1);
    Node* head2 = createList(arr2, n2);

    cout << "List 1: ";
    printList(head1);

    cout << "List 2: ";
    printList(head2);

    Node* result = addTwoLists(head1, head2);

    cout << "Sum:    ";
    printList(result);

    return 0;
}
