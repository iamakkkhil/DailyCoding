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

void Iterative_Preorder(Node *root){   
    stack <Node *> s;
    Node *ptr = root;

    while(!s.empty() || ptr!=NULL){

        if(ptr!=NULL){
            s.push(ptr);
            cout<<ptr->data<<" ";
            ptr = ptr->left;
        }
        else{
            ptr = s.top();
            s.pop();
            ptr = ptr->right;
        }
    }
}


void Recursive_Preorder(Node *root)
{
    if (root == NULL) return;

    cout<<root->data<<" ";
    Recursive_Preorder(root->left);
    Recursive_Preorder(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Recursive_Preorder(root);
    cout<<endl;
    Iterative_Preorder(root);

    return 0;
}