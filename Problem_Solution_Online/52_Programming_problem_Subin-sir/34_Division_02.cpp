#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,r;
    cin>>a>>b>>r;
    for (int i = 1; ; i++)
    {
        if(a*b*i>r){
            break;
        }
        cout<<a*b*i<<endl;
        
    }
}