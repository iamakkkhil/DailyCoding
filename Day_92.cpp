/*
DAY 92: Steps by Knight.
https://www.geeksforgeeks.org/minimum-steps-reach-target-knight/

QUESTION : Given a square chessboard, the initial position of Knight and position of a target. 
\Find out the minimum steps a Knight will take to reach the target position.

Note:
The initial and the target position co-ordinates of Knight have been given accoring 
to 1-base indexing.

Example 1:
Input:
    N=6
    knightPos[ ] = {4, 5}
    targetPos[ ] = {1, 1}
Output:
    3  
Explanation: 
    Knight takes 3 step to reach from 
    (4, 5) to (1, 1):
    (4, 5) -> (5, 3) -> (3, 2) -> (1, 1).

Expected Time Complexity: O(N^2)
Expected Auxiliary Space: O(N^2)

Constraints:
1 <= N <= 1000
1 <= Knight_pos(X, Y), Targer_pos(X, Y) <= N
*/

#include <bits/stdc++.h>

struct cell {
    int x, y;
    int dis;
    cell() {}
    cell(int x, int y, int dis)
        : x(x), y(y), dis(dis) 
    {
    }
};

int minStepToReachTarget(int KnightPos[2],int TargetPos[2],int N)
{
    // Code here
    int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
    
    int current_pos[2];
    int final_pos[2];
    int distance=0;
    
    queue<cell> possible_pos;
    // Assigning false 
    vector<vector<bool>>distance_matrix(N, vector<bool>(N, false));
    
    
    // Final Position
    final_pos[0] = TargetPos[0]-1;
    final_pos[1] = TargetPos[1]-1;
    
    // Starting from Knight Pos;
    current_pos[0] = KnightPos[0] -1;
    current_pos[1] = KnightPos[1] -1;
    
    possible_pos.push(cell(current_pos[0], current_pos[1], distance));
    
    distance_matrix[current_pos[0]][current_pos[1]] = 1;
    
    while (!possible_pos.empty()){
        int current_distance = possible_pos.front().dis;
        int x = possible_pos.front().x;
        int y = possible_pos.front().y;
        
        possible_pos.pop();
        
        for(int i=0; i<8; i++) {
            int temp_x = x+dx[i];
            int temp_y = y+dy[i];
            
            if (temp_x == final_pos[0] and temp_y == final_pos[1]) {
                        return current_distance+1;
            }  
            
            if (temp_x >=0 and temp_x < N and temp_y >=0 and temp_y < N) {
            
                if (distance_matrix[temp_x][temp_y] == 0) {
                    possible_pos.push(cell(temp_x, temp_y, current_distance+1));
                    distance_matrix[temp_x][temp_y] = 1;
                }
            }
        }
    }
    return 0;   
}

int main() {

    int Knight_pos[] = {4,5};
    int Target_pos[] = {1,1};
    int N = 6;

    cout<<minStepToReachTarget(Knight_pos, Target_pos, N);

    return 0;
}