/*
DAY 106: Determine if Two Trees are Identical .
https://www.geeksforgeeks.org/write-c-code-to-determine-if-two-trees-are-identical/

QUESTION : Given two binary trees, the task is to find if both of them are identical or not. 

Example 1:
Input:
     1          1
   /   \      /   \
  2     3    2     3
Output: Yes
Explanation: There are two trees both
having 3 nodes and 2 edges, both trees
are identical having the root as 1,
left child of 1 is 2 and right child
of 1 is 3.

Example 2:
Input:
    1       1
  /  \     /  \
 2    3   3    2
Output: No
Explanation: There are two trees both
having 3 nodes and 2 edges, but both
trees are not identical.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(height of tree)

Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 105
*/

bool isIdentical(Node *r1, Node *r2) {
    if (r1 == NULL && r2 == NULL)
        return 1;
    
    if (r1 != NULL && r2 != NULL) {
        return (
            r1->data == r2->data &&
            isIdentical(r1->left, r2->left) &&
            isIdentical(r1->right, r2->right)
        );
    }
    return 0;
}