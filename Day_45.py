"""
DAY 45 : Swap all odd and even bits.
https://www.geeksforgeeks.org/swap-all-odd-and-even-bits/

QUESTION : Given an unsigned integer N. The task is to swap all odd bits with even bits. 
For example, if the given number is 23 (00010111), it should be converted to 43(00101011). 
Here, every even position bit is swapped with adjacent bit on the right side(even position 
bits are highlighted in the binary representation of 23), and every odd position bit is 
swapped with an adjacent on the left side.

Expected Time Complexity: O(1).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 10^9

"""


def swapper(x):
    even_bits = x & 0xAAAAAAAA
  
    odd_bits = x & 0x55555555
      
    even_bits >>= 1
      
    odd_bits <<= 1 
  
    return (even_bits | odd_bits)  
  

num = int(input('Enter number: '))
print('After swapping: ', swapper(num))