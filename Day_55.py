"""
DAY 55 : Find All Four Sum Numbers.
https://www.geeksforgeeks.org/find-four-elements-that-sum-to-a-given-value-set-2/

QUESTION : Given an array of integers and another number. Find all the unique 
quadruple from the given array that sums up to the given number.

Expected Time Complexity : O(N^3)
Expected Auxilliary Space : O(N^2)
 
Constraints:    
1 <= N <= 100
-1000 <= K <= 1000
-100 <= A[] <= 100

"""


def fourSum(a, k):
    n=len(a)
    ans=[]
    if(n < 4):
        return ans
    a.sort()
    for i in range(0, n-3):
        # current element is greater than k then no quadruplet can be found
        if (a[i] > 0 and a[i] > k):
            break
        # removing duplicates
        if (i > 0 and a[i] == a[i - 1]):
            continue
        
        for j in range(i+1, n-2):
            # removing duplicates
            if (j > i + 1 and a[j] == a[j - 1]):
                continue

            # taking two pointers
            left = j + 1
            right = n - 1
            while (left < right):
                old_l = left
                old_r = right
                # calculate current sum
                sum = a[i] + a[j] + a[left] + a[right]
                if (sum == k):
                    # add to answer
                    ans.append([a[i], a[j], a[left], a[right]])

                    # removing duplicates
                    while (left < right and a[left] == a[old_l]):
                        left+=1
                    while (left < right and a[right] == a[old_r]):
                        right-=1
                elif (sum > k):
                    right-=1
                else:
                    left+=1
                
    return ans

K = 325
A = [43, 70, 83, 90, 99, 72, 25, 44, 90, 5, 39 ,54, 86, 69, 82, 42, 64, 97, 7, 55, 4, 48, 11, 22, 28, 99, 43, 46, 68, 40, 22, 11, 10, 5, 1, 61, 30, 78, 5, 20, 36, 44, 26, 22, 65, 8 ,16]

print(fourSum(A, K))