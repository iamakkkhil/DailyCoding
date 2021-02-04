"""
DAY 4: Rearrange an array with O(1) extra space

QUESTION : Given an array arr[] of size N where every element is in the range 
from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 107
0 <= Lst[i] < N

"""


lst = [4, 0, 2, 1, 3]
n = len(lst)

def arrange(lst, n):
    for i in range(n):
        lst[i] += (lst[lst[i]] %n) * n

    for i in range(n):
        lst[i] = int(lst[i]/n)

print(lst)