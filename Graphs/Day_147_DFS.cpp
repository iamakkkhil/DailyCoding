#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void DFSUtil(int i, int V, vector<int> adj[], vector<int> &result, bool visited[])
    {
        
        if (visited[i])
        {
            return;
        }

        visited[i] = true;
        result.push_back(i);

        for (int j : adj[i])
        {
            if (visited[i] == false)
            {
                DFSUtil(j, V, adj, result, visited);
            }
        }
    }

    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        // Code here
        bool visited[V] = {false};

        // To store the answer
        vector<int> result;

        for (int i = 0; i < V; i++)
        {
            if (visited[i] == false)
            {
                DFSUtil(i, V, adj, result, visited);
            }
        }
        return result;
    }
};
