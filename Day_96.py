"""
DAY 96: Check whether the length of given linked list is Even or Odd.
https://www.geeksforgeeks.org/check-whether-the-length-of-given-linked-list-is-even-or-odd/

QUESTION : Given a linked list, task is to make a function which check whether the length of 
linked list is even or odd.

Examples:

Input : 1->2->3->4->NULL
Output : Even

Input : 1->2->3->4->5->NULL
Output : Odd 

Time Complexity: O(n)
Space Complexity: O(1)
"""

class Node: 
    def __init__(self):
        self.data = 0
        self.next = None

def push(head_ref, data):
    new_node = Node()
    new_node.data = data
    new_node.next = head_ref
    head_ref = new_node
    return head_ref

def LinkedListLength(head):
    while (head != None and head.next != None): 
        head = head.next.next
            
    if(head == None):
        return "Even"
    return "Odd"

if __name__=='__main__':
     
    head1 = None
      
    # create linked list1 3.1.5.7
    head1 = push(head1, 7)
    head1 = push(head1, 5)
    head1 = push(head1, 1)
    head1 = push(head1, 3)

    print(LinkedListLength(head1))
