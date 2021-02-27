"""
DAY 25: Maximum occuring character.
https://www.geeksforgeeks.org/maximum-occurring-character-in-an-input-string-set-2/

QUESTION : Given a string str. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Expected Time Complexity: O(N)
Expected Auxilliary Space: O(Number of distinct characters)

Constraints:
1 ≤ |s| ≤ 100

"""

def getMaxOccurringChar(s):
    freq = [0 for i in range(26)]

    for i in s:
        freq[ord(i)-97] += 1
        
    max_f = 0
    letter = None
    for i in range(len(freq)):
        if freq[i] > max_f:
            max_f = freq[i]
            letter = chr(i+97)
    
    print('Max occuring character: ', letter)
        

string = input('Enter string: ')
getMaxOccurringChar(string)