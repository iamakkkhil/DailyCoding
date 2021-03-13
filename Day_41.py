"""
DAY 41 : Find first set bit.
https://www.geeksforgeeks.org/position-of-rightmost-set-bit/

QUESTION : Given an integer an N. The task is to return the position of first set bit found from the right 
side in the binary representation of the number.

Note: If there is no set bit in the integer N, then return 0 from the function.  

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
0 <= N <= 10^8

"""

def getFirstSetBit(n):
    pos = 1
    while n>0:
        if n&1 == 1:
            return pos

        n = n>>1
        pos+=1
    
    return 0

        
print(getFirstSetBit(12))