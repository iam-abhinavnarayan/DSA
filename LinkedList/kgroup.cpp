/* You are given the head of a Singly linked list. You have to reverse every k node in the linked list and return the head of the modified list.
Note: If the number of nodes is not a multiple of k then the left-out nodes at the end, should be considered as a group and must be reversed.*/

#include <iostream>
using namespace std;

// Definition of ListNode
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Step 1: Check if there are at least k nodes
        ListNode* temp = head;
        for (int i = 0; i < k; i++) {
            if (temp == NULL)
                return head; // Not enough nodes
            temp = temp->next;
        }

        // Step 2: Reverse k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        int count = 0;

        while (curr != NULL && count < k) {
            next = curr->next;  // Save next node
            curr->next = prev;  // Reverse link
            prev = curr;        // Move prev forward
            curr = next;        // Move curr forward
            count++;
        }

        // Step 3: Recursive call for remaining list
        if (next != NULL) {
            head->next = reverseKGroup(next, k);
        }

        // Step 4: Return new head
        return prev;
    }
};
