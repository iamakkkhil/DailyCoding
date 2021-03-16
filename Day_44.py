"""
DAY 44 :  Maximum subset XOR.
https://www.geeksforgeeks.org/find-maximum-subset-xor-given-set/

QUESTION : You don't need to read input or print anything. Your task is to complete the function
maxSubarrayXOR() which takes the array and an integer as input and returns the maximum subset XOR value.

Expected Time Complexity: O(N*Log(max(arr[i]))).
Expected Auxiliary Space : O(1).

Contraints :
1 <= N <= 10^5
1 <= arr[i] <= 10^6

"""


INT_BITS=32

def maxSubarrayXOR(set,n): 
	index = 0

	for i in range(INT_BITS-1,-1,-1): 

		maxInd = index 
		maxEle = -2147483648
		for j in range(index,n): 

			if ( (set[j] & (1 << i)) != 0
					and set[j] > maxEle ): 
				
				maxEle = set[j] 
				maxInd = j 

		if (maxEle ==-2147483648): 
			continue

		temp=set[index] 
		set[index]=set[maxInd] 
		set[maxInd]=temp 

		maxInd = index 

		for j in range(n): 
			if (j != maxInd and
			(set[j] & (1 << i)) != 0): 
				set[j] = set[j] ^ set[maxInd] 
		
		index=index + 1

	res = 0
	for i in range(n): 
		res =res ^ set[i] 
	return res 


set= [9, 8, 5] 
n =len(set) 

print("Max subset XOR is ",end="") 
print(maxSubarrayXOR(set, n))