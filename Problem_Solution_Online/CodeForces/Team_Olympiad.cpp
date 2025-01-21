#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int one = 0, two = 0, three = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 1){
            one++;
        }else if(a[i] == 2){
            two++;
        }else{
            three++;
        }
    }
    if(one == 0 || two == 0 || three == 0){
        cout << 0 << endl;
        return;
    }
    int teams = min(one, min(two, three));
    cout << teams << endl;
    for(int i = 0; i < teams; i++){
        for(int j = 0; j < n; j++){
            if(a[j] == 1){
                cout << j + 1 << " ";
                a[j] = 0;
                break;
            }
        }
        for(int j = 0; j < n; j++){
            if(a[j] == 2){
                cout << j + 1 << " ";
                a[j] = 0;
                break;
            }
        }
        for(int j = 0; j < n; j++){
            if(a[j] == 3){
                cout << j + 1 << " ";
                a[j] = 0;
                break;
            }
        }
        cout << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    
}