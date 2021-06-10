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

vector<int> ReverseLevelOrder(Node* root) {
    queue<Node*> q;
    vector<int> contents;

    q.push(root);
    
    while(!q.empty()) {
        Node* temp = q.front();

        // In reverse order we are pushing the elements in the beginning of vector
        contents.insert(contents.begin(), temp->data);
        q.pop();

        // Note for reverse Level order we need to check Right child first
        // ṭhen left child.
        if (temp->right_child != NULL) {
            q.push(temp->right_child);
        }

        if (temp->left_child != NULL) {
            q.push(temp->left_child);
        }
    }

    return contents;    
}


int main() {
    Node* root = new Node(1);
    root->left_child = new Node(2);
    root->right_child = new Node(3);
    root->left_child->left_child = new Node(4);
    root->left_child->right_child = new Node(5);

    vector <int> tree_ele = ReverseLevelOrder(root);
    for(int i=0; i<tree_ele.size(); i++) {
        cout<<tree_ele[i]<<" ";
    }
    return 0;
}