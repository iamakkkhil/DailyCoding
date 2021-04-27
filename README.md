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


## DAY 25: Maximum occuring character.
https://www.geeksforgeeks.org/maximum-occurring-character-in-an-input-string-set-2/

**QUESTION** : Given a string str. The task is to find the maximum occurring character in the string str. 
If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Expected Time Complexity:  O(N) </br>
Expected Auxilliary Space: O(Number of distinct characters)

Constraints: <br />
1 ≤ |s| ≤ 100   <br />

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_25.py)


## DAY 26: Missing Characters in Panagram.
https://www.geeksforgeeks.org/missing-characters-make-string-pangram/

**QUESTION** : You are given a string s. You need to find the missing characters in the string to make a panagram.
Note: The output characters will be lowercase and lexicographically sorted, returns -1 if the string is a panagram, 
else it returns a string that consists missing characters.

Expected Time Complexity:  O(|S|) </br>
Expected Auxilliary Space: O(1)

Constraints: <br />
1 ≤ |s| ≤ 10000   <br />

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_26.py


## DAY 27: Validate an IP Address.
https://www.geeksforgeeks.org/program-to-validate-an-ip-address/

**QUESTION** : Write a program to Validate an IPv4 Address. According to Wikipedia, IPv4 addresses are 
canonically represented in dot-decimal notation, which consists of four decimal numbers, each ranging 
from 0 to 255, separated by dots, e.g., 172.16.254.1 . The generalized form of an IPv4 address 
is (0-255).(0-255).(0-255).(0-255). Here we are considering numbers only from 0 to 255 and any additional 
leading zeroes will be considered invalid.

Your task is  to complete the function isValid which returns 1 if the ip address is valid else returns 0. 
The function takes a string s as its only argument .

Expected Time Complexity: O(N), N = length of string. </br>
Expected Auxilliary Space: O(1)

Constraints: <br />
1<= length of string <=50 <br />

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_27.py)


## DAY 28: Implement strstr.
https://www.geeksforgeeks.org/check-string-substring-another/

**QUESTION** : Your task is to implement the function strstr. The function takes two strings as arguments (s,x) 
and  locates the occurrence of the string x in the string s. The function returns and integer denoting the 
first occurrence of the string x in s (0 based indexing).

Expected Time Complexity: O(|s|\*|x|). </br>
Expected Auxilliary Space: O(1)

Constraints: <br />
1 <= |s|,|x| <= 1000

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_28.py)


## DAY 29: Isomorphic Strings.
https://www.geeksforgeeks.org/check-if-two-given-strings-are-isomorphic-to-each-other/

**QUESTION** : Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for every character 
of str1 to every character of str2 while preserving the order.

Note: All occurrences of every character in ‘str1’ should map to the same character in ‘str2’.

Expected Time Complexity: O(|str1|+|str2|). </br>
Expected Auxilliary Space: O(Number of different characters).</br>
Note: |s| represents the length of string s.

Constraints: <br />
1 <= |str1|, |str2| <= 10<sup>3</sup>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_29.py)


## DAY 30: Check if strings are rotations of each other or not.
https://www.geeksforgeeks.org/check-if-two-given-strings-are-isomorphic-to-each-other/

**QUESTION** : Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1. The characters in the strings are in lowercase.

Expected Time Complexity: O(N). </br>
Expected Auxilliary Space: O(N).

Constraints: <br />
1 <= |str1|, |str2| <= 10<sup>7</sup>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_30.py)


## DAY 31: Longest Substring Without Repeating Characters.
https://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/

**QUESTION** : Given a string S, find the length of its longest substring that does not have any repeating characters.

Expected Time Complexity: O(N). </br>
Expected Auxilliary Space: O(1).

Constraints: <br />
1 <= N <= 10<sup>5</sup>  <br />
here, N = S.length

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_31.py)



## DAY 32: Multiply two strings.
https://www.geeksforgeeks.org/multiply-large-numbers-represented-as-strings/

**QUESTION** : Given two numbers as stings s1 and s2. Calculate their Product.

