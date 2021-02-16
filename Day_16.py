"""
DAY 16 : Different Operations on Matrices.
https://www.geeksforgeeks.org/different-operation-matrices/

QUESTION : Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that 
sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

"""


def add(matrix1, matrix2, n1, m1, n2, m2):
    # n = no of rows
    # m = no of columns
    add = []
    if n1 == n2 and m1 == m2:
        for i in range(n1):
            inner = []
            for j in range(m1):
                sum_ = matrix1[i][j] + matrix2[i][j]
                inner.append(sum_)
            add.append(inner)    
        print(f'Addition is : {add}')
    else:
        print(f'Addition not possible')

def sub(matrix1, matrix2, n1, m1, n2, m2):
    # n = no of rows
    # m = no of columns
    sub = []
    if n1 == n2 and m1 == m2:
        for i in range(n1):
            inner = []
            for j in range(m1):
                sum_ = matrix1[i][j] - matrix2[i][j]
                inner.append(sum_)
            sub.append(inner)    
        print(f'Subtraction is : {sub}')
    else:
        print(f'Subtraction not possible')

def multiply(matrix1, matrix2, n1, m1, n2, m2):
    # n = no of rows
    # m = no of columns
    multiply = []
    if m1 == n2:
        for i in range(len(matrix1)):
            inner = []
            sum = 0
            for j in range(len(matrix2[0])):
                sum = 0
                for k in range(len(matrix2)):
                    sum += matrix1[i][k] * matrix2[k][j]
                inner.append(sum)
            multiply.append(inner)

        print(f'Multiplication is : {multiply}')
    else:
        print(f'Multiplication not possible')
                 

matrix1 = [[1,2], [3,4], [5,6]]
matrix2 = [[5,6,7], [7,8,9]]

add(matrix1, matrix2, 2,3,3,2)
