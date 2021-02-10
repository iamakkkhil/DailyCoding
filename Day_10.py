"""
DAY 10: Intersection of Two Sorted Arrays.
https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/

QUESTION : The intersection of two arrays contains the elements common to both the arrays. 
The intersection should not count duplicate elements.
Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection

Expected Time Complexity: O(N+M).
Expected Auxiliary Space: O(N+M).

Constraints:
1 <= N,M <= 10^5
1 <= arr1[i], arr2[i] <= 10^6

"""


def intersection(a, b, n, m):

    inters_arr = []
    
    i=j=k=0

    while i<n and j<m:
        if a[i] < b[j]:
            i+=1
                
        elif a[i] > b[j]:
            j+=1

        else:
            if k>0:
                if inters_arr[-1] != a[i] :
                    inters_arr.append(a[i])
                    k+=1
            else:
                inters_arr.append(a[i])
                k+=1
            i+=1
            j+=1
    
    return inters_arr


lst1 = [4, 12, 13, 18, 19, 45]
lst2 = [13, 17, 18, 19, 20, 22, 22, 27, 36, 39, 46, 48, 50]

print(intersection(lst1, lst2, len(lst1), len(lst2)))

