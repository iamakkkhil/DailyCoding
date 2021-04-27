/*
DAY 86: Queue Push & Pop.

QUESTION : Given an array arr[] of size N, enqueue the elements of the array into a queue 
and then dequeue them.

Example 1:
Input:
N = 5 
arr[] = 1 2 3 4 5 
Output: 
1 2 3 4 5

Example 2:
Input:
N = 7
arr[] = 1 6 43 1 2 0 5
Output:
1 6 43 1 2 0 5

Expected Time Complexity : O(N)
Expected Auixilliary Space : O(N)

Constraints:
1 <= Ai <= 107
*/

queue<int>_push(int arr[],int n)
{   
    queue <int> q;
   for(int i=0; i<n; i++) {
       q.push(arr[i]);
   }
   return q;
}

void _pop(queue<int>s)
{
    while(!s.empty()){
        int no = s.front();
        cout<<no<<" ";
        s.pop();
    }
} 