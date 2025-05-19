#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin>>n;
    int t = 0;
    while (n>=1)
    {
        n = n/2;
        t++;
    }
    cout<<t <<" days"<<endl;
    
}