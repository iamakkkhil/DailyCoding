/*
DAY 74: Reverse a string using Stack.
https://www.geeksforgeeks.org/stack-set-3-reverse-string-using-stack/

QUESTION : You are given a string S, the task is to reverse the string using stack.

Example:
Input: S="GeeksforGeeks"
Output: skeeGrofskeeG

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ length of the string ≤ 100

*/

char* reverse(char *S, int len)
{   
    stack <char> s;
    for(int i=0; i<len; i++){
        s.push(S[i]);
    }
    for (int i=0; i<len; i++)
    {
        S[i] = s.top();
        s.pop();
    }
    return S;
}