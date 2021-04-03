/*
DAY 61 : Add two numbers represented by linked lists.
https://www.geeksforgeeks.org/sum-of-two-linked-lists/

QUESTION : Given two numbers represented by two linked lists of size N and M. The task is 
to return a sum list. The sum list is a linked list representation of the addition of two 
input numbers.

Expected Time Complexity : O(N+M)
Expected Auxilliary Space : O(Max(N,M))
 
Constraints:    
1 <= N, M <= 5000

*/

class Solution
{
    public:
    
    struct Node* reverse(struct Node* head) {
        Node* prev = NULL;
        Node* current = head;
        
        while (current != NULL) {
            Node* next = current->next;
            current->next = prev;
            
            prev = current;
            current = next;
        }
        head = prev;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        int carry = 0;
        
        first = reverse(first);
        second = reverse(second);
        
        Node* ans = NULL;
        
        while (first!=NULL and second!=NULL) {
            int num1 = first->data;
            int num2 = second->data;
            
            int sum_ = num1 + num2 + carry;
            carry = sum_/10;
            sum_ = sum_%10;
            
            Node* newNode = new Node(sum_);
            newNode->next = ans;
            ans = newNode;
            
            first = first->next;
            second = second->next;
        }
        
        while (first!=NULL) {
            int num1 = first->data;
            
            int sum_ = num1 + carry;
            carry = sum_/10;
            sum_ = sum_%10;
            
            Node* newNode = new Node(sum_);
            newNode->next = ans;
            ans = newNode;
            
            first = first->next;
        }
        
        while (second!=NULL) {
            int num2 = second->data;
            
            int sum_ = num2 + carry;
            carry = sum_/10;
            sum_ = sum_%10;
            
            Node* newNode = new Node(sum_);
            newNode->next = ans;
            ans = newNode;
            
            second = second->next;
        }
        
        
        if (carry!=0) {
            Node* newNode = new Node(carry);
            newNode->next = ans;
            ans = newNode;
            
            carry = 0;
        }
        
        return ans;
    }
};