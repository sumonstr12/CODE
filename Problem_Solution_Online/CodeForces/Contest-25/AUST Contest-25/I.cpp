#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin>> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());   
    cout << a[0] << " ";
    for (int i = 1; i < n; i++)
    {
        if(a[i] == a[i-1]){
            cout << a[i] << " ";
        }
        else{
            cout << a[i] << " ";
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