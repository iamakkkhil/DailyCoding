/*
DAY 99: Right View of Binary Tree.
https://www.geeksforgeeks.org/right-view-binary-tree-using-queue/

QUESTION : Given a Binary Tree, find Right view of it. Right view of a Binary Tree is set of nodes 
visible when tree is viewed from right side.

Right view of following tree is 1 3 7 8.
          1
       /     \
     2        3
   /   \     /   \
  4     5   6      7
    \
     8


Example 1:

Input:
       1
    /    \
   3      2
Output: 1 2
Example 2:

Input:
     10
    /   \
  20     30
 /   \
40  60 
Output: 10 30 60

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 <= Number of nodes <= 10^5
1 <= Data of a node <= 10^5.
*/

vector<int> rightView(Node *root)
{   
    vector<int> right_side;
    
    if (root == NULL)
        return right_side;
        
    queue<Node*> q;
    q.push(root);
    
    
    while(!q.empty()) {
        
        int n = q.size();
        
        for(int i=1; i<=n; i++) {
            Node* temp = q.front();
            q.pop();
            
            if (i == n) {
                right_side.push_back(temp->data);
            }
            if (temp->left != NULL){
                q.push(temp->left);
            }
            if (temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
    return right_side;
}