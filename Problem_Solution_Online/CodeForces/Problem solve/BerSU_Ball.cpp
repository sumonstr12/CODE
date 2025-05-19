#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(abs(a[i] - b[j]) <= 1){
                count++;
                b[j] = INF;
                break;
            }
        }
    }
    cout << count << endl;

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; // number of test cases
    // cin >> t;
    while (t--)
    {
        solve();
    }
    
}