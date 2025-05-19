#include<bits/stdc++.h>
using namespace std;

#define ll long long

struct Node{
    int k, l, r;
};

// function f(k, a, l, r):
//    ans := 0
//    for i from l to r (inclusive):
//       while k is divisible by a[i]:
//          k := k/a[i]
//       ans := ans + k
//    return ans


int function_f(int k, vector<int>& a, int l, int r){
    int ans = 0;
    for (int i = l; i <= r; i++){
        while (k % a[i] == 0){
            k /= a[i];
        }
        ans += k;
    }
    return ans;
}


void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> arr(n+1);
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    vector<Node> a(q+1);
    vector<int> ans(n+1, 0);
    for (int i = 1; i <= q; i++){
        cin >> a[i].k >> a[i].l >> a[i].r;
    }
    for (int i = 1; i <= q; i++){
        int k = a[i].k, l = a[i].l, r = a[i].r;
        ans[k] += function_f(k, arr, l, r);
    }
    for (int i = 1; i <= n; i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
    return;
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