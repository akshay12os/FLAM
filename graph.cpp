#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<vector<int>>& graph, vector<bool>& visited, vector<bool>& inStack) {
    visited[node] = true;
    inStack[node] = true;

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            if (dfs(neighbor, graph, visited, inStack)) {
                return true;
            }
        } else if (inStack[neighbor]) {
            // Cycle detected
            return true;
        }
    }

    inStack[node] = false; // backtrack
    return false;
}

bool hasCircularDependency(int n, vector<vector<int>>& edges) {
    vector<vector<int>> graph(n);
    for (auto& edge : edges) {
        int from = edge[0], to = edge[1];
        graph[from].push_back(to);
    }

    vector<bool> visited(n, false);
    vector<bool> inStack(n, false);

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            if (dfs(i, graph, visited, inStack)) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    vector<vector<int>> edges1 = {{0, 1}, {1, 2}, {2, 3}};
    vector<vector<int>> edges2 = {{0, 1}, {1, 2}, {2, 0}};
    vector<vector<int>> edges3 = {{0, 0}}; // self-dependency

    cout << hasCircularDependency(4, edges1) << endl; // Output: 0 (false)
    cout << hasCircularDependency(4, edges2) << endl; // Output: 1 (true)
    cout << hasCircularDependency(1, edges3) << endl; // Output: 1 (true)

    return 0;
}
