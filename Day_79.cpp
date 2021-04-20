/*
DAY 79: Sort a stack.
https://www.geeksforgeeks.org/sort-a-stack-using-recursion/

QUESTION : Given a stack, the task is to sort it such that the top of the stack has the greatest element.

Example 1:
Input:
    Stack: 3 2 1
Output: 3 2 1

Example 2:
Input:
    Stack: 11 2 32 3 41
Output: 41 32 11 3 2

Expected Time Complexity : O(N*N)
Expected Auixilliary Space : O(N) recursive

Constraints:
1<=N<=100
*/

void sortedInsert(stack<int> &s, int x)
{
	if(s.empty() or x>s.top())
	{
		s.push(x);
		return;
	}
	int temp = s.top();
	s.pop();
	sortedInsert(s,x);
	s.push(temp);
}

void SortedStack :: sort()
{
	if(!s.empty())
	{
		int x = s.top();
		s.pop();
		sort();
		sortedInsert(s,x);
	}
}