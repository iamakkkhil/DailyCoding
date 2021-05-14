/*
DAY 102: Sum Tree .
https://www.geeksforgeeks.org/check-if-a-given-binary-tree-is-sumtree/

QUESTION : Given a Binary Tree. Check whether it is a Sum Tree or not.
A Binary Tree is a Sum Tree in which value of each node x is equal to sum 
of nodes present in its left subtree and right subtree . An empty tree is 
also a Sum Tree as sum of an empty tree can be considered to be 0. A leaf 
node is also considered as a Sum Tree.

Example 1:

Input:
    3
  /   \    
 1     2

Output: 1
Explanation: The given tree is a sum 
tree so return a boolean true.

Example 2:

Input:

          10
        /    \
      20      30
    /   \ 
   10    10

Output: 0
Explanation: The given tree is not a sum
tree. For the root node, sum of elements
in left subtree is 40 and sum of elements
in right subtree is 30. Root element = 10
which is not equal to 30+40.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 ≤ number of nodes ≤ 10^4
*/

int result = 1;
int sum_tree(Node *root){
    if (root == NULL) 
        return 0;
    if (!root->left and !root->right)
        return root->data;
    if (result == 0)
        return 0;
    int a = sum_tree(root->left);
    int b = sum_tree(root->right);
    
    if (a+b != root->data)
        result = 0;
    return a+b+root->data;
}

bool isSumTree(Node* root)
{   
    result = 1;
    sum_tree(root);
    return result;
        // Your code here
}