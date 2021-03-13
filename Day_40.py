"""
DAY 40 : Gray to Binary equivalent.
https://www.geeksforgeeks.org/gray-to-binary-and-binary-to-gray-conversion/

QUESTION : Given N in Gray code equivalent. Find its binary equivalent. 

Note: We need to find the binary equivalent of the given gray code and return the decimal 
equivalent of the binary representation.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1). 

Constraints:
0 <= N <= 108
"""

def GrayToBinary(n):
    dec = n
    while dec > 0:
        dec = dec >> 1
        n = n^dec 

    return n

print(GrayToBinary(118428032))


"""
DAY 40 : Binary to Gray equivalent.
https://www.geeksforgeeks.org/gray-to-binary-and-binary-to-gray-conversion/

QUESTION : You are given a decimal number N. You need to find the gray code of the number N and convert it 
into decimal.

Expected Time Complexity: O(1).
Expected Auxiliary Space: O(1).

Constraints:
0 <= N <= 109
"""

def BinaryToGrey(n):
        return n ^ n>>1

print(BinaryToGrey(100000000))