#include <iostream>
using namespace std;
#include <limits.h>
#include <bits/stdc++.h>
#define V 9


int selectMinVertex(vector<int> value, vector<bool> processed) {
    int minVertex = INT_MAX;
    int vertex;

    for(int i=0; i<V; i++) {
        if (processed[i] == false && value[i]<minVertex) {
            minVertex = value[i];
            vertex = i;
        }
    }
    return vertex;
}


void dijkstra_algo(int graph[V][V]) {
    vector<int> parent(V, -1);
    vector<int> value(V, INT_MAX);
    vector<bool> processed(V, false);

    int source = 0;
    parent[source] = -1;
    value[source] = 0;

    for (int i=0; i<V-1; i++){
        int U = selectMinVertex(value, processed);
        processed[U] = true;

        for (int j=0; j<V; j++) {
            if (graph[U][j] != 0 && processed[j] == false && value[U]!=INT_MAX && value[U] + graph[U][j] < value[j]) {
                value[j] = value[U]+graph[U][j];
                parent[j] = U;
            }
        }
    }

    for (int i=1; i<V; i++) {
        cout<< "U->V: "<<parent[i]<<"->"<<i<<" wt= "<<graph[parent[i]][i]<<endl;
    }
}


int main() {
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
    
    dijkstra_algo(graph);
    return 0;
}