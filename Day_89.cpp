/*
DAY 89: Reverse First K elements of Queue.

QUESTION : Given an integer K and a queue of integers, we need to reverse the order of the first K 
elements of the queue, leaving the other elements in the same relative order.

Only following standard operations are allowed on queue.
    enqueue(x) : Add an item x to rear of queue
    dequeue() : Remove an item from front of queue
    size() : Returns number of elements in queue.
    front() : Finds front item.

Example 1:

Input:
    5 3
    1 2 3 4 5

Output: 
    3 2 1 4 5
Explanation: 
    After reversing the given
    input from the 3rd position the resultant
    output will be 3 2 1 4 5.

Example 2:

Input:
    4 4
    4 3 2 1

Output: 
    1 2 3 4
Explanation: 
    After reversing the given
    input from the 4th position the resultant
    output will be 1 2 3 4.

Expected TIme Complexity : O(n)
Expected Auxilliary Space : O(n)

Constraints:
1 <= N <= 1000
1 <= K <= N
*/

queue<int> modifyQueue(queue<int> q, int k)
{   
    stack <int> stk;
    queue <int> temp_q;
    
    for (int i=0; i<k; i++) {
        int t = q.front();
        q.pop();
        stk.push(t);
    }
    
    while(!q.empty()) {
        int ele = q.front();
        q.pop();
        temp_q.push(ele);
    }
    
    for (int i=0; i<k; i++) {
        int temp = stk.top();
        stk.pop();
        q.push(temp);
    }
    
    while(!temp_q.empty()) {
        int ele = temp_q.front();
        temp_q.pop();
        q.push(ele);
    }
    return q;   
}