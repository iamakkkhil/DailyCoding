/*
DAY 67 :  Delete Middle of Linked List.
https://www.geeksforgeeks.org/delete-middle-of-linked-list/

QUESTION : Given a singly linked list, delete middle of the linked list. For example, 
if given linked list is 1->2->3->4->5 then linked list should be modified to 1->2->4->5.

If there are even nodes, then there would be two middle nodes, we need to delete the 
second middle element. For example, if given linked list is 1->2->3->4->5->6 then it 
should be modified to 1->2->3->5->6.

If the input linked list is NULL or has 1 node, then it should return NULL.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
 
Constraints:    
1 <= N <= 1000
1 <= value <= 1000

*/

Node* deleteMid(Node* head)
{
    // Your Code Here
    int count = 0;
    if (head == NULL) {
        return NULL;
    }
    
    Node* current = head;
    while(current != NULL) {
        current = current->next;
        count++;
    }
    
    int mid = count/2 + 1;
    current = head;
    count = 0;
    while(current->next != NULL) {
        count++;
        if (count==mid-1) {
            current->next = current->next->next;
            return head;
        }
        current = current->next;
        
    }
}