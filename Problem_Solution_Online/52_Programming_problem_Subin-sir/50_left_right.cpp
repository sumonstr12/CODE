#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'L'){
            str[i] = str[i-1];
        }else if(str[i] == 'R'){
            str[i] = str[i+1];
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        cout<<str[i];
    }
    
    
}