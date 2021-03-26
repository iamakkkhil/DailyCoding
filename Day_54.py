"""
DAY 54 : Zero Sum Subarrays.
https://www.geeksforgeeks.org/find-the-largest-subarray-with-0-sum/

QUESTION : You are given an array arr[] of size n. Find the total count of sub-arrays 
having their sum equal to 0.

Expected Time Complexity : O(n)
Expected Auxilliary Space : O(n)
 
Constraints:    
1<= n <= 10^7
-10^10 <= arr[i] <= 10^10

"""

def findSubArrays(arr,n):
    sum_ = 0
    sum_same = {}
    zero_sum = 0
    for i in range(n):
        sum_ += arr[i]
        if sum_ == 0:
            zero_sum += 1
        if sum_ not in sum_same.keys():
            sum_same[sum_] = [i]
        else:
            sum_same[sum_].append(i)
            num = len(sum_same[sum_]) 
            zero_sum += num-1

    return zero_sum



n = 6
arr = [0,0,5,5,0,0]
findSubArrays(arr, n)
