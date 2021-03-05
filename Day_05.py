"""
DAY 5: Tapping rain water.

QUESTION : Given n non-negative integers representing an elevation map where
the width of each bar is 1, compute how much water it is able to trap after raining.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= N <= 107
0 <= Ai <= 108

"""

arr = [3, 0, 2, 0, 4]


def tapping_water(lst, n):
    left = [0] * n
    right = [0] * n
    water = 0

    left[0] = lst[0]

    for i in range(1, n):
        left[i] = max(left[i - 1], lst[i])

    right[n - 1] = lst[n - 1]

    for i in range(n - 2, -1, -1):
        right[i] = max(right[i + 1], lst[i])

    for i in range(n):
        water += min(left[i], right[i]) - lst[i]

    return water


print(tapping_water(arr, len(arr)))
