/*
DAY 104: Level Order Traversal.
https://www.geeksforgeeks.org/level-order-traversal-in-spiral-form/

QUESTION : Complete the function to find spiral order traversal of a tree.

Example 1:

Input:
      1
    /   \
   3     2
Output:1 3 2

Example 2:

Input:
           10
         /     \
        20     30
      /    \
    40     60
Output: 10 20 30 60 40

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
0 <= Number of nodes <= 10^5
0 <= Data of a node <= 10^5
*/

vector <int> findSpiral(Node* root)
{
	// Code here
	vector<int> ans;
	
	stack<Node*> S1;
	stack<Node*> S2;
	
	S2.push(root);

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