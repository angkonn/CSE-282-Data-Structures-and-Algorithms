// Write a C++ program to Represent the following graphs using an adjacency List.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  for (int a = 1; a < 3; a++) {
    cout << "figure " << a << endl;

    int m, s, edge, node;

    cout << "number of nodes: ";
    cin >> node;

    cout << "number of edges: ";
    cin >> edge;

    vector<int> graph[node];

    cout << "give edge connections: " << endl;
    for (int i = 0; i < edge; i++) {
      cin >> m >> s;
      graph[m].push_back(s);
      graph[s].push_back(m);
    }

    cout << "adjacency list for figure " << a << endl;
    for (int j = 0; j < node; j++) {
      cout << j << " --> ";
      for (auto it : graph[j]) {
        cout << it << " ";
      }
      cout << endl;
    }
  }

  return 0;
}
