#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    vector<pair<int, int>> rsum; 

    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            rowSum += arr[i][j];
        }
        rsum.emplace_back(rowSum, i);
    }

    sort(rsum.rbegin(), rsum.rend());

    vector<int> finalArray;
    for (auto &[sum, index] : rsum) {
        finalArray.insert(finalArray.end(), arr[index].begin(), arr[index].end());
    }

    long long totalSum = 0, prefixSum = 0;
    for (int num : finalArray) {
        prefixSum += num;
        totalSum += prefixSum;
    }

    cout << totalSum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
