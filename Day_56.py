"""
DAY 56 : Count distinct elements in every window.
https://www.geeksforgeeks.org/count-distinct-elements-in-every-window-of-size-k/

QUESTION : Given an array of integers and a number K. Find the count of distinct 
elements in every window of size K in the array.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)
 
Constraints:    
1 <= N <= K <= 10^5
1 <= A[i] <= 10^5 , for each valid i

"""


def countDistinct(A, N, K):
    hashmap = {}
    ans = []
    for i in range(N):
        if A[i] not in hashmap.keys():
            hashmap[A[i]] = 1
        else:
            hashmap[A[i]] += 1
        
        if i>=K-1:
            ans.append(len(hashmap))
            remove_ = (i+1)-K
            hashmap[A[remove_]] -= 1
            if hashmap[A[remove_]] == 0:
                del hashmap[A[remove_]]

    print(ans)


N = 7
K = 4
A = [1,2,1,3,4,2,3]

countDistinct(A, N, K)