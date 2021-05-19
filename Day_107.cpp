/*
DAY 107: Root to leaf path sum.
https://www.geeksforgeeks.org/root-to-leaf-path-sum-equal-to-a-given-number/

QUESTION : Given a binary tree and an integer S, check whether there is root 
to leaf path with its sum as S.

Example 1:
Input:
Tree = 
            1
          /   \
        2      3
S = 2

Output: 0
Explanation:
There is no root to leaf path with sum 2.

Example 2:
Input:
Tree = 
            1
          /   \
        2      3
S = 4

Output: 1
Explanation:
The sum of path from leaf node 3 to root 1 is 4.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(height of tree)

Constraints:
1 ≤ N ≤ 10^4
1 ≤ S ≤ 10^6
*/

bool hasPathSum(Node *root, int S) {
    if (root == NULL) {
        return (S==0);
    }
    else {
        bool ans = 0;
        int subtree = S - root->data;
        
        if (subtree == 0 && root->left == NULL && root->right == NULL) {
            ans = 1;
            return ans;
        }
        if (root->left) {
            ans = ans || hasPathSum(root->left, subtree);
        }
        if (root->right) {
            ans = ans || hasPathSum(root->right, subtree);
        }
        return ans;
    }   
}