"""
DAY 37 : Power of 2.
https://www.geeksforgeeks.org/program-to-find-whether-a-no-is-power-of-two/

QUESTION : Given a positive integer N. The task is to check if N is a power of 2. More formally, check 
if N can be expressed as 2x for some x.

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).

Constraints:
0 <= N <= 10^18

"""

def isPowerofTwo(n):
    i = 1 
    while i < n:
        i = i<<1
        
    if i ^ n == 0:
        return True
        
    return False
