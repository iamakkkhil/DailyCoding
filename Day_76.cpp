 /*
DAY 76: Get minimum element from stack.
https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/

QUESTION : You are given N elements and your task is to Implement a Stack in which 
you can get minimum element in O(1) time.

Example 1:

Input:
    push(2)
    push(3)
    pop()
    getMin()
    push(1)
    getMin()
Output: 3 2 1
Explanation: In the first test case for query 
    push(2)  the stack will be {2}
    push(3)  the stack will be {2 3}
    pop()    poped element will be 3 the
            stack will be {2}
    getMin() min element will be 2 
    push(1)  the stack will be {2 1}
    getMin() min element will be 1


Expected Time Complexity : O(1) for all the 3 methods.
Expected Auixilliary Space : O(1) for all the 3 methods.

Constraints:
1 <= Number of queries <= 100
1 <= values of the stack <= 100

*/

int _stack :: getMin()
{
   if (s.empty()){
       return -1;
   }
   else {
       return minEle;
   }
}

/*returns poped element from stack*/
int _stack ::pop()
{
    if (s.empty()){
       return -1;
   }
   int top = s.top();
   s.pop();
   
   if (top < minEle){
       int k = minEle;
       minEle = 2*minEle - top;
       return k;
   }
   else{
       return top;
   }
}

/*push element x into the stack*/
void _stack::push(int x)
{
   if (s.empty()){
       minEle = x;
       s.push(x);
       return;
    }
    if (x < minEle){
        s.push(2*x - minEle);
        minEle = x;
    }
    else{
        s.push(x);
    }
}
