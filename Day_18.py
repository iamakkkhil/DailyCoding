"""
DAY 18 : Determinant of a matrix.
https://www.geeksforgeeks.org/determinant-of-a-matrix/

QUESTION : Given a square matrix of size N x N. The task is to find the determinant of this matrix.

Expected Time Complexity: O(N^4)
Expected Auxiliary Space: O(N^2)

Constraints:
1 <= N <= 8
-10 <= mat[i][j] <= 10

"""

def determinant(mat, N):
    if N == 1:
        return mat[0][0]

    if N == 2:
        return (mat[0][0]*mat[1][1]) - (mat[0][1]*mat[1][0])

    sum = 0
    for i in range(N):
        sign = (-1)**i

        co_factor_mat = [row[: i] + row[i+1:] for row in (mat[: 0] + mat[0+1:])]

        sub_mat = determinant(co_factor_mat, len(co_factor_mat))
        
        sum += (sign * mat[0][i] * sub_mat)

    return sum

mat = [[1, 0, 2, -1],
       [3, 0, 0, 5],
       [2, 1, 4, -3],
       [1, 0, 5, 0]]

N = len(mat)

print("Determinant is: ", determinant(mat, N))
