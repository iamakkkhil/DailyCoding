# DailyCoding

## DAY 1: Exactly 3 Divisors.
https://www.geeksforgeeks.org/numbers-exactly-3-divisors/

**QUESTION** : Given a number N, print all numbers in the range from 1 to N having 
exactly 3 divisors.

Expected Time Complexity : O(N1/2 * N1/4) <br />
Expected Auxilliary Space :  O(1)

Constraints :
1 <= N <= 10<sup>9</sup>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_1.py)



## DAY 2: Modular Multiplicative Inverse.
https://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/

**QUESTION** : Given two integers ‘a’ and ‘m’. The task is to find the smallest modular 
multiplicative inverse of ‘a’ under modulo ‘m’. If the modular multiplicative inverse 
doesn't exist return -1.

Expected Time Complexity : O(m) <br />
Expected Auxilliary Space : O(1)

Constraints: <br />
1 <= a <= 10<sup>4</sup> <br />
1 <= m <= 10<sup>4</sup>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_2.py)



## DAY 3: First Repeating Element.
https://www.geeksforgeeks.org/find-first-repeating-element-array-integers/

**QUESTION** : Given an array of integers, find the first repeating element in it. We need 
to find the element that occurs more than once and whose index of first occurrence 
is smallest. If there is no such element, return -1.

Expected Time Complexity: O(NlogN) <br />
Expected Auxilliary Space: O(N)

Constraints: <br />
1 <= N <= 10<sup>6</sup> <br />
0 <= A<sub>i</sub> <= 10<sup>6</sup>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_3.py)



## DAY 4: Rearrange an array with O(1) extra space.
https://www.geeksforgeeks.org/rearrange-given-array-place/

**QUESTION** : Given an array arr[] of size N where every element is in the range 
from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].

Expected Time Complexity: O(N) <br />
Expected Auxilliary Space: O(1)

Constraints: <br />
1 <= N <= 10<sup>7</sup> <br />
0 <= Lst[i] < N

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_4.py)



## DAY 5: Trapping rain water.
https://www.geeksforgeeks.org/trapping-rain-water/

**QUESTION** : Given n non-negative integers representing an elevation map where
the width of each bar is 1, compute how much water it is able to trap after raining.

Expected Time Complexity: O(N) <br />
Expected Auxilliary Space: O(N)

Constraints: <br />
1 <= N <= 10<sup>7</sup> <br />
0 <= A<sub>i</sub> < 10<sup>8</sup>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_5.py)


## DAY 6: Merge two sorted arrays with O(1) extra space.
https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/

**QUESTION** : Given two sorted arrays arr1[] and arr2[] of sizes N and M in non-decreasing order. 
Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements 
and modify arr2 so that it contains the last M elements.

Expected Time Complexity:  O((n+m) log(n+m)) </br>
Expected Auxilliary Space: O(1)

Constraints: <br />
1 <= X, Y <= 5*10<sup>4</sup> <br />
0 <= arr1<sub>i</sub>, arr2<sub>i</sub> <= 10<sup>9</sup>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_6.py)


## DAY 7: Search an element in sorted and rotated array.
https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/

**QUESTION** : Given a sorted and rotated array A of N distinct elements which is rotated at some point, 
and given an element K. The task is to find the index of the given element K in the array A. If the 
element is not present, then return -1.

Expected Time Complexity:  O(logN) </br>
Expected Auxilliary Space: O(1)

Constraints: <br />
1 ≤ N ≤ 10<sup>7</sup> <br />
0 ≤ A<sub>i</sub> ≤ 10<sup>8</sup> <br />
1 ≤ K ≤ 10<sup>8</sup> <br />

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_7.py)


## DAY 8: Merge Sort.
https://www.geeksforgeeks.org/merge-sort/

**QUESTION** : Merge Sort is a Divide and Conquer algorithm. 
It repeatedly divides the array into two halves and combines them in sorted manner.

Expected Time Complexity: O(N) for the merge function only </br>
Expected Auxilliary Space: O(N)

