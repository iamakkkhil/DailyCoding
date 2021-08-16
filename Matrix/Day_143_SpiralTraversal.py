def spiralTraversal(m, n, matrix):
    k, l, i = 0, 0, 0

    while(k<m and l<n):
        for i in range(l, n):
            print(matrix[k][i])
        k += 1

        for i in range(k, m):
            print(matrix[i][n-1])
        n -= 1

        if (k < m):
            for i in range(n-1, l-1, -1):
                print(matrix[m-1][i])
            m-=1

        if (l<n):
            for i in range(m-1, k-1, -1):
                print(matrix[i][l])
            l+=1
    


if __name__ == '__main__':
    matrix = [
        [1, 2, 3, 4, 17],
        [5, 6, 7, 8, 18],
        [9, 10, 11, 12, 19],
        [13, 14, 15, 16, 20]
    ]

    spiralTraversal(4, 5, matrix)
