/*
DAY 85: Generate Binary Numbers.
https://www.geeksforgeeks.org/interesting-method-generate-binary-numbers-1-n/

QUESTION : Given a number N. The task is to generate and print all binary numbers with 
decimal values from 1 to N.

Example 1:

Input:
N = 2
Output: 
1 10
Explanation: 
Binary numbers from
1 to 2 are 1 and 10.

Example 2:

Input:
N = 5
Output: 
1 10 11 100 101
Explanation: 
Binary numbers from
1 to 5 are 1 , 10 , 11 , 100 and 101.

Expected Time Complexity : O(N log2N)
Expected Auixilliary Space : O(N log2N)

Constraints:
1 ≤ N ≤ 10^6
*/

vector<string> generate(int N)
{
	queue <string> q;
	vector <string> numbers;
	
	q.push("1");
	
	while(N--) {
        
        string top = q.front();
        q.pop();
        
        numbers.push_back(top);
        
        string n1, n2;
        n1 = top;
        n2 = n1;
        
        n1.append("0");
        n2.append("1");
        
        q.push(n1);
        q.push(n2);
	}
    return numbers;	
}