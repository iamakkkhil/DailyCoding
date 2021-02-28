"""
DAY 28 : Implement strstr.
https://www.geeksforgeeks.org/program-to-validate-an-ip-address/

QUESTION : Your task is to implement the function strstr. The function takes two strings as arguments (s,x) 
and  locates the occurrence of the string x in the string s. The function returns and integer denoting the 
first occurrence of the string x in s (0 based indexing).

Expected Time Complexity: O(|s|*|x|)
Expected Auxiliary Space: O(1)

Constraints:
1 <= |s|,|x| <= 1000

"""

s1 = "for"
s2 = "geeksforgeeks"

def present(s1, s2):
    n = len(s1)
    for i in range(len(s2)-len(s1)+1):
        if s1 == s2[i:i+n]:
            return i
    return -1

print(present(s1, s2))
