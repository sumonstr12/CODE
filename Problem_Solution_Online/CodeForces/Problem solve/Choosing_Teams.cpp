#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]+k<=5){
            count++;
        }
    }
    if(count>=3){
        cout<<count/3;
    }
    else{
        cout<<0;
    }
}