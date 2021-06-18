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

vector<int> zigzag(Node* root){
    vector<int> ans;

    stack<Node*> S1;
    stack<Node*> S2;

    if (root) S1.push(root);

    while(!S1.empty() || !S2.empty()){
        while(!S1.empty()){
            Node* temp = S1.top();
            ans.push_back(temp->data);

            if(temp->left) S2.push(temp->left);
            if(temp->right) S2.push(temp->right);

            S1.pop();
        }
        while(!S2.empty()){
            Node* temp = S2.top();
            ans.push_back(temp->data);

            if(temp->right) S1.push(temp->right);
            if(temp->left) S1.push(temp->left);
            
            S2.pop();
        }
    }
    return ans;
}


int main() {
    Node* root = new Node(1);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->right = new Node(25);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);

    cout<<endl;
    vector<int>topv = zigzag(root);

    for(int i=0; i<topv.size(); i++){
        cout<<topv[i]<<" ";
    }
    return 0;
}