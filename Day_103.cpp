/*
DAY 103: ZigZag Tree Traversal.
https://www.geeksforgeeks.org/level-order-traversal-in-spiral-form/

QUESTION : Given a Binary Tree. Find the Zig-Zag Level Order Traversal of 
the Binary Tree.

Example 1:
Input:
        3
      /   \
     2     1
Output:
3 1 2

Example 2:
Input:
           7
        /     \
       9       7
     /  \     /   
    8    8   6     
   /  \
  10   9 
Output:
7 7 9 8 8 6 9 10

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ number of nodes ≤ 10^4
*/

vector <int> zigZagTraversal(Node* root)
{
	// Code here
	vector<int> ans;
	
	stack<Node*> S1;
	stack<Node*> S2;
	
	S1.push(root);

	while(!S1.empty() || !S2.empty()) {
	   while(!S1.empty()) {
	       Node* top = S1.top();
	       ans.push_back(top->data);
	        
	       if(top->left) 
	           S2.push(top->left);
	       if(top->right)
	           S2.push(top->right);
	       
	       S1.pop();
	   }
	   
	   while(!S2.empty()) {
	       Node* top = S2.top();
	       ans.push_back(top->data);
	       
	       if(top->right)
	           S1.push(top->right);
	       if(top->left) 
	           S1.push(top->left);
	            
	       S2.pop();
	   }
	}
	return ans;
}