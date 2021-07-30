def findMinDiff(A, N, M):
    A = sorted(A)

    min_diff = A[-1]
    i = 0
    while i < (N-M+1):
        diff = A[i+M-1] - A[i]

        if diff < min_diff:
            min_diff = diff
        i += 1

    return min_diff


if __name__ == '__main__':
    N = 8
    M = 5
    A = [3, 4, 1, 9, 56, 7, 9, 12]
    print(f'Min difference is: {findMinDiff(A, N, M)}')
