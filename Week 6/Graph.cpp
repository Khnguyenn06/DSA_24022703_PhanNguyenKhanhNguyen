#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
    int V;
    vector<vector<int>> adj;

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // DFS
    void DFS(int start) {
    vector<bool> visited(V, false);
    stack<int> st;

    st.push(start);

    cout << "DFS: ";

    while (!st.empty()) {
        int u = st.top();
        st.pop();

        if (!visited[u]) {
            visited[u] = true;
            cout << u << " ";
            for (int i = adj[u].size() - 1; i >= 0; i--) {
                int v = adj[u][i];
                if (!visited[v]) {
                    st.push(v);
                }
            }
        }
    }

    cout << endl;
}


    // BFS
    void BFS(int start) {
        vector<bool> visited(V, false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        cout << "BFS: ";

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            cout << u << " ";

            for (int v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    Graph g(6);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);

    g.DFS(0);
    g.BFS(0);

    return 0;
}
