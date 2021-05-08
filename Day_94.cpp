/*
DAY 94: Find perimeter of shapes.
https://www.geeksforgeeks.org/find-perimeter-shapes-formed-1s-binary-matrix/

QUESTION : Given a matrix mat[][] of n rows and m columns, consisting of 0’s and 1’s. The 
task is to complete the function findPerimeter which returns an integer denoting the perimeter 
of sub-figures consisting of only 1’s in the matrix.

Input: 3 3
       1 0 0 1 0 0 1 0 0
Output: 8

Expected Time Complexity: O(n^2)
Expected Auxiliary Space: O(1)

Constraints:
1<=T<=100
1<=n, m<=20 
*/

#include <bits/stdc++.h>

int findPerimeter(int mat[MAX][MAX], int n, int m)
{   int peri = 0;
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++) {
            if(mat[i][j] == 1) {
                peri += 4;
                if(i-1 >= 0 and mat[i-1][j]==1) {
                    peri-=1;
                }
                if(j-1 >= 0 and mat[i][j-1]==1) {
                    peri-=1;
                }
                if(i+1 < n and mat[i+1][j]==1) {
                    peri-=1;
                }
                if(j+1 < m and mat[i][j+1]==1) {
                    peri-=1;
                }
            }
        }
    }
    return peri;
}

int main() {
    int mat[] = {1, 0, 0, 1, 0, 0, 1, 0, 0};
 
    cout << findPerimeter(mat, 3, 3);
    return 0;
}