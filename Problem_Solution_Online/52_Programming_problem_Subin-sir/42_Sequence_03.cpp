#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    for (int i = N; i >= 0; i--)
    {
        if(i == 0){
            cout<<'1';
        }else if(i == 1){
            cout<<"2 + ";
        }else{
            cout<<"2^"<<i<<" + ";
        }
    }
    
}