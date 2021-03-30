"""
DAY 58 : Reverse a linked list.
https://www.geeksforgeeks.org/reverse-a-linked-list/

QUESTION : Given a linked list of N nodes. The task is to reverse this list.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
 
Constraints:    
1 <= N <= 10^4

"""

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Linkedlist:
    def __init__(self):
        self.head = None

    def AtEnd(self, newdata):
        NewNode = Node(newdata)
        if self.head is None:
            self.head = NewNode
            return
        last_ele = self.head
        while(last_ele.next):
            last_ele = last_ele.next
        last_ele.next = NewNode

    def reverse_LinkedList(self):
        prev = None
        current = self.head
        while(current is not None):
            next = current.next
            current.next = prev
            prev = current
            current = next
        self.head = prev

    
    def printlist(self):
        temp = self.head
        while temp:
            print(temp.data, end=" ")
            temp = temp.next

if __name__ == '__main__':
    LList = Linkedlist()

    enter_more = 'y'
    user_input = None

    while enter_more=='y' or enter_more == 'Y':
        user_input = int(input("Enter Element: "))
        enter_more = input("Want to enter more elements(y/n) :")
        LList.AtEnd(user_input)

    LList.reverse_LinkedList()
    LList.printlist()
