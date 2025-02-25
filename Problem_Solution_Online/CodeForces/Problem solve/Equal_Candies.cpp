#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int total = 0;
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        total += a[i];
        if(a[i] < min){
            min = a[i];
        }
    }
    min = min * n;
    cout << total - min << endl;
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