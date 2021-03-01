"""
DAY 29 : Isomorphic Strings.
https://www.geeksforgeeks.org/check-if-two-given-strings-are-isomorphic-to-each-other/

QUESTION : Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for every character 
of str1 to every character of str2 while preserving the order.

Note: All occurrences of every character in ‘str1’ should map to the same character in ‘str2’.

Expected Time Complexity: O(|str1|+|str2|).
Expected Auxiliary Space: O(Number of different characters).
Note: |s| represents the length of string s.

Constraints:
1 <= |str1|, |str2| <= 10^3

"""

def areIsomorphic(str1,str2):
    if len(str1) == len(str2):
        mapping = {}
        for i in range(len(str1)):
            if str1[i] in mapping.keys():
                if mapping[str1[i]] != str2[i]:
                    return False
            else:
                if str2[i] in mapping.values():
                    return False
                else:
                    mapping[str1[i]] = str2[i] 
        return True            
    else:       
        return False

print(areIsomorphic("pijthbsfy", "fvladzpbf"))