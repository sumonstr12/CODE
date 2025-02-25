
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    int z = 0, o = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        v[i] = v[i] % 2;
        if(v[i] == 0){
            z++;
        }else{
            o++;
        }
    }
    if(z > o){
        for(int i = 0; i < n; i++){
            if(v[i] == 1){
                cout << i + 1 << endl;
                break;
            }
        }
    }else{
        for(int i = 0; i < n; i++){
            if(v[i] == 0){
                cout << i + 1 << endl;
                break;
            }
        }
    }
    
    

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    
}