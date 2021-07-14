def largestSumSubarray(arr):
    max_overall = arr[0]
    max_sofar = arr[0]

    for i in range(1, len(arr)):
        if max_sofar + arr[i] > arr[i]:
            max_sofar += arr[i]
        else:
            max_sofar = arr[i]

        if max_overall < max_sofar:
            max_overall = max_sofar

    return max_overall


if __name__ == '__main__':
    arr = [1,2,3,-2,5]
    print(f"Max sum using subarray is(Kadane's Algorithm): {largestSumSubarray(arr)}")