#include <iostream>
#include <vector>
using namespace std;

class GraphMatrix {
private:
    int n;
    vector<vector<int>> matrix;

public:
    GraphMatrix(int n) : n(n) {
        matrix.assign(n, vector<int>(n, 0));
    }

    void addEdge(int u, int v) {
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }

    void print() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
            cout << "\n";
        }
    }
};
