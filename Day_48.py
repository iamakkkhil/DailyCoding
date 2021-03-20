"""
DAY 48 : Two Sum.
https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/

QUESTION : Given an array of positive integers and an integer. Determine whether or 
not there exist two elements in A whose sum is exactly equal to that integer.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)

Constraints:
1 ≤ N ≤ 10^5
1 ≤ A[i] ≤ 10^5
1 ≤ X ≤ 2*10^5

"""

def keypair(A, N, X):
    hashset = set()

    for i in range(N):
        temp = X - A[i]
        if temp in hashset:
            print(temp, A[i])
            return True
        hashset.add(A[i])

    return False

A = [1 ,2 ,5 ,6 ,7]
X = 4
N = 5
print(keypair(A, N, X))