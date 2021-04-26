/*
DAY 84: Infix to Postfix.
https://www.geeksforgeeks.org/stack-set-2-infix-to-postfix/

QUESTION : Given an infix expression in the form of string str. Convert this infix expression to 
postfix expression.
Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
Note: The order of precedence is: ^ greater than * equals to / greater than + equals to -. 

Example 1:
Input: str = "a+b*(c^d-e)^(f+g*h)-i"
Output: abcd^e-fgh*+^*+i-
Explanation:
    After postfix expression, the resultant 
    exprter converting the infix expression 
    intoession will be abcd^e-fgh*+^*+i-

Example 2:
Input: str = "A*(B+C)/D"
Output: ABC+*D/
Explanation:
    After converting the infix expression 
    into postfix expression, the resultant 
    expression will be ABC+*D/

Expected Time Complexity : O(|str|)
Expected Auixilliary Space : O(|str|)

Constraints:
1 ≤ |str| ≤ 10^5
*/

int prec(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}

public:
string infixToPostfix(string s)
{
    stack<char> st;
    st.push('N');
    int l = s.length();
    string ns;
    
    for(int i = 0; i < l; i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
            ns+=s[i];

        else if(s[i] == '(')
        st.push('(');

        else if(s[i] == ')')
        {
            while(st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.pop();
        }

        else
        {
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }
    }
    
    while(st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ns += c;
    }
    return ns;
}