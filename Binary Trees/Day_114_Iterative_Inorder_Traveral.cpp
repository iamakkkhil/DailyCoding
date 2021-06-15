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

void Iterative_Inorder(Node *root){   
    stack <Node *> s;
    Node *ptr = root;

    while(!s.empty() || ptr!=NULL){

        if(ptr!=NULL){
            s.push(ptr);
            ptr = ptr->left;
        }
        else{
            ptr = s.top();
            s.pop();
            cout<<ptr->data<<" ";
            ptr = ptr->right;
        }
    }
}


void Recursive_Inorder(Node *root)
{
    if (root == NULL) return;

    Recursive_Inorder(root->left);
    cout<<root->data<<" ";
    Recursive_Inorder(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);

    Recursive_Inorder(root);
    cout<<endl;
    Iterative_Inorder(root);

    return 0;
}