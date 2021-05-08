/*
DAY 93: Index of an extra element present in one sorted array.
https://www.geeksforgeeks.org/find-index-of-an-extra-element-present-in-one-sorted-array/

QUESTION : Given two sorted arrays. There is only 1 difference between the arrays. 
The first array has one element extra added in between. Find the index of the extra element.

Examples: 

Input: {2, 4, 6, 8, 9, 10, 12};
       {2, 4, 6, 8, 10, 12};
Output: 4
Explanation: The first array has an extra element 9.
The extra element is present at index 4.

Input: {3, 5, 7, 9, 11, 13}
        {3, 5, 7, 11, 13}
Output: 3
Explanation: The first array has an extra element 9.
The extra element is present at index 3.

Expected Time Complexity: O(log n)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 10^7
0 ≤ arr[i] <= 10^7 
*/

#include <bits/stdc++.h>

int findExtra(int arr1[], int arr2[], int n) {
    int index = n;

    int left=0, right = n-1;
    while(left <= right) {
        int mid = (left+right)/2;

        if (arr1[mid]==arr2[mid]) {
            left = mid+1;
        }
        else {
            index = mid;
            right = mid-1;
        }
    }
    return index;
}

int main() {
    int arr1[] = {2, 4, 6, 8, 10, 12, 13};
    int arr2[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    // Solve is passed both arrays
    cout << findExtra(arr1, arr2, n);
    return 0;
}