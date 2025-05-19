// Facing Problem..
/*
    Didn't understand how it works.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int sum = 0;
    for(int i = 1;i<n;i++){
        if(n%i == 0){
            sum += i;
        }
    }

    if(sum == n){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}