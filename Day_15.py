"""
DAY 15 : Sort an array of 0s, 1s and 2s.
https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

QUESTION : Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that 
sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 10^5
0 <= A[i] <= 2

"""


def sort_0_1_2(arr):
    count_0 = 0
    count_1 = 0
    count_2 = 0

    for i in arr:
        if i == 0:
           count_0 += 1
        elif i == 1:
            count_1 += 1
        else:
            count_2 += 1

    
    for i in range(len(arr)):
        if i < count_0:
            arr[i] = 0
        elif i < count_1+count_0:
            arr[i] = 1
        else :
            arr[i] = 2


Input = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]

sort_0_1_2(Input)
print(Input)
