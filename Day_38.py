"""
DAY 38 : Number is sparse or not.
https://www.geeksforgeeks.org/check-if-a-given-number-is-sparse-or-not/

QUESTION : Given a number N. The task is to check whether it is sparse or not. A number is said to be a 
sparse number if no two or more consecutive bits are set in the binary representation.

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).

Constraints:
0 <= N <= 10^6

"""

def isSparse(n):
    n_left = n<<1
    if n & n_left == 0:
        return True
    return False

isSparse(3)