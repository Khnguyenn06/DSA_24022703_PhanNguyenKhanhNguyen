#include <iostream>
#include <vector>
using namespace std;

class GraphList {
private:
    int n;
    vector<vector<int>> adj;

public:
    GraphList(int n) : n(n) {
        adj.resize(n);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void print() {
        for (int i = 0; i < n; i++) {
            cout << i << ": ";
            for (int v : adj[i]) cout << v << " ";
            cout << "\n";
        }
    }
};
