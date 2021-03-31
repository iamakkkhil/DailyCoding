/*
DAY 59 : Occurence of an integer in a Linked List.
https://www.geeksforgeeks.org/write-a-function-that-counts-the-number-of-times-a-given-int-occurs-in-a-linked-list/

QUESTION : Given a singly linked list and a key, count the number of occurrences of given key in the linked list.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
 
Constraints:    
1 <= N <= 10^4

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
    int count(struct node* head, int search_for)
    {
        int count=0;
        while (head != NULL)
        {
            if (head->data == search_for)
                count++;
                
            head = head->next;
        }
        return count;
    }
};