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

void Mirror_of_Tree(Node*root)
{
    if (root->left) Mirror_of_Tree(root->left);
    if (root->right) Mirror_of_Tree(root->right);

    Node *temp;
    temp = root->left;
    root->left = root->right;
    root->right = temp;

    return;
}

void Inorder(Node *root) 
{
    if (root==NULL)
        return ;

    Inorder(root->left);
    cout<<root->data<<" "; 
    Inorder(root->right);

    return;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);

    Inorder(root);
    cout<<endl;
    Mirror_of_Tree(root);
    Inorder(root);

    return 0;
}