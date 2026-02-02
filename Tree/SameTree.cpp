/*
Platform - LeetCode.
Question - 100.
Problem Name - Same Tree. 
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

string Order(Node* root){

    string res ="";

    queue<Node*> q;
    q.push(root);

    while(q.size()>0){
        Node*curr = q.front();

        q.pop();

        if(curr==NULL){
            res+="#";
            continue;
        }
        
        res+=to_string(curr -> data);
       
        q.push(curr->left);
        q.push(curr->right);   
    }
    return res;
}

int main() {
    // Tree p = [1,2,3]
    Node* p = new Node(1);
    p->left = new Node(2);
    p->right = new Node(3);

    // Tree q = [1,2,3]
    Node* q = new Node(1);
    q->left = new Node(2);
    q->right = new Node(3);

    string s1 = Order(p);
    string s2 = Order(q);

    if (s1 == s2)
        cout << "true";
    else
        cout << "false";

    return 0;
}

/*int main() {
    // Tree p = [1,2]
    Node* p = new Node(1);
    p->left = new Node(2);
    p->right = NULL;

    // Tree q = [1,null,2]
    Node* q = new Node(1);
    q->left = NULL;
    q->right = new Node(2);

    string s1 = Order(p);
    string s2 = Order(q);

    if (s1 == s2)
        cout << "true";
    else
        cout << "false";

    return 0;
}
*/
