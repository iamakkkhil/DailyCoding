"""
DAY 97: Find the character in first string that is present at minimum index in second string.
https://www.geeksforgeeks.org/find-character-first-string-present-minimum-index-second-string/

QUESTION : Given a string str and another string patt. Find the character in patt that is present 
at the minimum index in str. If no character of patt is present in str then print ‘No character 
present’.

Examples: 

Input: str = “geeksforgeeks”, patt = “set” 
Output: e 
Both e and s of patt are present in str, 
but e is present at minimum index, which is 1.

Expected Time Complexity: O(max(|str|, |patt|))
Expected Auxilary Space: O(K) where K <= 26
 
Constraints:
1 ≤ |str|, |patt| ≤ 10^4
"""

def printMinIndexChar(stri, patt):
    hash = dict()
    
    for i in range(len(stri)):
        if stri[i] in hash:
            pass
        else:
            hash[stri[i]] = i
    
    min_ind = 10000
    flag = 0
    
    for i in patt:
        if i in hash:
            ind = hash[i]
            
            if ind < min_ind:
                min_ind = ind
                flag = i

    if flag:
        return flag
    return 'No character present'

if __name__=='__main__':
    string1 = "akhilbhalerao"
    string2 = "bhale"

    print(printMinIndexChar(string1, string2))