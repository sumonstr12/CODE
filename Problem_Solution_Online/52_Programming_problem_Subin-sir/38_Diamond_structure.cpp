#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<k<<' ';
        }
        cout<<endl;
    }
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<k<<' ';
        }
        cout<<endl;
    }
    
}