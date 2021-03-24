"""
DAY 52 : Top K Frequent Elements in Array - | .
https://www.geeksforgeeks.org/find-k-numbers-occurrences-given-array/

QUESTION : Given a non-empty array of integers, find the top k elements which have the highest 
frequency in the array. If two numbers have the same frequency then the larger number should be 
given preference. 

Expected Time Complexity : O(N*Log(N))
Expected Auxilliary Space : O(N)

Constraints:
1 ≤ N ≤ 10^3
1 <= A[i] <= 10^4

"""


def topK(nums, k):
    freq = dict()
    for i in range(len(nums)):
        if nums[i] not in freq.keys():
            freq[nums[i]] = 1
        else:
            freq[nums[i]] += 1
    
    a = [0] * (len(freq)) 
    j = 0

    for i in freq: 
        a[j] = [i, freq[i]] 
        j += 1

    a = sorted(a, key = lambda x : x[0], reverse = True) 
    a = sorted(a, key = lambda x : x[1],  reverse = True) 

    topK = []
    for i in range(k):
        topK.append(a[i][0])
    
    return topK



nums = [1,1,1,2,2,3,4]
k = 2
topK(nums, k)