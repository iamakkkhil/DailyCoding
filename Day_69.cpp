/*
DAY 69 : Quick Sort on Linked List.
https://www.geeksforgeeks.org/quicksort-on-singly-linked-list/

QUESTION : Sort the given Linked List using quicksort. which takes O(n^2) time in worst case 
and O(nLogn) in average and best cases, otherwise you may get TLE.

Input:
In this problem, method takes 1 argument: address of the head of the linked list. The function 
should not read any input from stdin/console.
The struct Node has a data part which stores the data and a next pointer which points to the 
next element of the linked list.
There are multiple test cases. For each test case, this method will be called individually.

Output:
Set *headRef to head of resultant linked list.

User Task:
The task is to complete the function quickSort() which should set the *headRef to head of the 
resultant linked list.

Constraints:
1<=T<=100
1<=N<=200

Note: If you use "Test" or "Expected Output Button" use below example format


Example:
Input:
2
3
1 6 2
4
1 9 3 8

Output:
1 2 6
1 3 8 9

Explanation:
Testcase 1: After sorting the nodes, we have 1, 2 and 6.
Testcase 2: After sorting the nodes, we have 1, 3, 8 and 9.
*/

struct node* Tail(struct node* current){
    while(current!=NULL && current->next!=NULL){
        current=current->next;
    }
    return current;
}

struct node* partition(struct node* head, struct node* end, struct node** newHead, struct node** newEnd){
    struct node* prev = NULL;
    struct node* curr = head;
    struct node* tail = end;
    struct node* pivot = end;
    
    while(curr != pivot){
        if(curr->data < pivot->data){
            if(*newHead==NULL){
                *newHead = curr;
            }
            prev = curr;
            curr = curr->next;
        }
        else{
            struct node* temp = curr->next;
            if(prev)
                prev->next = curr->next;
            
            curr->next = NULL;
            tail->next = curr;
            
            tail = curr;
            curr = temp;
        }
    
    }
    
    if (*newHead==NULL)
        *newHead = pivot;
        
    *newEnd=tail;
    
    return pivot;
    
}

struct node* quickSortRef(struct node* head, struct node* end){
    struct node* newHead = NULL;
    struct node* newEnd = NULL;
    
    struct node* pivot = NULL;
    pivot = partition(head, end, &newHead, &newEnd);
    
    if(newHead != pivot){
        struct node* temp = newHead;
        while(temp->next != pivot){
            temp=temp->next;
        }
        temp->next = NULL;
    
        newHead = quickSortRef(newHead, temp);
        
        temp=Tail(newHead);
        temp->next=pivot;
    }
    pivot->next = quickSortRef(pivot->next, newEnd);
    return newHead;
}


void quickSort(struct node **headRef) {
    
    *headRef = quickSortRef(*headRef, Tail(*headRef));
    return;
}