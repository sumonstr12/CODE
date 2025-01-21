#include<bits/stdc++.h>
using namespace std;

#define long long ll


void solve(){
    int n, m,k;
    cin >> n >> m >> k;
    vector<int> a(m), q(k);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++)
    {
        cin >> q[i];
    }
    if(n>m){
        for (int i = 0; i < m; i++)
        {
            cout<<0;
            
        }
        return;
    }
    bool arr[m] = {true};
    int s = 0;
    for (int i = 0; i < m; i++)
    {
        //find which element is not in q
        if(find(q.begin(), q.end(), a[i]) != q.end())
        {
            arr[i] = true;
        }else{
            arr[i] = false;
            s++;
        }
        
    }
    if(s){
        
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
        cout << endl;
    }
    
}