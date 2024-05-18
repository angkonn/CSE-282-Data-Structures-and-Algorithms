// Find the shortest distance and path from an arbitrary source to an arbitrary destination node

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector <int> adj[100];
int visited[100], dis[100], parent[100];
vector<int> path;

void BFS(int src) {
    queue<int> temp;
    dis[src] = 0;
    visited[src] = 1;
    parent[src] = -1;
    temp.push(src);

    while (!temp.empty()) {
        int node = temp.front();
        temp.pop();
        for (auto it : adj[node]) {
            int nxt = it;
            if (!visited[nxt]) {
                dis[nxt] = 1 + dis[node];
                visited[nxt] = 1;
                parent[nxt] = node;
                temp.push(nxt);
            }
        }
    }
}

void short_path(int dest) {
    if (dest != -1) {
        int par = parent[dest];
        path.push_back(dest);
        short_path(par);
    }
}

int main() {
    int m, s, edge, node, src, dest;
    cout << "number of node: ";
    cin >> node;
    cout << "number of edge: ";
    cin >> edge;
    cout << "give edge connections: " << endl;
    for (int i = 0; i < edge; i++) {
        cin >> m >> s;
        adj[m].push_back(s);
        adj[s].push_back(m);
    }

    cout << "Source node: ";
    cin >> src;
    cout << "Destination node: ";
    cin >> dest;

    BFS(src);
    cout << "shortest distance from " << src << " to " << dest << " = " << dis[dest] << endl;
    short_path(dest);
    reverse(path.begin(), path.end());
    cout << "shortest path: ";
    for (auto it : path) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
