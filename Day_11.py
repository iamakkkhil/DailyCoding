"""
DAY 11 : Minimum number of swaps required to sort an array.
https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/

QUESTION : Given an array of n distinct elements, find the minimum number of swaps 
required to sort the array.

Expected Time Complexity: O(N + M)
Expected Auxiliary Space: O(N + M)

Constraints:
1 ≤ N, M ≤ 10^5
0 ≤ arr1[i], arr[2] ≤ 10^6

"""


def minSwaps(arr):
	n = len(arr)
	arrpos = [*enumerate(arr)]

	arrpos.sort(key = lambda it : it[1])
	
	vis = {k : False for k in range(n)}

	ans = 0
	for i in range(n):
		if vis[i] or arrpos[i][0] == i:
			continue

		cycle_size = 0
		j = i
		
		while not vis[j]:
			vis[j] = True
			j = arrpos[j][0]
			cycle_size += 1

		if cycle_size > 0:
			ans += (cycle_size - 1)
			
	return ans

arr = list(map(int, input('Enter array: ').split(' ')))
print('Minumum swaps required are: 'minSwaps(arr))
