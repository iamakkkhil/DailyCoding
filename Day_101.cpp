/*
DAY 101: Diameter of Binary Tree.
https://www.geeksforgeeks.org/diameter-of-a-binary-tree/

QUESTION : Given a Binary Tree, find diameter of it.
The diameter of a tree is the number of nodes on the longest path 
between two end nodes in the tree.

Example 1:

Input:
       1
     /  \
    2    3
Output: 3
Example 2:

Input:
         10
        /   \
      20    30
    /   \ 
   40   60
Output: 4

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 <= Number of nodes <= 10000
1 <= Data of a node <= 1000
*/

int diameterOpt(Node* root, int* height) {
    int left_height = 0, right_height = 0;
    int left_dia = 0, right_dia = 0;
    
    if (root == NULL) {
        *height = 0;
        return 0;
    }
    
    left_dia = diameterOpt(root->left, &left_height);
    right_dia = diameterOpt(root->right, &right_height);
    
    *height = max(left_height, right_height) + 1;
    
    return max(max(left_dia, right_dia), left_height+right_height+1);
}

int diameter(Node* root) {
    int height = 0;
    int d = diameterOpt(root, &height);
    return d;   
}