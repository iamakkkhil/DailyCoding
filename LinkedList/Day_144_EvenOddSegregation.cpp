#include <iostream>
using namespace std;
 
class Node {
    int data;
    Node* next;

    public:
    Node* accept(int x) {
        Node* temp = new Node;
        temp->data = x;
        temp->next = NULL;

        return temp;
    }

    Node* push(int x, Node* ptr) {
        Node* start = ptr;
        Node* newnode = accept(x);

        if (start == NULL) {
            start=newnode;
            
        }
        else {
            Node *curr = start;
            while (curr->next != NULL) {
                curr=curr->next;
            }
            curr->next = newnode;
        }
        return start;
    }

    void display(Node* ptr) {
        Node* start = ptr;
        cout<<"Contents of LL are: \n";
        while (start != NULL) {
            cout<<start->data<<endl;
            start=start->next;
        }
    }

    void SegregateEvenOdd(Node* ptr){
        Node* odd = NULL;
        Node* even = NULL;

        Node* curr = ptr;

        while(curr != NULL) {
            if ((curr->data) %2 == 0) {
                even = push(curr->data, even);
            }
            else{
                odd = push(curr->data, odd);
            }
            curr=curr->next;
        }

        
        if (even) {
            curr = even;
            while(curr->next!=NULL) {
                curr=curr->next;
            }
            curr->next = odd;
            display(even);
        }
        else {
            display(odd);
        }   
    }

};


int main() {
    Node * head = NULL;
    Node p;

    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    for(int i=0; i<n; i++) {
        int temp_data;
        cout<<"\nEnter element "<<i+1<<" : ";
        cin>>temp_data;
        head = p.push(temp_data, head);
    }

    p.SegregateEvenOdd(head);

}