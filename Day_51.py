"""
DAY 51 : Largest subarray with 0 sum.
https://www.geeksforgeeks.org/print-all-subarrays-with-0-sum/

QUESTION : Given an array having both positive and negative integers. 
The task is to compute the length of the largest subarray with sum 0.

Expected Time Complexity : O(N*Log(N))
Expected Auxilliary Space : O(N)

Constraints:
1 ≤ N ≤ 10^4
-1000 <= A[i] <= 1000, for each valid i

"""

def maxLen(n, arr):
    sum_ = 0
    sum_same = {}
    for i in range(n):
        sum_ += arr[i]
        if sum_ not in sum_same.keys():
            sum_same[sum_] = [i]
        else:
            sum_same[sum_].append(i)
    
    largest = 0
    for i in sum_same:
        if i == 0:
            length = sum_same[i][-1]+1
        else:
            length = sum_same[i][-1] - sum_same[i][0]
        
        if length > largest:
            largest = length

    return largest 




arr1 = [6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7]
arr2 = [-1,1,-1,1]

print(maxLen(len(arr1), arr1))
print(maxLen(len(arr2), arr2))