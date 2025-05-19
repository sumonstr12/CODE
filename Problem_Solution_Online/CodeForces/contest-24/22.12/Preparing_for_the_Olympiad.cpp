
// Accepted

#include<bits/stdc++.h>
using namespace std;

#define long long ll

void solve(){
    int n;
    cin >> n; 
    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
        
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int total = a[n-1];
    for (int i = 0; i < n - 1; i++)
    {
        if(a[i] > b[i + 1]){
            total += a[i] - b[i + 1];
        }
    }
    cout << total << endl;
      
    
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