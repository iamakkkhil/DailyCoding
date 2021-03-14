"""
DAY 42 : Count total set bits in all numbers from 1 to n.
https://www.geeksforgeeks.org/count-total-set-bits-in-all-numbers-from-1-to-n/

QUESTION : You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).  

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
0 <= N <= 10^8

"""

def countSetBits(n):
    
    n += 1
    count = 0
    
    x = 2
    while x//2 < n:
        quotient = n//x
        count += quotient * x // 2
        
        remainder = n % x
        if remainder > x//2:
            count += remainder - x//2
        
        x = x*2
    return count
