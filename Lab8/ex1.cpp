// Write a C++ program to find the traversal of the following graphs . [Choose a random node as a sourc

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100];
int visited[100];

vector<int> BFS(int source) {
  vector<int> bfs;
  queue<int> temp;

  visited[source] = 1;
  temp.push(source);

  while (!temp.empty()) {
    int node = temp.front();
    temp.pop();
    bfs.push_back(node);

    for (auto it : adj[node]) {
      int next = it;

      if (visited[next]) continue;

      visited[next] = 1;
      temp.push(next);
    }
  }
  return bfs;
}

int main() {
    int m, s, node, edge, graphs;

    cout << "Enter the number of graphs: ";
    cin >> graphs;

    for(int g = 1; g <= graphs; ++g) {
        cout << "Graph " << g << ":\n";
        cout << "number of nodes: ";
        cin >> node;
        cout << "number of edges: ";
        cin >> edge;

        cout << "give the edge connections:\n";
        for (int i = 0; i < edge; i++) {
            cin >> m >> s;
            adj[m].push_back(s);
            adj[s].push_back(m);
        }

        int source;
        cout << "give source node: ";
        cin >> source;

        vector<int> bfs;
        bfs = BFS(source);

        cout << "BFS traversal of graph " << g << ":\n";
        for (auto it : bfs) {
            cout << it << " ";
        }
        cout << endl;


        for (int i = 0; i < 100; i++)
            visited[i] = 0;

        for (int i = 0; i < 100; i++)
            adj[i].clear();
    }

    return 0;
}
