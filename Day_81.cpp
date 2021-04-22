/*
DAY 81: Parenthesis Checker.
https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/

QUESTION : Given an expression string x. Examine whether the pairs and the orders of 
“{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the function should return 'true' for 
exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.

Example 1:

Input:
    {([])}
Output: 
    true
Explanation: 
    { ( [ ] ) }. Same colored brackets can form 
    balaced pairs, with 0 number of 
    unbalanced bracket.

Example 2:

Input: 
    ([]
Output: 
    false
Explanation: 
    ([]. Here square bracket is balanced but 
    the small bracket is not balanced and 
    Hence , the output will be unbalanced.

Expected Time Complexity : O(|x|)
Expected Auixilliary Space : O(|x|)

Constraints:
1 ≤ |x| ≤ 32000
*/

bool ispar(string x) {   
    stack <char> s;
    char ch;
    for(int i=0; x[i]!='\0';i++) {
        if (x[i] == '(' || x[i] == '{' || x[i] == '[') {
            s.push(x[i]);
            continue;
        }
        if (s.empty()) return false;
        else {
            switch (x[i]) {
                case ')' : ch = s.top();
                            s.pop();
                            if (ch == '{' || ch == '[') return false;
                            break;
                case '}' : ch = s.top();
                            s.pop();
                            if (ch == '(' || ch == '[') return false;
                            break;
                case ']' : ch = s.top();
                            s.pop();
                            if (ch == '{' || ch == '(') return false;
                            break;
            }
        }
    }
    return s.empty();
}