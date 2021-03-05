"""
DAY 33 : Anagram.
https://www.geeksforgeeks.org/check-whether-two-strings-are-anagram-of-each-other/

QUESTION : Given two strings a and b consisting of lowercase characters. The task is to check whether two 
given strings are an anagram of each other or not. An anagram of a string is another string that contains the 
same characters, only the order of characters can be different. For example, “act” and “tac” are an anagram of 
each other.

Expected Time Complexity: O(|a|+|b|).
Expected Auxiliary Space: O(Number of distinct characters).

Note: |s| represents the length of string s.

Constraints:
1 ≤ |a|,|b| ≤ 10^5

"""


def isAnagram(a,b):
    if len(a) == len(b):
        lst_chr = [0] * 26
        a = a.lower()
        b = b.lower()

        for i in range(len(a)):
            idx = ord(a[i])-97
            lst_chr[idx] += 1
        
        for j in range(len(b)):
            idx = ord(b[j])-97
            lst_chr[idx] -= 1

        for k in lst_chr:
            if k!=0:
                return False
        
        return True
        
    return False

a = 'geeksforgeeks'
b = 'forgeeksgeeks'

print(isAnagram(a,b))