Expected Time Complexity:O(n1 /* n2). </br>
Expected Auxilliary Space: O(n1 + n2).</br>
where n1 and n2 are sizes of strings s1 and s2 respectively.

Constraints: <br />
1 <= length of s1 and s2 <= 10<sup>3</sup>  <br />

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_32.py)


## DAY 33: Anagram.
https://www.geeksforgeeks.org/check-whether-two-strings-are-anagram-of-each-other/

**QUESTION** : Given two strings a and b consisting of lowercase characters. The task is to check whether two 
given strings are an anagram of each other or not. An anagram of a string is another string that contains the 
same characters, only the order of characters can be different. For example, “act” and “tac” are an anagram of 
each other.

Expected Time Complexity: O(|a|+|b|). </br>
Expected Auxiliary Space: O(Number of distinct characters).</br>

Note: |s| represents the length of string s.</br>

Constraints:</br>
1 ≤ |a|,|b| ≤ 10<sup>5</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_33.py)


## DAY 34:  Excel Sheet | Part 1.
https://www.geeksforgeeks.org/find-excel-column-name-given-number/

**QUESTION** : Given a positive integer N, return its corresponding column title as it would appear in an Excel sheet.
For N =1 we have column A, for 27 we have AA and so on.</br>

Note: The alphabets are all in uppercase.

Expected Time Complexity: O(Log(N)). </br>
Expected Auxiliary Space: O(Log(N)).</br>

Constraints:</br>
1 ≤ N ≤ 10<sup>7</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_34.py)


## DAY 35: Reverse words in a given string..
https://www.geeksforgeeks.org/reverse-words-in-a-given-string/

**QUESTION** : Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Expected Time Complexity: O(|S|). </br>
Expected Auxiliary Space: O(|S|).</br>

Constraints:</br>
1 <= |S| <= 2000

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_35.py)


## DAY 36: Check whether K-th bit is set or not.
https://www.geeksforgeeks.org/check-whether-k-th-bit-set-not/

**QUESTION** : Given a number N and a bit number K, check if Kth bit of N is set or not. A bit is called set if it is 1. Position of set bit '1' should be indexed starting with 0 from LSB side in binary representation of the number.

Expected Time Complexity: O(LogN). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
1 ≤ N ≤ 10<sup>9</sup> </br>
0 ≤ K ≤ floor(log2(N) + 1) </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_36.py)


## DAY 37: Power of 2.
https://www.geeksforgeeks.org/program-to-find-whether-a-no-is-power-of-two/

**QUESTION** : Given a positive integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.
 
Expected Time Complexity: O(LogN). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
0 <= N <= 10<sup>18</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_37.py)


## DAY 38: Number is sparse or not.
https://www.geeksforgeeks.org/check-if-a-given-number-is-sparse-or-not/

**QUESTION** : Given a number N. The task is to check whether it is sparse or not. A number is said to be a 
sparse number if no two or more consecutive bits are set in the binary representation.

Expected Time Complexity: O(LogN). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
0 <= N <= 10<sup>6</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_38.py)


## DAY 39: Bit Difference.
https://www.geeksforgeeks.org/count-number-of-bits-to-be-flipped-to-convert-a-to-b/

**QUESTION** : You are given two numbers A and B. The task is to count the number of bits needed to be 
flipped to convert A to B.

Expected Time Complexity: O(LogN). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
0 <= N <= 10<sup>6</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_39.py)


## DAY 40: Gray to Binary and Gray to Binary equivalent.
https://www.geeksforgeeks.org/gray-to-binary-and-binary-to-gray-conversion/

**QUESTION** : Given N in Gray code equivalent. Find its binary equivalent. 

Note: We need to find the binary equivalent of the given gray code and return the decimal 
equivalent of the binary representation.

Expected Time Complexity: O(LogN). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
0 <= N <= 10<sup>8</sup></br>


**QUESTION** : You are given a decimal number N. You need to find the gray code of the number N and convert it 
into decimal.

Expected Time Complexity: O(1). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
0 <= N <= 10<sup>9</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_40.py)


## DAY 41: Find first set bit.
https://www.geeksforgeeks.org/position-of-rightmost-set-bit/

**QUESTION** : Given an integer an N. The task is to return the position of first set bit found from the right 
side in the binary representation of the number.

Note: If there is no set bit in the integer N, then return 0 from the function.  

Expected Time Complexity: O(LogN). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
0 <= N <= 10<sup>8</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_41.py)


## DAY 42: Count total set bits in all numbers from 1 to n.
https://www.geeksforgeeks.org/count-total-set-bits-in-all-numbers-from-1-to-n/

**QUESTION** : You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

Expected Time Complexity: O(LogN). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
0 <= N <= 10<sup>8</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_42.py)


## DAY 43: Count total set bits in all numbers from 1 to n.
https://www.geeksforgeeks.org/position-rightmost-different-bit/

**QUESTION** : Given two numbers M and N. The task is to find the position of the rightmost different bit 
in the binary representation of numbers. 

Expected Time Complexity: O(max(log m, log n)). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
0 <= M <= 10<sup>9</sup></br>
0 <= N <= 10<sup>9</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_43.py)


## DAY 44: Maximum subset XOR.
https://www.geeksforgeeks.org/find-maximum-subset-xor-given-set/

**QUESTION** : You don't need to read input or print anything. Your task is to complete the function
maxSubarrayXOR() which takes the array and an integer as input and returns the maximum subset XOR value.

Expected Time Complexity: O(N\*Log(max(arr[i]))). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
0 <= N <= 10<sup>5</sup></br>
0 <= arr[i] <= 10<sup>6</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_44.py)


## DAY 45: Swap all odd and even bits.
https://www.geeksforgeeks.org/swap-all-odd-and-even-bits/

**QUESTION** : Given an unsigned integer N. The task is to swap all odd bits with even bits. 
For example, if the given number is 23 (00010111), it should be converted to 43(00101011). 
Here, every even position bit is swapped with adjacent bit on the right side(even position 
bits are highlighted in the binary representation of 23), and every odd position bit is 
swapped with an adjacent on the left side.

Expected Time Complexity: O(1). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
0 <= N <= 10<sup>9</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_45.py)



## DAY 46: Check if two arrays are equal or not.
https://www.geeksforgeeks.org/check-if-two-arrays-are-equal-or-not/

**QUESTION** : Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. 
Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) 
of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

Expected Time Complexity: O(N). </br>
Expected Auxiliary Space: O(N).</br>

Constraints:</br>
0 <= N <= 10<sup>7</sup></br>
0 <= A[],B[] <= 10<sup>18</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_46.py)



## DAY 47: Max distance between same elements.
https://www.geeksforgeeks.org/maximum-distance-two-occurrences-element-array/

**QUESTION** : Given an array with repeated elements, the task is to find the maximum 
distance between two occurrences of an element.

Expected Time Complexity: O(N). </br>
Expected Auxiliary Space: O(N).</br>

Constraints:</br>
0 <= N <= 10<sup>6</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_47.py)


## DAY 48: Two Sum.
https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/

**QUESTION** : Given an array of positive integers and an integer. Determine whether or 
not there exist two elements in A whose sum is exactly equal to that integer.

Expected Time Complexity: O(N). </br>
Expected Auxiliary Space: O(N).</br>

Constraints:</br>
0 <= N <= 10<sup>5</sup></br>
1 ≤ A[i] ≤ 10<sup>5</sup></br>
1 ≤ X ≤ 2\*10<sup>5</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_48.py)


## DAY 49: Sorting Elements of an Array by Frequency.
https://www.geeksforgeeks.org/sort-elements-by-frequency/

**QUESTION** : Given an array of integers, sort the array according to frequency of elements. 
That is elements that have higher frequency come first. If frequencies of two elements are same, 
then smaller number comes first.

Expected Time Complexity: O(N Log N). </br>
Expected Auxiliary Space: O(N).</br>

Constraints:</br>
0 <= N <= 10<sup>5</sup></br>
1 ≤ A<sub>i</sub> ≤ 10<sup>5</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_49.py)



## DAY 50: Print Non-Repeated Elements.
https://www.geeksforgeeks.org/non-repeating-element/

**QUESTION** : Hashing is very useful to keep track of the frequency of the elements in a list.

You are given an array of integers. You need to print the non-repeated elements as they appear 
in the array.

Expected Time Complexity: O(N). </br>
Expected Auxiliary Space: O(N).</br>

Constraints:</br>
0 <= N <= 10<sup>3</sup></br>
1 ≤ Arr<sub>i</sub> ≤ 10<sup>7</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_50.py)


## DAY 51: Largest subarray with 0 sum.
https://www.geeksforgeeks.org/print-all-subarrays-with-0-sum/

**QUESTION** : Given an array having both positive and negative integers. 
The task is to compute the length of the largest subarray with sum 0.

Expected Time Complexity: O(N\*Log(N)). </br>
Expected Auxiliary Space: O(N).</br>

Constraints:</br>
0 <= N <= 10<sup>4</sup></br>
-1000 <= A[i] <= 1000, for each valid i</br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_51.py)


## DAY 52: Top K Frequent Elements in Array - | .
https://www.geeksforgeeks.org/find-k-numbers-occurrences-given-array/

**QUESTION** : Given a non-empty array of integers, find the top k elements which have the highest 
frequency in the array. If two numbers have the same frequency then the larger number should be 
given preference.

Expected Time Complexity: O(N\*Log(N)). </br>
Expected Auxiliary Space: O(N).</br>

Constraints:</br>
0 <= N <= 10<sup>3</sup></br>
1 <= A[i] <= 10<sup>4</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_52.py)


## DAY 53: Sort an array according to the other.
https://www.geeksforgeeks.org/sort-array-according-order-defined-another-array/

**QUESTION** : Given two integer arrays A1[ ] and A2[ ] of size N and M respectively. Sort the 
first array A1[ ] such that all the relative positions of the elements in the first array are 
the same as the elements in the second array A2[ ].</br>

Note: If elements are repeated in the second array, consider their first occurance only. </br>

Expected Time Complexity: O(N\*Log(N)). </br>
Expected Auxiliary Space: O(N).</br>

Constraints:</br>
0 <= N, M <= 10<sup>6</sup></br>
1 <= A1[i], A2[i] <= 10<sup>6</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_53.py)


## DAY 54: Zero Sum Subarrays.
https://www.geeksforgeeks.org/find-the-largest-subarray-with-0-sum/

**QUESTION** : You are given an array arr[] of size n. Find the total count of sub-arrays 
having their sum equal to 0.</br>

Expected Time Complexity: O(N). </br>
Expected Auxiliary Space: O(N).</br>

Constraints:</br>
0 <= N <= 10<sup>7</sup></br>
10<sup>-10</sup> <= arr[i] <= 10<sup>10</sup></br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_54.py)



## DAY 55: Find All Four Sum Numbers.
https://www.geeksforgeeks.org/find-four-elements-that-sum-to-a-given-value-set-2/

**QUESTION** : Given an array of integers and another number. Find all the unique 
quadruple from the given array that sums up to the given number.

Expected Time Complexity: O(N<sup>3</sup>). </br>
Expected Auxiliary Space: O(N<sup>2</sup>).</br>

Constraints:</br>
1 <= N <= 100</br>
-1000 <= K <= 1000</br>
-100 <= A[] <= 100</br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_55.py)


## DAY 56: Count distinct elements in every window.
https://www.geeksforgeeks.org/count-distinct-elements-in-every-window-of-size-k/

**QUESTION** : Given an array of integers and a number K. Find the count of distinct 
elements in every window of size K in the array.

Expected Time Complexity: O(N). </br>
Expected Auxiliary Space: O(N).</br>

Constraints:</br>
1 <= N <= K <= 10<sup>5</sup> </br>
1 <= A[i] <= 10<sup>5</sup> , for each valid i </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_56.py)



## DAY 57: Print elememts of a Linkedlist.

**QUESTION** : Print all elements of a Linked List where we take linked list as input and print the 
linked list in a single line.

Expected Time Complexity: O(N). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
1 <= N <= 100  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_57.py)


## DAY 58: Reverse a linked list.
https://www.geeksforgeeks.org/reverse-a-linked-list/

**QUESTION** : Given a linked list of N nodes. The task is to reverse this list.

Expected Time Complexity: O(N). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
1 <= N <= 100  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_58.py)



## DAY 59: Occurence of an integer in a Linked List.
https://www.geeksforgeeks.org/write-a-function-that-counts-the-number-of-times-a-given-int-occurs-in-a-linked-list/

**QUESTION** : Given a singly linked list and a key, count the number of occurrences of given key in the linked list.

Expected Time Complexity: O(N). </br>
Expected Auxiliary Space: O(1).</br>

Constraints:</br>
1 <= N <= 10<sup>4</sup>  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_59.cpp)


## DAY 60: Pairwise swapping
https://www.geeksforgeeks.org/pairwise-swap-elements-of-a-given-linked-list/

**QUESTION** : Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.

Expected Time Complexity: O(N)</br>
Expected Auxiliary Space: O(1)

Constraints:  </br>
1 <= N <= 10<sup>3</sup>  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_60.cpp)


## DAY 61: Add two numbers represented by linked lists.
https://www.geeksforgeeks.org/sum-of-two-linked-lists/

**QUESTION** : Given two numbers represented by two linked lists of size N and M. The task is 
to return a sum list. The sum list is a linked list representation of the addition of two 
input numbers.

Expected Time Complexity: O(N+M)</br>
Expected Auxiliary Space: O(Max(N,M))

Constraints:  </br>
1 <= N, M <= 5000  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_61.cpp)


## DAY 62: Sorted insert for circular linked list.
https://www.geeksforgeeks.org/sorted-insert-for-circular-linked-list/

**QUESTION** : Given a sorted circular linked list, the task is to insert a new node in this circular 
list so that it remains a sorted circular linked list.

Expected Time Complexity: O(N)</br>
Expected Auxiliary Space: O(1)

Constraints:  </br>
1 <= N <= 10<sup>5</sup>  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_62.cpp)


## DAY 63: Split a Circular Linked List into two halves.
https://www.geeksforgeeks.org/split-a-circular-linked-list-into-two-halves/

**QUESTION** : Given a Cirular Linked List of size N, split it into two halves circular lists. 
If there are odd number of nodes in the given circular linked list then out of the resulting 
two halved lists, first list should have one node more than the second list. The resultant 
lists should also be circular lists and not linear lists.

Expected Time Complexity: O(N)</br>
Expected Auxiliary Space: O(1)

Constraints:  </br>
1 <= N <= 10<sup>2</sup>  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_63.cpp)


## DAY 64: Reverse a Linked List in groups of given size. 
https://www.geeksforgeeks.org/reverse-a-list-in-groups-of-given-size/

**QUESTION** : Given a linked list of size N. The task is to reverse every k 
nodes (where k is an input to the function) in the linked list.

Expected Time Complexity: O(N)</br>
Expected Auxiliary Space: O(1)

Constraints:  </br>
1 <= N <= 10<sup>2</sup>  </br>
1 <= k <= N  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_64.cpp)



## DAY 65: Detect Loop in linked list. 
https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

**QUESTION** : Given a linked list of N nodes. The task is to check if the linked list has 
a loop. Linked list can contain self loop.

Expected Time Complexity: O(N)</br>
Expected Auxiliary Space: O(1)

Constraints:  </br>
1 <= N <= 10<sup>4</sup>  </br>
1 <= Data on Node <= 10<sup>3</sup>  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_65.cpp)


## DAY 66: Intersection Point in Y Shapped Linked Lists.
https://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/

**QUESTION** : Given two singly linked lists of size N and M, write a program to get the point where 
two linked lists intersect each other.

Expected Time Complexity: O(N+M)</br>
Expected Auxiliary Space: O(1)

Constraints:  </br>
1 ≤ N + M ≤ 2\*10<sup>5</sup> </br>
-1000 ≤ value ≤ 1000 </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_66.cpp)


## DAY 67: Delete Middle of Linked List.
https://www.geeksforgeeks.org/delete-middle-of-linked-list/

**QUESTION** : Given a singly linked list, delete middle of the linked list. For example, 
if given linked list is 1->2->3->4->5 then linked list should be modified to 1->2->4->5.

If there are even nodes, then there would be two middle nodes, we need to delete the 
second middle element. For example, if given linked list is 1->2->3->4->5->6 then it 
should be modified to 1->2->3->5->6.

If the input linked list is NULL or has 1 node, then it should return NULL.

Expected Time Complexity: O(N)</br>
Expected Auxiliary Space: O(1)

Constraints:  </br>
1 <= N <= 1000
1 <= value <= 1000

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_67.cpp)


## DAY 68: Clone a linked list with next and random pointer.
https://www.geeksforgeeks.org/a-linked-list-with-next-and-arbit-pointer/

**QUESTION** : You are given a special linked list with N nodes where each node has a next pointer pointing to its next node. You are also given M random pointers , where you will be given M number of pairs denoting two nodes a and b  i.e. a->arb = b.

Expected Time Complexity: O(N)</br>
Expected Auxiliary Space: O(1)

Constraints:  </br>
1 <= N <= 100
1 <= M <= N
1 <= a, b <= 100

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_68.cpp)


## DAY 69: Quick Sort on Linked List.
https://www.geeksforgeeks.org/quicksort-on-singly-linked-list/

**QUESTION** : Sort the given Linked List using quicksort. which takes O(n^2) time in worst case 
and O(nLogn) in average and best cases, otherwise you may get TLE.

Constraints:  </br>
1<=T<=100
1<=N<=200

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_69.cpp)


## DAY 70: Circular Linked List Delete at Position.
https://www.geeksforgeeks.org/delete-middle-of-linked-list/

**QUESTION** : Given a linked list of size n, you have to delete the node at position pos 
of the linked list and return the new head. The position of initial node is 1.
The tail of the circular linked list is connected to the head using next pointer.

Expected Time Complexity: O(N)</br>
Expected Auxiliary Space: O(1)

Constraints:  </br>
2 <= number of nodes <= 10<sup>3</sup>
1 <= pos <= n

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_70.cpp)


## Day 71: QuickSort on Doubly Linked List.
https://www.geeksforgeeks.org/quicksort-for-linked-list/

**QUESTION** : Sort the given doubly linked list of size N using quicksort. Just 
complete the partition function using the quicksort technique.

Expected Time Complexity: O(NlogN)</br>
Expected Auxiliary Space: O(1)

Constraints:  </br>
1 <= N <= 200

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_71.cpp)


## Day 72: Delete without head pointer.
https://www.geeksforgeeks.org/delete-a-node-from-linked-list-without-head-pointer/

**QUESTION** : You are given a pointer/ reference to the node which is to be deleted from the linked list 
of N nodes. The task is to delete the node. Pointer/ reference to head node is not given. 

Note: No head reference is given to you. It is guaranteed that the node to be deleted is not a tail 
node in the linked list.

Expected Time Complexity: O(1)</br>
Expected Auxiliary Space: O(1)

Constraints:  </br>
1 <= N <= 10<sup>3</sup>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_72.cpp)


## Day 73: Merge Sort for Doubly Linked List.
https://www.geeksforgeeks.org/merge-sort-for-doubly-linked-list/

**QUESTION** : Given Pointer/Reference to the head of a doubly linked list of N nodes, 
the task is to Sort the given doubly linked list using Merge Sort in both non-decreasing 
and non-increasing order. 

Constraints:  </br>
1 <= N <= 10<sup>5</sup>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_73.cpp)


## Day 74: Reverse a string using Stack.
https://www.geeksforgeeks.org/stack-set-3-reverse-string-using-stack/

**QUESTION** : You are given a string S, the task is to reverse the string using stack. 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints: </br>
1 ≤ length of the string ≤ 100 </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_74.cpp)


## Day 75: Next Greater Element.
https://www.geeksforgeeks.org/next-greater-element-in-same-order-as-input/

**QUESTION** : Given an array arr[ ] of size N having distinct elements, the task is to find the next 
greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater 
than the current element.
If there does not exist next greater of current element, then next greater element for current element 
is -1. For example, next greater of the last element is always -1.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints: </br>
1 ≤ N ≤ 10<sup>6</sup> </br>
1 ≤ Ai ≤ 10<sup>18</sup> </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_75.cpp)


## Day 76: Get minimum element from stack.
https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/

**QUESTION** : You are given N elements and your task is to Implement a Stack in which 
you can get minimum element in O(1) time.

Expected Time Complexity : O(1) for all the 3 methods.
Expected Auixilliary Space : O(1) for all the 3 methods.

Constraints: </br>
1 <= Number of queries <= 100   </br>
1 <= values of the stack <= 100  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_76.cpp)


## Day 77: Evaluation of Postfix Expression.
https://www.geeksforgeeks.org/stack-set-4-evaluation-postfix-expression/#:~:text=The%20expressions%20written%20in%20postfix,are%20not%20required%20in%20postfix.&text=Following%20is%20algorithm%20for%20evaluation,following%20for%20every%20scanned%20element

**QUESTION** : Given string S representing a postfix expression, the task is to evaluate the 
expression and find the final value. Operators will only include the basic arithmetic operators 
like \*, /, + and -.

Expected Time Complexity : O(|S|)
Expected Auixilliary Space : O(|S|)

Constraints: </br>
1 ≤ |S| ≤ 10<sup>5</sup>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_77.cpp)


## Day 78: Max Rectangle
https://www.geeksforgeeks.org/maximum-size-rectangle-binary-sub-matrix-1s/

**QUESTION** : Given a binary matrix. Find the maximum area of a rectangle formed only of 1s in the given matrix.

Expected Time Complexity : O(R\*C)
Expected Auixilliary Space : O(C)

Constraints: </br>
1 <= n,m <= 1000
0 <= M[][] <= 1

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_78.cpp)


## Day 79: Sort a stack.
https://www.geeksforgeeks.org/sort-a-stack-using-recursion/

**QUESTION** : Given a stack, the task is to sort it such that the top of the stack has the greatest element.

Expected Time Complexity : O(N\*N)
Expected Auixilliary Space : O(N) recursive

Constraints: </br>
1<=N<=100

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_79.cpp)


## Day 80: Max area histogram
https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/

**QUESTION** : Find the largest rectangular area possible in a given histogram.

Expected Time Complxity : O(N)  </br>
Expected Auxilliary Space : O(N)

Constraints: </br>
1 <= N <= 10^6 </br>
1 <= arr[i] <= 10^12

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_80.cpp)


## Day 81: Max area histogram
https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/

**QUESTION** : Given an expression string x. Examine whether the pairs and the orders of 
“{“,”}”,”(“,”)”,”[“,”]” are correct in exp.

For example, the function should return 'true' for 
exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.

Expected Time Complxity : O(|x|) </br>
Expected Auxilliary Space : O(|x|) </br>

Constraints: </br>
1 ≤ |x| ≤ 32000  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_81.cpp)


## Day 82: Maximum of minimum for every window size.
https://www.geeksforgeeks.org/find-the-maximum-of-minimums-for-every-window-size-in-a-given-array/

**QUESTION** : Given an integer array. The task is to find the maximum of the minimum of every window 
size in the array.
Note: Window size varies from 1 to the size of the Array.

Expected Time Complxity : O(N)</br>
Expected Auxilliary Space :  O(N) </br>

Constraints: </br>
1 <= N <= 10<sup>5</sup> </br>
1 <= arr[i] <= 10<sup>5</sup> </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_82.cpp)



## Day 83: Stock span problem.
https://www.geeksforgeeks.org/the-stock-span-problem/

**QUESTION** : The stock span problem is a financial problem where we have a series of n daily price 
quotes for a stock and we need to calculate the span of stock’s price for all n days. 
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive 
days just before the given day, for which the price of the stock on the current day is less than or 
equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span 
values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.

Expected Time Complxity : O(N) </br>
Expected Auxilliary Space : O(N) </br>

Constraints: </br>
1 ≤ N ≤ 10<sup>5</sup>  </br>
1 ≤ C[i] ≤ 10<sup>5</sup>  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_83.cpp)


## Day 84: Infix to Postfix.
https://www.geeksforgeeks.org/stack-set-2-infix-to-postfix/

**QUESTION** : Given an infix expression in the form of string str. Convert this infix expression to 
postfix expression.
Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
Note: The order of precedence is: ^ greater than * equals to / greater than + equals to -. 


Expected Time Complxity : O(|str|) </br>
Expected Auxilliary Space : O(|str|) </br>

Constraints: </br>
1 ≤ |str| ≤ 10<sup>5</sup>  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_84.cpp)


## Day 85: Generate Binary Numbers.
https://www.geeksforgeeks.org/interesting-method-generate-binary-numbers-1-n/

**QUESTION** : Given a number N. The task is to generate and print all binary numbers with 
decimal values from 1 to N.

Expected Time Complxity : O(N log2N) </br>
Expected Auxilliary Space : O(N log2N) </br>

Constraints: </br>
1 ≤ N ≤ 10<sup>6</sup>  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_85.cpp)


## Day 86: Queue Push & Pop.

**QUESTION** : Given an array arr[] of size N, enqueue the elements of the array into a queue 
and then dequeue them.

Expected Time Complxity : O(N) </br>
Expected Auxilliary Space : O(N) </br>

Constraints: </br>
1 <= A<sub>i</sub> <= 10<sup>6</sup>  </br>

My Solution [here](https://github.com/iamakkkhil/DailyCoding/blob/master/Day_86.cpp)