Constraints: <br />
1 ≤ N ≤ 10<sup>5</sup> <br />
0 ≤ arr[i] ≤ 10<sup>3</sup> <br />

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_8.py)


## DAY 9: Union of Two Sorted Arrays.
https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/

**QUESTION** : Union of two arrays can be defined as the common and distinct 
elements in the two arrays.
Given two sorted arrays of size N and M respectively, find their union.

Expected Time Complexity: O(N+M) </br>
Expected Auxilliary Space: O(N+M)

Constraints: <br />
1 ≤ N, M ≤ 10<sup>5</sup> <br />
0 ≤ arr1[i], arr[2] ≤ 10<sup>6</sup> <br />

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_9.py)


## DAY 10: Intersection of Two Sorted Arrays.
https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/

**QUESTION** : The intersection of two arrays contains the elements common to both the arrays. 
The intersection should not count duplicate elements.
Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. Find their intersection.

Expected Time Complexity: O(N+M) </br>
Expected Auxilliary Space: O(N+M)

Constraints: <br />
1 ≤ N, M ≤ 10<sup>5</sup> <br />
0 ≤ arr1[i], arr[2] ≤ 10<sup>6</sup> <br />

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_10.py)


## DAY 11: Minimum number of swaps required to sort an array.
https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/

**QUESTION** : Given an array of n distinct elements, find the minimum number of swaps required to sort the array.

Expected Time Complexity: O(N+M) </br>
Expected Auxilliary Space: O(N+M)

Constraints: <br />
1 ≤ N, M ≤ 10<sup>5</sup> <br />
0 ≤ arr1[i], arr[2] ≤ 10<sup>6</sup> <br />

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_11.py)


## DAY 12: Repeatedly search an element by doubling it after every successful search.
https://www.geeksforgeeks.org/repeatedly-search-element-doubling-every-successful-search/

**QUESTION** : Given an array “a[]” and integer “b”. Find whether b is present in a[] or not. 
If present, then double the value of b and search again. We repeat these steps until b is not found. 
Finally we return value of b.

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_12.py)


## DAY 13: Minimum Number of Platforms Required for a Railway/Bus Station.
https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/

**QUESTION** : Given arrival and departure times of all trains that reach a railway station, 
the task is to find the minimum number of platforms required for the railway station so that no train waits. 
We are given two arrays which represent arrival and departure times of trains that stop.

Expected Time Complexity: O(N log N) </br>
Expected Auxilliary Space: O(N)

Constraints: <br />
1 <= N <= 1000  </br>
1 <= A[i] < D[i] <= 2359   </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_13.py)


## DAY 14: Median of Two sorted arrays.
https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/

**QUESTION** : Given two sorted arrays of sizes N and M respectively. The task is to find 
the median of the two arrays when they get merged. If there are total even elements, return 
floor of average of middle two elements.

Expected Time Complexity: O(log(max(m,n))) </br>
Expected Auxilliary Space: O(N)

Constraints: <br />
1 <= N, M <= 10<sup>6</sup>  </br>
1 <= arr[i], brr[i] <= 10<sup>7</sup>  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_14.py)


## DAY 15 : Sort an array of 0s, 1s and 2s.
https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

**QUESTION** : Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that 
sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

Expected Time Complexity: O(N) </br>
Expected Auxilliary Space: O(1)

Constraints: <br />
1 <= N <= 10<sup>5</sup>  </br>
1 <= A[i] <= 2 </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_15.py)


## DAY 16 : Different Operations on Matrices.
https://www.geeksforgeeks.org/different-operation-matrices/

**QUESTION** : Perform Addititon, Subtraction and Multiplication on given Matrices.

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_16.py)


## DAY 17 : Minimize the maximum difference of adjacent elements after at most K insertions.
https://www.geeksforgeeks.org/minimize-the-maximum-difference-of-adjacent-elements-after-at-most-k-insertions/

