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
int i=0;

void recursivePreorder(Node *root)
{
    if (root == NULL) return;

    cout<<root->data<<" ";
    recursivePreorder(root->left);
    recursivePreorder(root->right);
}

Node* construct_tree(string s, int *start){

    if (*start >= s.size() || s.size() == 0) return NULL;

    int num=0;
    while(*start<s.size() && s[*start]!='(' && s[*start]!=')'){
        int num_here = (int)(s[*start] - '0');
        num = num * 10 + num_here;
        *start = *start + 1;
    }

    struct Node* root = new Node(num);

    if (*start >= s.size()) return root;

    if (*start < s.size() && s[*start] == '(') {
        *start = *start + 1;
        root->left = construct_tree(s, start);
    }
    if (*start < s.size() && s[*start] == ')')
        *start = *start + 1;
 
    if (*start < s.size() && s[*start] == '(') {
        *start = *start + 1;
        root->right = construct_tree(s, start);
    }
    if (*start < s.size() && s[*start] == ')')
        *start = *start + 1;
    return root;
}


int main() {
    int start = 0;
    string s = "4(2(3)(1))(6(5))";

    Node* root = construct_tree(s, &start);
    recursivePreorder(root);

    return 0;
}