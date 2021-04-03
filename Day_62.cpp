/*
DAY 62 : Sorted insert for circular linked list.
https://www.geeksforgeeks.org/sorted-insert-for-circular-linked-list/

QUESTION : Given a sorted circular linked list, the task is to insert a new node in this circular 
list so that it remains a sorted circular linked list.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
 
Constraints:    
0 <= N <= 10^5

*/

class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
        Node* prev = NULL;
        Node* current = head;
        
        Node* newNode = new Node(data);
        
        if (head == NULL) {
            newNode->next = NULL;
            head = newNode;
        }
        else if (current->data >= newNode->data) {
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
            head = newNode;
        }
        else {
            while (current->next != head && current->next->data < newNode->data) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
            return head;
        }
        
    }
};
