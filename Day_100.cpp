/*
DAY 100: Two Mirror Trees.
https://www.geeksforgeeks.org/check-if-two-trees-are-mirror/

QUESTION : Given a Two Binary Trees, write a function that returns true 
if one is mirror of other, else returns false.

Example 1:

Input:
T1:     1     T2:     1
      /   \         /   \
     2     3       3     2
Output: 1
Example 2:

Input:
T1:     10      T2:   10
       /  \          /  \
      20  30        20  30
     /  \          /  \
    40   60       40  60
Output: 0

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 <= Number of nodes<= 10000
-1000 <= Data of a node<= 1000
*/

int areMirror(Node* a, Node* b) {
    vector<int> left_tree;
    vector<int> right_tree;
    
    // -----------------ROOT/LEFT/RIGHT------------------------
    stack<Node*> nodeStack;
    nodeStack.push(a);
    
    while (!nodeStack.empty()) {
        Node* temp = nodeStack.top();
        nodeStack.pop();
        
        left_tree.push_back(temp->data);
        
        if (temp->right!=NULL) {
            nodeStack.push(temp->right);
        }
        if (temp->left!=NULL) {
            nodeStack.push(temp->left);
        }
    }
    
    // -----------------ROOT/RIGHT/LEFT------------------------
    nodeStack.push(b);
    while (!nodeStack.empty()) {
        Node* temp = nodeStack.top();
        nodeStack.pop();
        
        right_tree.push_back(temp->data);
        
        if (temp->left!=NULL) {
            nodeStack.push(temp->left);
        }
        if (temp->right!=NULL) {
            nodeStack.push(temp->right);
        }
    }
    
    return left_tree == right_tree;
}