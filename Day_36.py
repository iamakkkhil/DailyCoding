"""
DAY 36 : Check whether K-th bit is set or not.
https://www.geeksforgeeks.org/check-whether-k-th-bit-set-not/

QUESTION : Given a number N and a bit number K, check if Kth bit of N is set or not. A bit is called set 
if it is 1. Position of set bit '1' should be indexed starting with 0 from LSB side in binary representation 
of the number.

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 10^9
0 ≤ K ≤ floor(log2(N) + 1)

"""

def checkKthbit(n, k):
    n = bin(n)[2:]
    if int(n[-k-1]) & 1 == 1:
        return True
    else:
        return False

print(checkKthbit(76,4))