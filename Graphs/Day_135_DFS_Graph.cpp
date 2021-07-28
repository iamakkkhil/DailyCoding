#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list <int> *adj;
    void DFSUtil(int v, bool visited[]);

    public:
    Graph(int V);
    void addEdge(int v, int w);
    void DFS(int V);
};

Graph :: Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFSUtil(int v, bool visited[]) {
    
}