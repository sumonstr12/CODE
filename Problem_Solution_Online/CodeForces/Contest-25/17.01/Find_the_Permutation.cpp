#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> createGraph(const vector<vector<int>>& matrix, int n) {
    vector<vector<int>> graph(n);
    vector<int> indegree(n, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 1) {
                graph[i].push_back(j);
                indegree[j]++;
            }
        }
    }
    return graph;
}

void topologicalSort(int n, vector<vector<int>>& graph) {
    vector<int> indegree(n, 0);
    for (int i = 0; i < n; ++i) {
        for (int neighbor : graph[i]) {
            indegree[neighbor]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < n; ++i) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> result;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);

        for (int neighbor : graph[node]) {
            if (--indegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    if (result.size() != n) {
        cout << "1\n"; // If no valid topological order exists (cycle detected)
    } else {
        for (int i = 0; i < n; ++i) {
            cout << result[i] + 1 << " "; // Output 1-based index
        }
        cout << endl;
    }
}

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = s[i][j] - '0';
        }
    }

    vector<vector<int>> graph = createGraph(a, n);
    topologicalSort(n, graph);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
