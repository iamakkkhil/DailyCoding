#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node 
{
    int data;
    Node *left_child;
    Node *right_child;

    Node(int val)
    {
        data = val;
        left_child = NULL;
        right_child = NULL;
    }
};


int max_d;
int Diameter_of_Tree(Node*root)
{
    if (root == NULL) {
        return 0;
    }
    int left_height = Diameter_of_Tree(root->left_child);
    int right_height = Diameter_of_Tree(root->right_child);
    int diameter = left_height + right_height + 1;

    if (diameter>max_d){
        max_d = diameter;
    }

    return max(left_height, right_height)+1;
}

int Utility(Node *root) 
{
    Diameter_of_Tree(root);
    return max_d;
}

int main() {
    Node* root = new Node(1);
    root->left_child = new Node(2);
    root->right_child = new Node(3);
    root->left_child->left_child = new Node(4);
    root->left_child->right_child = new Node(5);
    root->left_child->left_child->left_child = new Node(6);

    cout<<Utility(root);

    return 0;
}