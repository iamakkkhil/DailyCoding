"""
DAY 35 : Reverse words in a given string.
https://www.geeksforgeeks.org/reverse-words-in-a-given-string/

QUESTION : Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)

Constraints:
1 <= |S| <= 2000

"""

def reverseWords(S):
        return ".".join(S.split(".")[::-1])

print(reverseWords("I.am.AKHIL.Bhalerao"))