#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<vector<int>> createGraph(vector<vector<int>> matrix, int n){
    vector<vector<int>> graph(n * n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (matrix[i][j] == 1 && matrix[j][k] == 1)
                {
                    graph[i * n + j].push_back(j * n + k);
                }
            }
        }
    }
    return graph;
}


void topologicalSort(int V, const vector<vector<int>>& graph) {
    vector<int> indegree(V, 0);

    for (int i = 0; i < V; ++i) {
        for (int neighbor : graph[i]) {
            indegree[neighbor]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < V; ++i) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> topoOrder;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topoOrder.push_back(node);
        for (int neighbor : graph[node]) {
            if (--indegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    if (topoOrder.size() != V) {
        cout << "1" << endl;
    } else {
        
        for (int i : topoOrder) {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    // convert into 2d martix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = s[i][j] - '0';
        }
    }

    vector<vector<int>> graph = createGraph(a, n);
    topologicalSort(graph.size(), graph);
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; // number of test cases
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}