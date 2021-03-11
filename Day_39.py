"""
DAY 39 : Bit Difference.
https://www.geeksforgeeks.org/count-number-of-bits-to-be-flipped-to-convert-a-to-b/

QUESTION : You are given two numbers A and B. The task is to count the number of bits needed to be 
flipped to convert A to B.

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).

Constraints:
0 <= N <= 10^6

"""


def countBitsFlip(a,b):
    n = a^b
    count = 0

    while n: 
        count += 1
        n &= (n-1)

    return count

print(countBitsFlip(10,20))