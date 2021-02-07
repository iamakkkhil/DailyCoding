"""
DAY 7: Search an element in sorted and rotated array .
https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/

QUESTION : Given a sorted and rotated array A of N distinct elements which is rotated at some point, 
and given an element K. The task is to find the index of the given element K in the array A. If the 
element is not present, then return -1.

Expected Time Complexity: O(log N)
Expected Auxilliary Space: O(1)

Constraints:
1 ≤ N ≤ 107
0 ≤ Ai ≤ 108
1 ≤ K ≤ 108

"""

def binary_search(arr, low, high, key):
    if low > high:
        return -1

    mid = (low+high)//2


    if arr[mid] == key:
        return mid
    elif arr[mid] > key:
        return binary_search(arr, low, mid-1, key)
    else:
        return binary_search(arr, mid+1, high, key)   


def find_pivot(arr, low, high):
    if low > high:
        return -1
    
    if high == low: 
        return low
    
    mid = (low+high)//2
    
    if mid < high and arr[mid] > arr[mid+1]:
        return mid
    if mid > low and arr[mid] < arr[mid-1]:
        return mid-1

    if arr[low] <= arr[mid]:
        return find_pivot(arr, mid+1, high)
    return find_pivot(arr, low, mid-1)


def BinaryPivotedSearch(arr, low, high, key):

    pivot = find_pivot(arr, low, high)
    
    if pivot == -1:
        binary_search(arr, low, high, key)
    
    if arr[pivot] == key:
        return pivot
    elif arr[0] <= key:
        return binary_search(arr, low, pivot-1, key)
    return binary_search(arr, pivot+1, high ,key)
    



arr = [3,5,6,7,9,10,1,2]
key = 7
print(BinaryPivotedSearch(arr, 0, 7, key))

