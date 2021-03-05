"""
DAY 3:

QUESTION : Given an array of integers, find the first repeating element in it. We need 
to find the element that occurs more than once and whose index of first occurrence 
is smallest. If there is no such element, return -1.

Expected Time Complexity: O(NlogN)
Expected Auxilliary Space: O(N)

Constraints:
1 <= N <= 106
0 <= Ai<= 106

"""

lst = [10, 5, 3, 4, 3, 5, 6]

def first_repeating_element(lst):
    element_count = {}

    for i in range(len(lst)):
        if lst[i] in element_count.keys():
            element_count[lst[i]] = element_count[lst[i]] + 1
        else:
            element_count[lst[i]] = 1


    for i in range(len(lst)):
        if element_count[lst[i]] > 1:
            return lst[i]

    return -1

print(first_repeating_element(lst))



