/*
DAY 73 : Merge Sort for Doubly Linked List.
https://www.geeksforgeeks.org/merge-sort-for-doubly-linked-list/

QUESTION : Given Pointer/Reference to the head of a doubly linked list of N nodes, 
the task is to Sort the given doubly linked list using Merge Sort in both non-decreasing 
and non-increasing order.

Example:
Input:
    N = 8
    value[] = {7,3,5,2,6,4,1,8}
Output:
    1 2 3 4 5 6 7 8
    8 7 6 5 4 3 2 1
Explanation: After sorting the given
    linked list in both ways, resultant
    matrix will be as given in the first
    two line of output, where first line
    is the output for non-decreasing
    order and next line is for non-
    increasing order.
 
Constraints:    
1 <= N <= 10^5

*/
Node* split(Node* head) {
    Node* fast = head;
    Node* slow = head;

    while (fast->next!=NULL && fast->next->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *mid = slow->next;
    slow->next = NULL;
    return mid;
}

Node* Merge(Node* head, Node* second) {
    while(!head) {
        return second;
    }

    while(!second) {
        return head;
    }

    if(head->data < second->data){
        head->next = Merge(head->next, second);
        head->next->prev = head;
        head->prev = NULL;
        return head;
    }
    else {
        second->next = Merge(head, second->next);
        second->next->prev = second;
        second->prev = NULL;
        return second;
    }
}

void Merge_Sort(Node* head) {
    if (!head and head->next==NULL) {
        return;
    }
    Node* second = split(head);

    head = Merge_Sort(head);
    second = Merge_Sort(second);

    return Merge(head, second);
}