/*
DAY 65 : Detect Loop in linked list. 
https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

QUESTION : Given a linked list of N nodes. The task is to check if the linked list has 
a loop. Linked list can contain self loop.

Example:
Input:
    N = 3
    value[] = {1,3,4}
    x = 2
Output: True
    Explanation: In above test case N = 3.
    The linked list with nodes N = 3 is
    given. Then value of x=2 is given which
    means last node is connected with xth
    node of linked list. Therefore, there
    exists a loop.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
 
Constraints:    
1 <= N <= 10^4
1 <= Data on Node <= 10^3

*/


bool detectLoop(Node* head)
{
    // your code here
    Node* slow_ptr = head;
    Node* fast_ptr = head;
    
    while (slow_ptr && fast_ptr && fast_ptr->next) {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
        
        if (slow_ptr == fast_ptr) {
            return 1;
        }
    }
    return 0;
}