/* REFERENCE : https://youtu.be/dhgKr8942rs */
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
           cout << "-> " << x;
        printf("\n");
    }
}

int main()
{
    int V,E;
    cin >> V >> E;   // vertices and no of edges
    vector<int> adj[V];

    for(int i=0;i<E;i++){
        int u,v;
        cin >> u >> v;
        addEdge(adj,u,v);
    }
    printGraph(adj, V);
    return 0;
}