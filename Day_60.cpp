/*
DAY 60 : Pairwise swap elements of a linked list.
https://www.geeksforgeeks.org/pairwise-swap-elements-of-a-given-linked-list/

QUESTION : Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.
For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.
Note: You need to swap the nodes, not only the data.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
 
Constraints:    
1 <= N <= 10^3

*/


struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

}*head;

class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        Node *a = head, *b, *c;
        Node *prev = NULL;
        
        while( a && a->next )
        {
            b = a->next;     
            c = b->next;     
            
            if(a == head)
                // b will be new head
                head = b;
            else
                // else, linking second node i.e. b, to a's ancestor
                prev->next = b;
            
            b->next = a;     // a should now come after b
            a->next = c;     // connecting a to list ahead
            
            // now we have to update a and prev for next pair
            prev = a;
            a = c;
        }
        
        return head;
    }