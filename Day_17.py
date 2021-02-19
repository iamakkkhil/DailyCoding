"""
DAY 17 : Minimize the maximum difference of adjacent elements after at most K insertions.
https://www.geeksforgeeks.org/minimize-the-maximum-difference-of-adjacent-elements-after-at-most-k-insertions/

QUESTION : Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that 
sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.Given an array 
of N elements, the task is to minimize the maximum difference of adjacent elements by inserting at most K 
elements in the array.

Constraints:
T <= 100
2 <= n <= 10^4
1 <= arr[i] <= 10^3
1 <= k <= 10^5

"""

def minMaxDiff(arr, n, k):
 
    max_adj_dif = float('-inf')

    for i in range(n - 1):
        max_adj_dif = max(max_adj_dif, abs(arr[i] - arr[i + 1]))
 
    if (max_adj_dif == 0):
        return 0

    best = 1
    worst = max_adj_dif
     
    while (best < worst):
        mid = (best + worst) // 2
 
        required = 0
 
        for i in range(n - 1):
            required += (abs(arr[i] - arr[i + 1]) - 1) // mid
             

        if (required > k):
            best = mid + 1

        else:
            worst = mid
 
    return worst
 
arr = list(map(int, input('Enter array: ').split(' ')))
n = len(arr)
k = int(input('Enter k : '))
 
print(minMaxDiff(arr, n, k))

