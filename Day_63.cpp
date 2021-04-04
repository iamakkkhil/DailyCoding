/*
DAY 63 : Split a Circular Linked List into two halves.
https://www.geeksforgeeks.org/split-a-circular-linked-list-into-two-halves/

QUESTION : Given a Cirular Linked List of size N, split it into two halves circular lists. 
If there are odd number of nodes in the given circular linked list then out of the resulting 
two halved lists, first list should have one node more than the second list. The resultant 
lists should also be circular lists and not linear lists.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
 
Constraints:    
0 <= N <= 100

*/


void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    Node* double_ptr = head;
    Node* single_ptr = head;
    
    if(head == NULL) 
        return; 
    
    while(double_ptr->next != head && double_ptr->next->next != head) {
        double_ptr = double_ptr->next->next;
        single_ptr = single_ptr->next;
    }
    
    if(double_ptr->next->next == head) 
        double_ptr = double_ptr->next; 
    
    *head1_ref = head;
    
    if (head->next!= head) {
        *head2_ref = single_ptr->next;
    }
    
    double_ptr->next = single_ptr->next;
    single_ptr->next = head;
}