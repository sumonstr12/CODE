#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    bool res = true;
    string final = str;
    if(str[0]>=65 && str[0] <= 90){
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i]>=65 && str[i] <= 90){
                str[i] = str[i] + 32;
            }else{
                res = false;
                break;
            }
        }
        if(res){
            cout<<str<<endl;
        }else{
            cout<<final<<endl;
        }
        
    }else{
        if(str[0]>=97 && str[0]<=122){
            str[0] = str[0] - 32;
            for (int i = 1; i < str.length(); i++)
            {      
                if(str[i]>=65 && str[i]<=90){
                    str[i] += 32;
                }
                else{
                    res = false;
                    break;
                }
            }
        }
        if(res){
            cout<<str<<endl;
        }else{
            cout<<final<<endl;
        }
    }
    
}