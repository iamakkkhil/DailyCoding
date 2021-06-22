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

vector<int> diagonal_traversal(Node *root){
    vector<int> diagonal;
    queue<Node *> q;
    
    if (root) q.push(root);

    while(!q.empty()) {
        Node *p = q.front();
        q.pop();

        while(p){
            if (p->left){
                q.push(p->left);
            }
            diagonal.push_back(p->data);
            p = p->right;
        }
    }

    return diagonal;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);

    vector<int>ans = diagonal_traversal(root);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}