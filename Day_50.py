"""
DAY 50 : Print Non-Repeated Elements.
https://www.geeksforgeeks.org/non-repeating-element/

QUESTION : Hashing is very useful to keep track of the frequency of the elements in a list.

You are given an array of integers. You need to print the non-repeated elements as they appear 
in the array.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)

Constraints:
1 ≤ N ≤ 10^3
1 ≤ arr[i] ≤ 10^7

"""

def printNonRepeated(arr,n):
    count = {}
    dist = []
    for i in range(n):
        if arr[i] in count.keys():
            count[arr[i]]+=1
        else:
            count[arr[i]] = 1

    for i in arr:
        if count[i] == 1:
            dist.append(i)
    
    return dist 

print(printNonRepeated([10,20,40,30,10], 5))