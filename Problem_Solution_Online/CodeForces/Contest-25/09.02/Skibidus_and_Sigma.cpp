

#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    return a.second < b.second; 
}
void solve() {
    int n, m, p;
    cin >> n >> m;
    int arr[n][m];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {   
        int preFix = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            preFix += arr[i][j];
        }
        mp[i] = preFix;
        
    }
    vector<pair<int, int>> sortedMap(mp.begin(), mp.end());
    sort(sortedMap.begin(), sortedMap.end(), cmp);

    for (auto &p : sortedMap) {
        
        //cout << p.first << " -> " << p.second << endl;
    }


    
    
    
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
