#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAdj(vector<int> adj[], int V)
{
    for (int i = 0; i < V; i++)
    {
        for (auto x : adj[i])
            cout << "-> " << x;
        printf("\n");
    }
}

void BFS(vector<int> adj[], int V) {
    bool visited[V+1];
    for(int i=1; i<V+1; i++){
        visited[i] = false;
    }

    queue<int> q;
    int s=1;
    visited[s] = true;
    q.push(s);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";

        for(int i=0; i<adj[node].size(); i++){
            if (visited[adj[node][i]] == false){
                visited[adj[node][i]] = true;
                q.push(adj[node][i]);
            }
        }
    }
}

int main() {
    int V = 6;
    vector<int> adj[V + 1];
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 2, 5);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    addEdge(adj, 4, 6);
    addEdge(adj, 5, 6);

    BFS(adj, V);
    return 0;
}