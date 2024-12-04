#include<bits/stdc++.h>
using namespace std;

#define long long ll

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(arr[n-1] % 10 == 0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }   
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    
}