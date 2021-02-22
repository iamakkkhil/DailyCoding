"""
DAY 22: Search in a row wise and column wise sorted matrix.
https://www.geeksforgeeks.org/search-in-row-wise-and-column-wise-sorted-matrix/

QUESTION : Given a matrix of size n x m, where every row and column is sorted in increasing order, 
and a number x. Find whether element x is present in the matrix or not.

Expected Time Complexity: O(N + M)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N, M <= 1000
1 <= mat[][] <= 10^5
1 <= X <= 1000

"""

def search(mat,m, n, element):
    p = 0
    q = n-1
    
    while p<m and q>=00:

        if element == mat[p][q]:
            print(f'Found at {p}, {q}')
            break

        elif mat[p][q] > element:
            q-=1

        else:
            p+=1


mat = [ [10, 20, 30, 40],
        [15, 25, 35, 45],
        [27, 29, 37, 48],
        [32, 33, 39, 50] ]

search(mat, 4, 4, 33)