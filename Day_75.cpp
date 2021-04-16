/*
DAY 75: Next Greater Element.
https://www.geeksforgeeks.org/next-greater-element-in-same-order-as-input/

QUESTION : Given an array arr[ ] of size N having distinct elements, the task is to find the next 
greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater 
than the current element.
If there does not exist next greater of current element, then next greater element for current element 
is -1. For example, next greater of the last element is always -1.

Example:
Input: 
    N = 4, arr[] = [1 3 2 4]
Output:
    3 4 4 -1
Explanation:
    In the array, the next larger element 
    to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
    since it doesn't exist, it is -1.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 10^6
1 ≤ Ai ≤ 10^18

*/

vector<long long> nextLargerElement(vector<long long> arr, int n) {

    vector<long long> ans (n);
    stack<long long> S ;
    
    for(int i=n-1; i>=0; i--) {
        
        while(!S.empty() and S.top() <= arr[i]) {
            S.pop();
        }
        
        if (S.empty()) {
            ans[i] = -1;
        }
        else {
            ans[i] = S.top();
        }
        
        S.push(arr[i]);
    }
    return ans;
}