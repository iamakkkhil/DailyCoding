"""
DAY 12: Repeatedly search an element by doubling it after every successful search.
https://www.geeksforgeeks.org/repeatedly-search-element-doubling-every-successful-search/

QUESTION : Given an array “a[]” and integer “b”. Find whether b is present in a[] or not. 
If present, then double the value of b and search again. We repeat these steps until b is not found. 
Finally we return value of b.

"""

lst = [1, 3, 5, 2, 4, 12]
lst.sort()

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

def repeatedly_sort(lst, element):
    found = 1
    
    while found!=-1:
        found = binary_search(lst, 0, len(lst)-1, element)
        if found!=-1:
            element *= 2
    return element


print(repeatedly_sort(lst, 1))
