"""
DAY 6: Merge two sorted arrays with O(1) extra space.
https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/

QUESTION : Given two sorted arrays arr1[] and arr2[] of sizes N and M in non-decreasing order. 
Merge them in sorted order without using any extra space. Modify arr1 so that it contains the 
first N elements and modify arr2 so that it contains the last M elements.

Expected Time Complexity: O((n+m) log(n+m))
Expected Auxilliary Space: O(1)

Constraints:
1 <= X, Y <= 5*10^4
0 <= arr1i, arr2i <= 10^9

"""

arr1 = [1, 5, 9, 10, 15, 20]
arr2 = [2, 3, 8, 13]


def merge_with_constant_space(arr1, arr2):
    
    n = len(arr1)
    m = len(arr2)

    i=n-1
    j=0
    while(i>=0 and j<m):

        if arr1[i] > arr2[j]:
            arr1[i], arr2[j] = arr2[j], arr1[i]
            j+=1
            i-=1
        else:
            break
    arr1.sort()
    arr2.sort()


merge_with_constant_space(arr1, arr2)
print(arr1, arr2)
    


