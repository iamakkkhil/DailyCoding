"""
DAY 9: Union of Two Sorted Arrays.
https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/

QUESTION : Union of two arrays can be defined as the common and distinct 
elements in the two arrays.
Given two sorted arrays of size N and M respectively, find their union.

Expected Time Complexity: O(N+M).
Expected Auxiliary Space: O(N+M).

Constraints:
1 <= N,M <= 105
1 <= arr[i], brr[i] <= 106

"""


def union(arr1, arr2, m, n):
    
    union_arr = []
    
    i=j=k=0

    while i<m and j<n:
        if k>0:
            if arr1[i] < arr2[j]:
                if union_arr[-1] != arr1[i] and k>0:
                    union_arr.append(arr1[i])
                i+=1
                
            elif arr1[i] > arr2[j]:
                if union_arr[-1] != arr2[j] and k>0:
                    union_arr.append(arr2[j])
                j+=1
                
            else:
                if union_arr[-1] != arr1[i] and k>0:
                    union_arr.append(arr1[i])
                i+=1
                j+=1
            k+=1
        else:
            if arr1[i] < arr2[j]:
                union_arr.append(arr1[i])
                i+=1
                
            elif arr1[i] > arr2[j]:
                union_arr.append(arr2[j])
                j+=1
                
            else:
                union_arr.append(arr1[i])
                i+=1
                j+=1
            k+=1

            
    
    while i<m:
        if union_arr[-1] != arr1[i] and k>0:
            union_arr.append(arr1[i])
        i+=1
        k+=1
        

    while j<n:
        if union_arr[-1] != arr2[j] and k>0:
            union_arr.append(arr2[j])
        j+=1
        k+=1
        

    return union_arr



lst1 = [4, 12, 45]
lst2 = [13, 17, 18, 19, 20, 22, 22, 27, 36, 39, 46, 48, 50]

print(union(lst1, lst2, len(lst1), len(lst2)))



