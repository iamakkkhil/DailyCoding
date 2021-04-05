/*
DAY 64 : Reverse a Linked List in groups of given size. 
https://www.geeksforgeeks.org/reverse-a-list-in-groups-of-given-size/

QUESTION : Given a linked list of size N. The task is to reverse every k 
nodes (where k is an input to the function) in the linked list.

Example:
Input:
    LinkedList: 1->2->2->4->5->6->7->8
    K = 4
Output: 4 2 2 1 8 7 6 5 
    Explanation: 
    The first 4 elements 1,2,2,4 are reversed first 
    and then the next 4 elements 5,6,7,8. Hence, the 
    resultant linked list is 4->2->2->1->8->7->6->5.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
 
Constraints:    
1 <= N <= 10^4
1 <= k <= N

*/


# include <iostream> 
 
using namespace std;

class LinkedList
{
    struct Node
    {
        int data;
        Node *next = NULL;

    } *head;

    public:
        LinkedList()
        {
            head = NULL;
        }

        void insert(int val);
        void display();
        void reverse(int k);

};


void LinkedList::insert(int val)
{
    Node *newnode = new Node;
    newnode->data = val;

    if (head == NULL)
    {
        head = newnode;
    }

    else
    {
        Node *current = head;
        
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newnode;
    }
    
}


void LinkedList::display()
{
    cout<<"Displaying: ";
    Node *current = head;

    while (current->next != NULL)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
    
    cout<<current->data<<endl;
    
}


void LinkedList::reverse(int k)
{
    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;
    int count = 0;

    if (head->next == NULL || k==1) {
            return;
    }
        
    while (count<k) {
        count++;
        next = current->next;
        if (count == k) {
            Node* save = current->next;
            head -> next = save;
        }
            current->next = prev;
        
        prev = current;
        current = next;
    }
    head = prev;
}


int main()
{
    LinkedList ll_obj;
    
    int N;
    cout<<"Enter N: ";
    cin>>N;

    cout<<"Enter elements to insert: ";
    for (int i = 0; i < N; i++)
    {   
        int each;
        cin>>each;

        ll_obj.insert(each);
    }
    ll_obj.reverse(1);
    ll_obj.display();
    return 0;
}