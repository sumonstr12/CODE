
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin>> n;
    vector<int> v(n);
    for(int i = 0; i<n;i++){
        cin>> v[i];
    }

    int s = 0, d = 0;
    bool st  = true;
    while(!v.empty()){
        if(st){
            if(*v.begin() > v.back()){
                s += *v.begin();
                v.erase(v.begin());
            }else{
                s += v.back();
                v.erase(v.end());
            }
            st = false;
        }else{
            if(*v.begin() > v.back()){
                d += *v.begin();
                v.erase(v.begin());
            }else{
                d += v.back();
                v.erase(v.end());
            }
            st = true;
        }
    }

    cout<<s << " "<< d <<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; // number of test cases
    // cin >> t;
    // while (t--)
    // {
        solve();
    //}
    
}