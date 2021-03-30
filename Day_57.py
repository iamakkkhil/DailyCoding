"""
DAY 57 : Print elememts of a Linkedlist.

QUESTION : Print all elements of a Linked List where we take linked list as input and print the 
linked list in a single line.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
 
Constraints:    
1 <= N <= 100

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


    LList.printlist()
