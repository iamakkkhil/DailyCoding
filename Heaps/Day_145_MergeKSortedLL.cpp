#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next = NULL;
};

struct Node *
newNode(int data)
{
    struct Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(struct Node *head)
{
    struct Node *curr = head;

    cout << "Sorted Linked List: ";
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

struct compare {
    bool operator()(
        struct Node* a, struct Node* b)
    {
        return a->data > b->data;
    }
};


struct Node* mergeKSortedLinkedList(Node* arr[], int k)
{   
    priority_queue<struct Node*, vector<struct Node*>, compare> pq;

    for(int i=0; i<k; i++) {
        if (arr[i] != NULL) 
            pq.push(arr[i]);
    }

    struct Node* dummyHead = newNode(0);
    struct Node* last = dummyHead;

    while(!pq.empty()) {
        struct Node* curr = pq.top();
        pq.pop();

        last -> next = curr;
        last = last ->next;

        if (curr->next != NULL) {
            curr = curr->next;
        }
    }
    return dummyHead->next;
}

int main()
{
    int k = 3; 
    int n = 4; 

    Node* arr[k];

    arr[0] = newNode(1);
    arr[0]->next = newNode(3);
    arr[0]->next->next = newNode(5);
    arr[0]->next->next->next = newNode(7);

    arr[1] = newNode(2);
    arr[1]->next = newNode(4);
    arr[1]->next->next = newNode(6);
    arr[1]->next->next->next = newNode(8);

    arr[2] = newNode(0);
    arr[2]->next = newNode(9);
    arr[2]->next->next = newNode(10);
    arr[2]->next->next->next = newNode(11);

    struct Node* head = mergeKSortedLinkedList(arr, k);

    printList(head);

    return 0;
} 