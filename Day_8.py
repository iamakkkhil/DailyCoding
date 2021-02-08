"""
DAY 8: Merge Sort.
https://www.geeksforgeeks.org/merge-sort/

QUESTION : Merge Sort is a Divide and Conquer algorithm. 
It repeatedly divides the array into two halves and combines them in sorted manner..

Expected Time Complexity: O(N) for the merge function only
Expected Auxilliary Space: O(N)

Constraints:
1 <= N <= 105
1 <= arr[i] <= 103

"""


def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr)//2

        left_half = arr[:mid] 
        right_half = arr[mid:]

        merge_sort(left_half)
        merge_sort(right_half)

        i=j=k=0

        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i+=1

            else:
                arr[k] = right_half[j]
                j+=1
            k+=1

        while i < len(left_half):
            arr[k] = left_half[i]
            i+=1
            k+=1

        while j < len(right_half):
            arr[k] = right_half[j]
            j+=1
            k+=1


arr = [38, 27, 43, 3, 9, 82, 10]

merge_sort(arr)
print(arr)

