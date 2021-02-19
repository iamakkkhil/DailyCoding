"""
DAY 19 : Transpose of Matrix.
https://www.geeksforgeeks.org/program-to-find-transpose-of-a-matrix/

QUESTION : Write a program to find the transpose of a square matrix of size N*N. 
Transpose of a matrix is obtained by changing rows to columns and columns to rows.

Expected Time Complexity: O(N * N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 100
-10^3 <= mat[i][j] <= 10^3

"""


def transpose(matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix)):
            if i<j:
                matrix[i][j] ,matrix[j][i] = matrix[j][i], matrix[i][j]
    
    print(matrix)

matrix = [[1, 2, 3, 4], [1, 2, 3, 4], [1, 2, 3, 4], [1, 2, 3, 4]]

transpose(matrix)