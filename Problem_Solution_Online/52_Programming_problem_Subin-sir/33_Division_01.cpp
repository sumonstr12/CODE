#include<bits/stdc++.h>
using namespace std;

int division(int a,int c){
    int b = a +(c - (a % c));
    return b;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d = division(a,c);
    for (int i = 0; ; i++)
    {
        if ((d + (i * c)) > b)
        {
            break;
        }
        cout<<d+(i*3)<<endl;
        
    }
    
}