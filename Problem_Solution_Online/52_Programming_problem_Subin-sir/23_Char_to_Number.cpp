#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    for (int i = 0; i < str.length(); i++)
    {
        cout<<str[i] - 64;  // For only Uppercase letters.
    }
    
}