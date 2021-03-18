"""
DAY 46 :  Check if two arrays are equal or not.
https://www.geeksforgeeks.org/check-if-two-arrays-are-equal-or-not/

QUESTION : Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. 
Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) 
of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)

Constraints:
1<=N<=10^7
1<=A[],B[]<=10^18

"""

def check(arr1, arr2, n):    
    count = {}
    
    for i in arr1:
        if i in count.keys():
            count[i] = count[i]+1
        else:
            count[i] = 1
            
    for i in arr2:
        if i in count.keys():
            count[i] = count[i]-1
    
    for j in count:
        if count[j] != 0:
            return False
    
    return True
        