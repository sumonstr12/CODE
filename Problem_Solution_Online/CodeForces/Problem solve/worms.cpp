#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> p_sum(n);
    int a;
    cin >> a;
    p_sum[0] = a;
    for(int i = 1; i < n; i++){
        cin >> a;
        p_sum[i] = p_sum[i-1] + a;
    }
    int m;
    cin >> m;
    vector<int> q(m);
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        int index = lower_bound(p_sum.begin(), p_sum.end(), x) - p_sum.begin();
        cout<<index+1<<endl;
    }

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