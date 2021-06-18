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

int utility(Node *root, int& flag){
    if (root==NULL) 
        return 0;
    
    int left_height = utility(root->left_child, flag);
    int right_height = utility(root->right_child, flag);
    
    if (abs(left_height-right_height) > 1){
        flag = -1;
        return flag;
    }
    
    return max(left_height, right_height)+1;
}


//Function to check whether a binary tree is balanced or not.
bool isBalanced(Node *root)
{   
    int flag=1;
    int no = utility(root, flag);
    if (flag<1) return 0;
    return 1;
}

int main() {
    Node* root = new Node(1);
    root->left_child = new Node(2);
    root->right_child = new Node(3);
    root->left_child->left_child = new Node(4);
    root->left_child->right_child = new Node(5);
    root->left_child->left_child->left_child = new Node(6);

    cout<<isBalanced(root);

    return 0;
}