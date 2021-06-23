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

int util_toSumTree(Node *node) {
        if (node == NULL){
            return 0;
        }
        
        int prev_data = node->data;
        
        int sum_left = util_toSumTree(node->left);
        int sum_right = util_toSumTree(node->right);
        
        int total = sum_left + sum_right;
        node->data = total;
        
        return prev_data+total;
}
    
void toSumTree(Node *node){
    util_toSumTree(node);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);

    util_toSumTree(root);

    return 0;
}