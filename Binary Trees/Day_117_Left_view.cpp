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

void Left_View(Node *root){   
    vector<int> level_list;
    queue<Node *> q;
    Node *ptr = root;
    int level = -1;

    if (root!=NULL){
        q.push(root);
        level_list.push_back(0);
    }

    while(!q.empty()){
        
        ptr = q.front();
        q.pop();
        int current_level = level_list[0];
        level_list.erase(level_list.begin());

        if (level != current_level){
            cout<<ptr->data<<" ";
            level = current_level;
        }

        if (ptr->left) {
            q.push(ptr->left);
            level_list.push_back(current_level+1);
        }
        if (ptr->right) {
            q.push(ptr->right);
            level_list.push_back(current_level+1);
        }
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->right = new Node(8);

    // Recursive_Postorder(root);
    cout<<endl;
    Left_View(root);

    return 0;
}