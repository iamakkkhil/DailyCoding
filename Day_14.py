"""
DAY 14: Median of Two sorted arrays.
https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/

QUESTION : Given two sorted arrays of sizes N and M respectively. The task is to find 
the median of the two arrays when they get merged. If there are total even elements, return 
floor of average of middle two elements.

Expected Time Complexity : O(log(max(m,n)))
Expected Auxilliary Space : O(1)

Constraints:
1 <= N, M <= 10^6
1 <= arr[i], brr[i] <= 10^7

"""
arr1 = [1,2,]
arr2 = [2,3,4]
n1 = len(arr1)
n2 = len(arr2)

def findMedianSortedArrays(arr1, n1, arr2, n2):
    '''
    arr1: shorter array
    n1:   len of arr
    arr2: larger array
    n2:   len of array
    return: median
    '''
    #code here
    arr = []
    i=j=k=0
    
    while i<n1 and j<n2:
        if arr1[i] < arr2[j]:
            arr.append(arr1[i])
            i+=1
        else:
            arr.append(arr2[j])
            j+=1
        k+=1
    
    while i<n1:
        arr.append(arr1[i])
        i+=1
        k+=1
        
    while j<n2:
        arr.append(arr2[j])
        j+=1
        k+=1
    
    n = len(arr)-1
    
    if n%2!=0:
        return int((arr[int(n/2)] + arr[int(n/2)+1])/2)
    else:
        return arr[int(n/2)]