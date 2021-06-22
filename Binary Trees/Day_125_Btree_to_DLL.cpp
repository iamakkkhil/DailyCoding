#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node 
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* ptr = NULL;

void bToDLL_utility(Node *root, Node **head){
    if (root==NULL) return;
    
    bToDLL_utility(root->left, head);
    
    if (ptr==NULL){
        *head = root;
        ptr = root;
    }
    else{
        ptr->right = root;
        root->left = ptr;
        ptr = root;
    }
    bToDLL_utility(root->right, head);
}

Node * bToDLL(Node *root){   
    Node *head = NULL;
    bToDLL_utility(root, &head);
    return head;
}

void printList(Node *node)
{
    cout<<"DLL is as follows: ";
    while (node!=NULL)
    {
        cout<<node->data << " ";
        node = node->right;
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(25);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);

    Node* head = bToDLL(root);
    printList(head);

    return 0;
}