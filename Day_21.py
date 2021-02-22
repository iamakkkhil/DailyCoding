"""
DAY 21: Spirally traversing a matrix.
https://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/

QUESTION : Given a matrix of size R*C. Traverse the matrix in spiral form.

Expected Time Complexity : O(R*C)
Expected Auxilliary Space : O(R*C)

Constraints:
1 <= R, C <= 100
0 <= matrix[i] <= 100

"""


def spiral(arr, rows, columns):
    
    p = 0
    q = 0
    li = []
    
    while p < rows and q < columns:
        for i in range(q, columns):
            li.append(arr[p][i])
            # print(arr[p][i])
        p+=1

        for j in range(p, rows):
            li.append(arr[j][columns-1])
            # print(arr[j][columns-1])
        columns-=1

        if p < rows:
            for k in range(columns-1, q-1, -1):
                li.append(arr[rows-1][k])
                # print(arr[rows-1][k])
            rows-=1

        if q < columns:
            for l in range(rows-1, p-1, -1):
                li.append(arr[l][q])
                # print(arr[l][q])
            q+=1

    return li


a =  [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]

spiral_lst = spiral(a, 4, 4)

print(spiral_lst)