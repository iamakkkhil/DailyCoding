#include <bits/stdc++.h>

using namespace std;

class BST
{
    int data;
    BST *left, *right;
 
public:
    BST();

    BST(int);

    BST* Insert(BST*, int);

    void Search(BST*, int);

    void Inorder(BST*);
};

BST ::BST()
    : data(0)
    , left(NULL)
    , right(NULL)
{
}

BST ::BST(int value)
{
    data = value;
    left = right = NULL;
}

BST* BST :: Insert(BST* root, int value) {
    
    if (root==NULL) {
        return new BST(value);
    }
    if (value > root->data) {
        root->right = Insert(root->right, value);
    }
    else {
        root->left = Insert(root->left, value);
    }

    return root;
}

void BST :: Search(BST* root, int value) {
    int flag = 0;

    while(root!=NULL) {
        if (root->data==value) {
            cout<<"Found"<<endl;
            flag = 1;
        }
        if (value > root->data)
            root = root->right;
        else 
            root = root->left;
    }

    if (!flag) {
        cout<<"Not Found"<<endl;
    }
}


int main()
{
    BST b, *root = NULL;
    root = b.Insert(root, 50);
    b.Insert(root, 30);
    b.Insert(root, 20);
    b.Insert(root, 40);
    b.Insert(root, 70);
    b.Insert(root, 60);
    b.Insert(root, 80);
 
    b.Search(root, 80);
    return 0;
}