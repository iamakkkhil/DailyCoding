"""
DAY 26 : Missing Characters in Panagram.
https://www.geeksforgeeks.org/missing-characters-make-string-pangram/

QUESTION : You are given a string s. You need to find the missing characters in the string to make a panagram.
Note: The output characters will be lowercase and lexicographically sorted, returns -1 if the string is a panagram, 
else it returns a string that consists missing characters.

Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(1)

Constraints:
1 <= |s| <= 10000

"""

def missingPanagram(s):
    lst = [1 for i in range(26)]
    for i in s.lower():
        lst[ord(i)-97] = 0
    
    string = ""
    for i in range(len(lst)):
        if lst[i] == 1:
            string += chr(i+97)
    
    if len(string)==26:
        return -1
    return string