"""
DAY 53 : Sort an array according to the other.
https://www.geeksforgeeks.org/sort-array-according-order-defined-another-array/

QUESTION : Given two integer arrays A1[ ] and A2[ ] of size N and M respectively. Sort the 
first array A1[ ] such that all the relative positions of the elements in the first array are 
the same as the elements in the second array A2[ ].

Note: If elements are repeated in the second array, consider their first occurance only. 

Expected Time Complexity : O(N*Log(N))
Expected Auxilliary Space : O(N)

Constraints:
1 ≤ N, M ≤ 10^6
1 ≤ A1[i], A2[i] ≤ 10^6

"""

def relativeSort (A1, N, A2, M):
    count_dict = {}
    ans = []
    for i in range(N):
        if A1[i] not in count_dict.keys():
            count_dict[A1[i]] = 1
        else:
            count_dict[A1[i]] += 1

    for j in range(M):
        if A2[j] in count_dict.keys():
            freq = count_dict[A2[j]]
            while freq:
                ans.append(A2[j])
                freq -= 1
            del count_dict[A2[j]]

    a = [0] * (len(count_dict)) 
    j = 0

    for i in count_dict: 
        a[j] = [i, count_dict[i]] 
        j += 1

    a = sorted(a, key = lambda x : x[0]) 

    for k in range(len(a)):
        freq = a[k][1]
        while freq:
            ans.append(a[k][0])
            freq -= 1

    return ans


N = 11 
M = 4
A1 = [2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8]
A2 = [2, 1, 8, 3]

print(relativeSort(A1, N, A2, M))