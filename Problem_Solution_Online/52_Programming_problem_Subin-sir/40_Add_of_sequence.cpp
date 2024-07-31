// Facing Problem.

/*
    input : 5 2 output 30.
    Right ans: 31
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,k;
    cin>>x>>k;
    int total = 0;
    for (int i = 0; i <= k; i++)
    {
        total += pow(x,i);
    }
    cout<<"Result = "<<total<<endl;

    
}