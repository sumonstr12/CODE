#include<bits/stdc++.h>
using namespace std;

int Fac(int n){
    if (n==1){
        return 1;
    }else{
        return n*Fac(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<"Fac : "<<Fac(n);
}