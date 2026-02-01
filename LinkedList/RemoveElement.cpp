/*
Platform - LeetCode.
Question - 203.
Problem Name - Remove Linked List Elements. 
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val ;
            next = NULL;
        }
};


Node* removeElement(Node* head , int val){
    
   // Remove target value from the beginning
    while(head!=NULL && head->data==val){
        Node* temp = head;
         head = head -> next;
         delete temp;
    }

    Node* curr = head;

    while(curr!=NULL && curr -> next != NULL){

        if(curr -> next -> data == val){
            Node* temp = curr -> next;
            curr -> next =curr -> next -> next;
            delete temp;
        }
        else{
            curr = curr -> next;
        }
    }
    return head;
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
    // Create linked list: 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(6);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(5);
    head->next->next->next->next->next->next = new Node(6);

    cout << "Original List: ";
    printList(head);

    int val = 6;
    head = removeElement(head, val);

    cout << "After removing " << val << ": ";
    printList(head);

    return 0;
}