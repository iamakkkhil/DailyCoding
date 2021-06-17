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

vector<int> topview(Node *root)
{
    queue <Node *> lvl;
    vector <int> topv;
    vector <int> value;
    int curr_l, curr_r, l_val, r_val;

    if (root)
    {
        lvl.push(root);
        l_val = r_val = curr_l = curr_r = 0;
        
        value.push_back(0);
        topv.insert(topv.begin(), root->data);   

        while (!lvl.empty())
        {
            Node *front = lvl.front();
            lvl.pop();

            if (front->left) 
            {
                curr_l = value[0] - 1;
                if (curr_l < l_val) 
                {
                    topv.insert(topv.begin(), front->left->data);
                    l_val = curr_l;
                }
                lvl.push(front->left);
                value.push_back(curr_l);
            }

            if (front->right) 
            {
                curr_r = value[0] + 1;
                if (curr_r > r_val) 
                {
                    topv.push_back(front->right->data);
                    r_val = curr_r;
                }
                lvl.push(front->right);
                value.push_back(curr_r);
            }

            value.erase(value.begin());
        }
    }
    return topv;
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

    cout<<endl;
    vector<int>topv = topview(root);

    for(int i=0; i<topv.size(); i++){
        cout<<topv[i]<<" ";
    }
    return 0;
}