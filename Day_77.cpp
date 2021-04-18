 /*
DAY 77: Evaluation of Postfix Expression.
https://www.geeksforgeeks.org/stack-set-4-evaluation-postfix-expression/#:~:text=The%20expressions%20written%20in%20postfix,are%20not%20required%20in%20postfix.&text=Following%20is%20algorithm%20for%20evaluation,following%20for%20every%20scanned%20element

QUESTION : Given string S representing a postfix expression, the task is to evaluate the 
expression and find the final value. Operators will only include the basic arithmetic operators 
like *, /, + and -.

Example 1:

Input: S = "231*+9-"
Output: -4
Explanation:
    After solving the given expression, 
    we have -4 as result.

Example 2:

Input: S = "123+*8-"
Output: -3
Explanation:
    After solving the given postfix 
    expression, we have -3 as result.

Expected Time Complexity : O(|S|)
Expected Auixilliary Space : O(|S|)

Constraints:
1 ≤ |S| ≤ 10^5

*/


int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> Stk ;
        for(int i=0; i< S.size(); i++) {
            if (isdigit(S[i])) {
                Stk.push(S[i] - '0');
            }
            else {
                int val1 = Stk.top();
                Stk.pop();
                int val2 = Stk.top();
                Stk.pop();
                
                switch(S[i]) {
                    case '+' : Stk.push(val2 + val1);
                                break;
                    case '-' : Stk.push(val2 - val1);
                                break;
                    case '*' : Stk.push(val2 * val1);
                                break;
                    case '/' : Stk.push(val2 / val1);
                                break;
                }
            }
        }
        return Stk.top();
    }