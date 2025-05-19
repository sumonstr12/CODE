#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int len = str.length();
    bool res = true;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != str[len-1-i])
        {
            res = false;
            break;
        }
        
    }
    if(res)
        cout<<"Yes!"<<endl;
    else
        cout<<"Sorry!"<<endl;
    
}