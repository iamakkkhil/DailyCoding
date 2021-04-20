/*
DAY 78: Max rectangle.
https://www.geeksforgeeks.org/maximum-size-rectangle-binary-sub-matrix-1s/

QUESTION : Given a binary matrix. Find the maximum area of a rectangle formed only of 1s in the given matrix.

Input:
    n = 4, m = 4
    M[][] = {{0 1 1 0},
            {1 1 1 1},
            {1 1 1 1},
            {1 1 0 0}}
Output: 8
Explanation: For the above test case the
    matrix will look like
    0 1 1 0
    1 1 1 1
    1 1 1 1
    1 1 0 0
    the max size rectangle is 
    1 1 1 1
    1 1 1 1
    and area is 4 *2 = 8.

Expected Time Complexity : O(R*C)
Expected Auixilliary Space : O(m)

Constraints:
1<=n,m<=1000
0<=M[][]<=1
*/

# include <bits/stdc++.h>

using namespace std;

int max_area_hist(int arr[], int ele){
    stack <int> stk;
    int left[ele];
    int right[ele];
    int n = ele;
    // left array
    for (int i = 0; i < n; i++){   
        if (stk.empty()){ 
            stk.push(i);
			left[i] = 0;
		}
		else{   
            while(!stk.empty() and arr[stk.top()] >= arr[i]) {
                stk.pop();
            }
            if(stk.empty()) left[i] = 0;
            else left[i]=stk.top()+1;
            stk.push(i);
		}    
    }

     while (!stk.empty()) {
        stk.pop();
    }

    //right array
    for (int i = n-1; i >= 0; i--){   
        if (stk.empty()) { 
            stk.push(i);
			right[i] = n-1;
		}
        else {
            while(!stk.empty() and arr[stk.top()] >= arr[i]) {
                stk.pop();
            }
            if(stk.empty()) right[i] = n-1;
            else right[i]=stk.top()-1;
            stk.push(i);
        }
    }

    int area=0;
    for (int i=0; i<n; i++) {
        int bar_area = arr[i] * (right[i]-left[i]+1);
        if(bar_area>area) area = bar_area;
    }

    return area;
}


int main()
{   
    int R=3, C=4;
    int A[][C] = {
        {0, 1, 1, 1},
        {1, 1, 1, 1},
        {0, 1, 1, 1}};  
 
    int max_area = max_area_hist(A[0], C);
    
    for(int i=1; i<R; i++) {
        for(int j=0; j<C; j++) {
            if (A[i][j] != 0){
                A[i][j] = A[i][j] + A[i-1][j];
            }
        }
        int result = max_area_hist(A[i], C);
        if (result > max_area) max_area = result;
    }

    cout<<max_area; 
	return 0;
}