**QUESTION** : Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that 
sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.Given an array 
of N elements, the task is to minimize the maximum difference of adjacent elements by inserting at most K 
elements in the array.

Constraints: <br />
T <= 100   <br />
2 <= n <= 10<sup>4</sup>   <br />
1 <= arr[i] <= 10<sup>3</sup>   <br />
1 <= k <= 10<sup>5</sup>   <br />

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_17.py)


## Day 18: Determinant of a matrix.
https://www.geeksforgeeks.org/determinant-of-a-matrix/

**QUESTION** : Given a square matrix of size N x N. The task is to find the determinant of this matrix.

Expected Time Complexity:  O(N<sup>4</sup>) </br>
Expected Auxilliary Space: O(N<sup>2</sup>)

Constraints: <br />
1 <= N <= 8 <br />
-10 <= mat[i][j] <= 10

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_18.py)


## DAY 19: Transpose of Matrix.
https://www.geeksforgeeks.org/program-to-find-transpose-of-a-matrix/

**QUESTION** : Write a program to find the transpose of a square matrix of size N*/N. 
Transpose of a matrix is obtained by changing rows to columns and columns to rows.

Expected Time Complexity:  O(N*/N) </br>
Expected Auxilliary Space: O(1)

Constraints: <br />
1 <= N <= 100 <br />
-10<sup>3</sup> <= mat[i][j] <= 10<sup>3</sup>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_19.py)


## DAY 20: Inplace rotate square matrix by 90 degrees.
https://www.geeksforgeeks.org/inplace-rotate-square-matrix-by-90-degrees/

**QUESTION** : Given a square matrix of size N x N. The task is to rotate it by 90 degrees in anti-clockwise 
direction without using any extra space.

Expected Time Complexity:  O(N<sup>2</sup>) </br>
Expected Auxilliary Space: O(1)

Constraints: <br />
1 ≤ N ≤ 100 <br />
1 <= matrix[][] <= 1000

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_20.py)


## DAY 21: Spirally traversing a matrix.
https://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/

**QUESTION** : Given a matrix of size R\*C. Traverse the matrix in spiral form.

Expected Time Complexity:  O(R\*C) </br>
Expected Auxilliary Space: O(R\*C)

Constraints: <br />
1 <= R, C <= 100   <br />
0 <= matrix<sub>i</sub> <= 100

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_21.py)


## DAY 22: Search in a row wise and column wise sorted matrix.
https://www.geeksforgeeks.org/search-in-row-wise-and-column-wise-sorted-matrix/

**QUESTION** : Given a matrix of size n x m, where every row and column is sorted in increasing order, 
and a number x. Find whether element x is present in the matrix or not.

Expected Time Complexity:  O(N + M) </br>
Expected Auxilliary Space: O(1)

Constraints: <br />
1 <= N, M <= 1000  <br />
1 <= mat[][] <= 10<sup>5</sup>  <br />
1 <= element <= 1000

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_22.py)


## DAY 23: Max rectangle.
https://www.geeksforgeeks.org/maximum-size-rectangle-binary-sub-matrix-1s/

**QUESTION** : Given a binary matrix. Find the maximum area of a rectangle formed only of 1s in the given matrix.

Expected Time Complexity:  O(N \* M) </br>
Expected Auxilliary Space: O(M)

Constraints: <br />
1 <= n,m <= 1000   <br />
0 <= M[][] <= 1

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_23.py)


## DAY 24: Convert to Roman No.
https://www.geeksforgeeks.org/converting-decimal-number-lying-between-1-to-3999-to-roman-numerals/

**QUESTION** : Given an integer n, your task is to complete the function convertToRoman which prints the 
corresponding roman number of n. Various symbols and their values are given below.

I 1  <br />
V 5<br />
X 10<br />
L 50<br />
C 100<br />
D 500<br />
M 1000<br />

Expected Time Complexity:  O(log<sub>10</sub>N) </br>
Expected Auxilliary Space: O(log<sub>10</sub>N * 10)

Constraints: <br />
1<=n<=3999   <br />

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_24.py)



