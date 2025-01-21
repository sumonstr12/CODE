#include<bits/stdc++.h>
using namespace std;

#define long long ll

bool check(vector<int> a, vector<int> q, int m, int p, int k){

    for(int i = 0; i< m; i++){
        if(i != p){
            if(find(q.begin(), q.end(), a[i]) != q.end())
            {}else{
                return false;
            }
        }
        
    }
    return true;
    
}

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
    for (int i = 0; i < m; i++)
    {
        bool flag = check(a,q,m, i, k);
        if(flag){
            cout<<1;
        }else{
            cout<<0;
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
        cout << endl;
    }
    
}