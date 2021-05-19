/*
DAY 108: Vertical sum.
https://www.geeksforgeeks.org/vertical-sum-in-a-given-binary-tree/

QUESTION : Given a Binary Tree, find vertical sum of the nodes that are in same vertical line. 
Print all sums through different vertical lines starting from left-most vertical line to 
right-most vertical line.

Example 1:
Input:
       1
    /   \
  2      3
 / \    / \
4   5  6   7
Output: 
Explanation:
The tree has 5 vertical lines
Vertical-Line-1 has only one node
4 => vertical sum is 4
Vertical-Line-2: has only one node
2=> vertical sum is 2
Vertical-Line-3: has three nodes:
1,5,6 => vertical sum is 1+5+6 = 12
Vertical-Line-4: has only one node 3
=> vertical sum is 3
Vertical-Line-5: has only one node 7
=> vertical sum is 7

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= Number of nodes <= 1000
*/

void util(Node *node, int hd, map<int, int> &Map) {
    if (node == NULL) 
        return;
    
    util(node->left, hd-1, Map);
    Map[hd] += node->data;
    util(node->right, hd+1, Map);
}

vector <int> verticalSum(Node *root) {
    // add code here.   
    vector <int> ver_sum;
    
    map <int, int> Map;
    map <int, int> :: iterator it;
    
    util(root, 0, Map);
    
    for (it = Map.begin(); it != Map.end(); ++it)
        ver_sum.push_back(it->second);
        
    return ver_sum;
}