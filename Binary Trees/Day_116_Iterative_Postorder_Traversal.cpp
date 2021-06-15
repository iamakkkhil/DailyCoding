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

void Iterative_Postorder(Node *root){   
    stack <Node *> s;
    s.push(root);
    stack <int> out;

    while(!s.empty()){
        Node *ptr = s.top();
        s.pop();
        out.push(ptr->data);

        if (ptr->left) s.push(ptr->left);
        if (ptr->right) s.push(ptr->right);
    }

    while(!out.empty()){
        cout<<out.top()<<" ";
        out.pop();
    }
}


void Recursive_Postorder(Node *root)
{
    if (root == NULL) return;

    Recursive_Postorder(root->left);
    Recursive_Postorder(root->right);
    cout<<root->data<<" ";
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Recursive_Postorder(root);
    cout<<endl;
    Iterative_Postorder(root);

    return 0;
}