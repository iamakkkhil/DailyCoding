"""
DAY 23: Max rectangle.
https://www.geeksforgeeks.org/maximum-size-rectangle-binary-sub-matrix-1s/

QUESTION : Given a binary matrix. Find the maximum area of a rectangle formed only of 1s in the given matrix.

Expected Time Complexity: O(N * M)
Expected Auxiliary Space: O(M)

Constraints:
1 <= n,m <= 1000
0 <= M[][] <= 1

"""

def maxHist(row):
        result = []
        top_val = 0
        max_area = 0
        area = 0  
        i = 0
        while (i < len(row)):
            if (len(result) == 0) or (row[result[-1]] <= row[i]):
                result.append(i)
                i += 1
            else:
                top_val = row[result.pop()]
                area = top_val * i
 
                if (len(result)):
                    area = top_val * (i - result[-1] - 1)
                max_area = max(area, max_area)

        while (len(result)):
            top_val = row[result.pop()]
            area = top_val * i
            if (len(result)):
                area = top_val * (i - result[-1] - 1)
            max_area = max(area, max_area)
 
        return max_area
 

def maxArea(M):
    result = maxHist(M[0])

    for i in range(1, len(M)):
        for j in range(len(M[i])):
            if M[i][j]:
                M[i][j] += M[i - 1][j]
        result = max(result, maxHist(M[i]))

    return result

M = [[0, 1, 1, 0],
    [1, 1, 1, 1],
    [1, 1, 1, 1],
    [1, 1, 0, 0]]
print('Max area in binary matrix is: ', maxArea(M))
