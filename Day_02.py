"""
DAY 2:

QUESTION : Given two integers ‘a’ and ‘m’. The task is to find the smallest modular 
multiplicative inverse of ‘a’ under modulo ‘m’. If the modular multiplicative inverse 
doesn't exist return -1.

Expected Time Complexity : O(m)
Expected Auxilliary Space : O(1)

Constraints :
Constraints:
1 <= a <= 10**4
1 <= m <= 10**4

"""

def modInverse(a,m):
    flag = 0
    for i in range(m):
        if (a*i)%m == 1:
            return i
        
    return -1
