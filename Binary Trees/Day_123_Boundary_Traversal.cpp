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

vector<int> left_b;
vector<int> right_b;
vector<int> leaf;


void left_boundary(Node *root){

    if (root == NULL) {
        return;
    }

    if (root->left){
        left_b.push_back(root->data);
        left_boundary(root->left);
        
    }
    else if (root->right){
        left_b.push_back(root->data);
        left_boundary(root->right);
    }   
}

void right_boundary(Node *root){
    if (root == NULL) {
        return;
    }

    if (root->right){
        right_boundary(root->right);
        left_b.insert(left_b.begin(), root->data);
    }
    else {
        right_boundary(root->left);
        left_b.insert(left_b.begin(), root->data);
    }
}

void leaf_node(Node *root){

    if (root == NULL)
        return;

    leaf_node(root->left);

    if(!(root->left) && !(root->right)){
        leaf_b.push_back(root->data);
    }

    leaf_node(root->right);
}

vector<int> boundary_node(Node *root) {
    vector <int> boundary;

    left_boundary(root->left);
    right_boundary(root->right);
    leaf_node(root->left);
    leaf_node(root->right);

    for(int i=0; i<left_b.size(); i++){
        boundary.push_back(left_b[i]);
    }
    for(int i=0; i<leaf.size(); i++){
        boundary.push_back(leaf[i]);
    }
    for(int i=0; i<right_b.size(); i++){
        boundary.push_back(right_b[i]);
    }
    
    return boundary;
}


int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);

    cout<<root->data<<" ";

    vector<int>bn = boundary_node(root);

    for(int i=0; i<bn.size(); i++){
        cout<<bn[i]<<" ";
    }

    return 0;
}