/*
DAY 66 : Intersection Point in Y Shapped Linked Lists.
https://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/

QUESTION : Given two singly linked lists of size N and M, write a program to get the point where 
two linked lists intersect each other.

Example:
Input:
    LinkList1 = 3->6->9->common
    LinkList2 = 10->common
    common = 15->30->NULL
Output: 15

Expected Time Complexity : O(N+M)
Expected Auxilliary Space : O(1)
 
Constraints:    
1 ≤ N + M ≤ 2*10^5
-1000 ≤ value ≤ 1000

*/

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int count_1 = 0;
    int count_2 = 0;
    
    Node* current1 = head1;
    Node* current2 = head2;
    
    while(current1 != NULL) {
        count_1+=1;
        current1 = current1->next;
    }
    
    while(current2 != NULL) {
        count_2+=1;
        current2 = current2->next;
    }
    
    int diff = abs(count_1 - count_2);
    
    current1 = head1;
    current2 = head2;
    
    if (count_1 > count_2) {
        for (int i = 0; i < diff; i++) {
            current1 = current1->next;
        }
    }
    else if (count_2 > count_1) {
        for (int i = 0; i < diff; i++) {
            current2 = current2->next;
        }
    }
    
    while(current1 != NULL && current2 != NULL) {
        if (current1 == current2) {
            return current1->data;
        }
        current1 = current1->next;
        current2 = current2->next;
    }
    
    return -1;
    
}