/*
Platform - LeetCode.
Question - 226.
Problem Name - Invert Binary Tree. 
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* invertBinary(Node* root){

    if(root == NULL){
        return nullptr;
    }

    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;

    invertBinary(root->left);
    invertBinary(root->right);

    return root;
}


// inorder traversal
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(9);

    //     4
    //    / \
    //   2   7
    //  / \ / \
    // 1  3 6  9

    cout << "Before inversion: ";
    inorder(root);

    invertBinary(root);

    cout << "\nAfter inversion: ";
    inorder(root);

    return 0;
}