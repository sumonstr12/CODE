#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin>> n;
    vector<int> a(n);
    int min = INT_MAX, pos = 0;

    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
        if(a[i] < min){
            min = a[i];
            pos = i + 1;
        }
    }
    if(pos <= n/2){
        if((n-pos) * 2  < min){
            cout<< "YES\n";
        }else{
            cout<< "NO\n";
        }
    }else{
        pos = n - pos + 1;
        if((n-pos) * 2  < min){
            cout<< "YES\n";
        }else{
            cout<< "NO\n";
        }
    }
    
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