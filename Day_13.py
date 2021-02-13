"""
DAY 13: Minimum Number of Platforms Required for a Railway/Bus Station.
https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/

QUESTION : Given arrival and departure times of all trains that reach a railway station, 
the task is to find the minimum number of platforms required for the railway station so that no train waits. 
We are given two arrays which represent arrival and departure times of trains that stop.

Expected Time Complexity: O(n log n)
Expected Auxilliary Space: O(n)

Constraints:
1 <= N <= 1000
1 <= A[i] < D[i] <= 2359

"""

arr = [9.00, 9.40, 9.50, 11.00, 15.00, 18.00]
dep = [9.10, 12.00, 11.20, 11.30, 19.00, 20.00]

def min_platform_req(arr, dep):
    arr.sort()
    dep.sort()

    n = len(arr)
    m = len(dep)
    count = 1
    platneeded = 0
    i=0
    j=0

    while i<n and j<m:
        if arr[i] <= dep[j]:
            i += 1
            platneeded += 1
        
        elif arr[i] > dep[j]:
            j += 1
            platneeded -= 1

        if platneeded > count:
            count = platneeded

    print(count)        

min_platform_req(arr, dep)



