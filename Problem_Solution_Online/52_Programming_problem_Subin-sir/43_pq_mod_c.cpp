
#include<bits/stdc++.h>
using namespace std;

int main(){
    int p,q,c;
    cin>>p>>q>>c;
    int temp = 1;
    for(int i = 1;i<=q;i++){
        temp = (temp * p) % c;
    }
    cout<<temp<<endl;
    
}