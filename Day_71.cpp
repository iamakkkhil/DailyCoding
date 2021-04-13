/*
DAY 71 : QuickSort on Doubly Linked List.
https://www.geeksforgeeks.org/quicksort-for-linked-list/

QUESTION : Sort the given doubly linked list of size N using quicksort. Just 
complete the partition function using the quicksort technique.

Example:
Example 1:

Input:
    LinkedList: 4->2->9
Output:
    2 4 9

Expected Time Complexity : O(NlogN)
Expected Auxilliary Space : O(1)
 
Constraints:    
1 <= N <= 200

*/

Node* partition(Node *l, Node *h){
    int x = h->data;
 
    Node *i = l->prev;
 
    for (Node *j = l; j != h; j = j->next)
    {
        if (j->data <= x)
        {
            i = (i == NULL)? l : i->next;
            swap(&(i->data), &(j->data));
        }
    }
    i = (i == NULL)? l : i->next; // Similar to i++
    swap(&(i->data), &(h->data));
    return i;
}