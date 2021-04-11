/*
DAY 70 : Circular Linked List Delete at Position.
https://www.geeksforgeeks.org/delete-middle-of-linked-list/

QUESTION : Given a linked list of size n, you have to delete the node at position pos 
of the linked list and return the new head. The position of initial node is 1.
The tail of the circular linked list is connected to the head using next pointer.

Example 1:
Input:
    LinkedList: 1->2->3->4->5
    (the first and last node are connected,
    i.e. 5 --> 1)
    position: 4
Output: 1 2 3 5

Example 2:
Input:
    LinkedList: 2->5->7->8->99->100
    (the first and last node are connected,
    i.e. 5 --> 1)
    position: 6
Output: 2 5 7 8 99

Expected Time Complexity : O(n)
Expected Auxilliary Space : O(1)
 
Constraints:    
2 <= number of nodes <= 10^3
1 <= pos <= n

*/


Node * deleteAtPosition(Node *head,int pos)
{
    if (head == NULL) {
        return NULL;
    }
    
    Node *curr = head;
    Node* prev = NULL;
    
    while(curr->next != head){
        curr=curr->next;
    }
    prev = curr;
    
    curr = head;
    pos = pos-1;
    
    if (pos==0){
        prev->next = curr->next;
        head = curr->next;
    }
    else{
        while(pos--) {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
    }
    return head;
}