#include <iostream>
using namespace std;
 

struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};


struct LinkedList {
    Node* head;
    LinkedList() { head = NULL; }
 
    /* Function to reverse the linked list */
    void reverse()
    {
        Node* curr = head;
        Node* prev = NULL;
        Node* nextLink = curr->next;

        while (nextLink!=NULL) {
            curr->next = prev;
            prev = curr;
            curr=nextLink;
            nextLink = nextLink->next;
        }
        curr->next = prev;
        head = curr;
    }

    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
 
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main()
{
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
 
    cout << "Given linked list\n";
    ll.print();
 
    ll.reverse();
    
    cout << "\nReversed Linked list \n";
    ll.print();
    return 0;
}