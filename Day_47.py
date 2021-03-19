"""
DAY 47 : Max distance between same elements.
https://www.geeksforgeeks.org/maximum-distance-two-occurrences-element-array/

QUESTION : Given an array with repeated elements, the task is to find the maximum 
distance between two occurrences of an element.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)

Constraints:
1<=N<=10^6

"""


def maxDistance(arr, n):
    indx_loc = {}

    for i in range(len(arr)):
        if arr[i] not in indx_loc.keys():
            indx_loc[arr[i]] = [i]
        else :
            lst = indx_loc[arr[i]]
            lst.append(i)

    max_diff = 0
    for i in indx_loc:
        n = indx_loc[i]
        if len(n) > 1:
            if n[-1] - n[0] > max_diff:
                max_diff = n[-1] - n[0]

    print(max_diff)


arr = [3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2]
maxDistance(arr, len(arr))