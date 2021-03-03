"""
DAY 31 : Longest Substring Without Repeating Characters.
https://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/

QUESTION : Given a string S, find the length of its longest substring that does not have any repeating characters.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints: 
0<= N <= 10^5
here, N = S.length

"""

def SubsequenceLength(s):
    if len(s) == 0 :
        return 0

    count = 1 # length of current substring 
    answer = 1 # result ]
    
    visited = [-1]*256
    
    visited[ord(s[0])]=0

    for end in range(1,len(s)):
        idx = ord(s[end])
        
        if(visited[idx] == -1 or end-count > visited[idx]):
            count+=1

        else:
            
            answer = max(count, answer)

            count = end - visited[idx]
            
        visited[idx]=end
    return max(count,answer)

print(SubsequenceLength('dvdf'))