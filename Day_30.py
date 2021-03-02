"""
DAY 30 : Isomorphic Strings.
https://www.geeksforgeeks.org/check-if-two-given-strings-are-isomorphic-to-each-other/

QUESTION : Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1. 
The characters in the strings are in lowercase.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= |str1|, |str2| <= 10^7

"""

def areRotations(s1,s2):
    #code here
    if len(s1)==len(s2):
        temp = s1+s1
        if s2 in temp:
            return True
        return False
    return False

s1 = 'geeksforgeeks'
s2 = 'forgeeksgeeks'

print(areRotations(s1, s2))