/*
DAY 82: Maximum of minimum for every window size.
https://www.geeksforgeeks.org/find-the-maximum-of-minimums-for-every-window-size-in-a-given-array/

QUESTION : Given an integer array. The task is to find the maximum of the minimum of every window 
size in the array.
Note: Window size varies from 1 to the size of the Array.

Input:
N = 7
arr[] = {10,20,30,50,10,70,30}
Output: 70 30 20 10 10 10 10 
Explanation: First element in output indicates maximum of minimums of all windows of size 1. Minimums of windows
of size 1 are {10}, {20}, {30}, {50}, {10}, {70} and {30}. Maximum of these minimums is 70. 
Second element in output indicates maximum of minimums of all windows of 2. Minimums of windows of size 2
are {10}, {20}, {30}, {10}, {10}, and {30}. Maximum of these minimums is 30 .Third element in output indicates
maximum of minimums of all windows of size 3. Minimums of windows of size 3 are {10}, {20}, {10}, {10} and {10}.
Maximum of these minimums is 20. Similarly other elements of output are computed.

Expected Time Complexity : O(N)
Expected Auixilliary Space : O(N)

Constraints:
1 <= N <= 10^5
1 <= arr[i] <= 10^6

*/


vector <int> maxOfMin(int arr[], int n) {
    stack<int> s; // Used to find previous and next smaller

    // Arrays to store previous and next smaller
    int left[n + 1];
    int right[n + 1];

    // Initialize elements of left[] and right[]
    for (int i = 0; i < n; i++) {
        left[i] = -1;
        right[i] = n;
    }

    // Fill elements of left[] using logic discussed on
    // https://www.geeksforgeeks.org/next-greater-element/
    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[s.top()] >= arr[i]) s.pop();

        if (!s.empty()) left[i] = s.top();

        s.push(i);
    }

    // Empty the stack as stack is going to be used for right[]
    while (!s.empty()) s.pop();

    // Fill elements of right[] using same logic
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && arr[s.top()] >= arr[i]) s.pop();

        if (!s.empty()) right[i] = s.top();

        s.push(i);
    }

    // Create and initialize answer array
    int ans[n + 1];
    for (int i = 0; i <= n; i++) ans[i] = 0;

    // Fill answer array by comparing minimums of all
    // lengths computed using left[] and right[]
    for (int i = 0; i < n; i++) {
        // length of the interval
        int len = right[i] - left[i] - 1;

        // arr[i] is a possible answer for this length
        // 'len' interval, check if arr[i] is more than
        // max for 'len'
        ans[len] = max(ans[len], arr[i]);
    }

    // Some entries in ans[] may not be filled yet. Fill
    // them by taking values from right side of ans[]
    for (int i = n - 1; i >= 1; i--) ans[i] = max(ans[i], ans[i + 1]);

    vector <int> res (n);
    for (int i = 1; i <= n; i++) res[i-1] = ans[i];
    return res;
}