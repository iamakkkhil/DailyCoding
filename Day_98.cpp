/*
DAY 92: Count Leaves in Binary Tree.
https://www.geeksforgeeks.org/write-a-c-program-to-get-count-of-leaf-nodes-in-a-binary-tree/

QUESTION : Given a Binary Tree of size N , You have to count leaves in it. For example, there are two leaves in following tree

        1
     /      \
   10      39
  /
5


Example 1:


Input:
Given Tree is 
               4
             /   \
            8     10
           /     /   \
          7     5     1
         /
        3 
Output:
3
Explanation: 
Three leaves are 3 , 5 and 1.

Constraints:
1<= N <= 10^4
*/


//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
int countLeaves(Node* root)
{   
    if (root==NULL)
        return 0;
    if (root->left==NULL and root->right==NULL)
        return 1;
    else
        return countLeaves(root->left) + countLeaves(root->right);
}