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

int sumTree(Node* root) {
    if(root == NULL) {
        return 0;
    }
    int leftV = sumTree(root->left);
    int rightV = sumTree(root->right);
    
    if (leftV == 0 && rightV == 0) {
        return root->data+leftV+rightV;
    }
    else if(leftV + rightV == root->data) {
        return leftV+rightV+root->data;
    }
    else {
        return 0;
    }
    
}
bool isSumTree(Node* root)
{
    int val = sumTree(root);
    if (val/2 == root->data)
        return true;
    else 
        return false;
}

int main() {
    Node* root = new Node(180);
    root->left = new Node(40);
    root->right = new Node(50);
    root->left->left = new Node(20);
    root->left->right = new Node(20);
    root->right->left = new Node(25);
    root->right->right = new Node(25);
    
    cout<<"Is Sum Tree: "<<isSumTree(root)<<endl;
    return 0;
}