"""
DAY 20: Inplace rotate square matrix by 90 degrees.
https://www.geeksforgeeks.org/inplace-rotate-square-matrix-by-90-degrees/

QUESTION : Given a square matrix of size N x N. The task is to rotate it by 90 degrees in anti-clockwise 
direction without using any extra space.

Expected Time Complexity : O(N^2)
Expected Auxilliary Space : O(1)

Constraints:
1 ≤ N ≤ 100
1 <= matrix[][] <= 1000

"""

def rotate_90_matrix(mat, N):
    
    for i in range(int(N/2)):
        for j in range(i, N-i-1):
            
            temp = mat[i][j]
            mat[i][j] = mat[j][N-i-1]
            mat[j][N-i-1] = mat[N-i-1][N-j-1]
            mat[N-i-1][N-j-1] = mat[N-j-1][i]
            mat[N-j-1][i] = temp



matrix = [ [ 1, 2, 3, 4 ], [ 5, 6, 7, 8 ], [ 9, 10, 11, 12 ], [ 13, 14, 15, 16 ] ]

rotate_90_matrix(matrix,len(matrix))
print(matrix)

