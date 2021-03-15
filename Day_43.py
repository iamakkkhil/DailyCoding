"""
DAY 43 : Count total set bits in all numbers from 1 to n.
https://www.geeksforgeeks.org/position-rightmost-different-bit/

QUESTION : Given two numbers M and N. The task is to find the position of the rightmost different bit 
in the binary representation of numbers.  

Expected Time Complexity: O(max(log m, log n)).
Expected Auxiliary Space: O(1).

Constraints:
1 <= M <= 10^9
1 <= N <= 10^9

"""

def posOfRightMostDiffBit(m,n):
    m = m^n

    count = 1
    while m:
        if m & 1 == 1:
            return count

        m = m>>1
        count+=1


print(posOfRightMostDiffBit(52,4))