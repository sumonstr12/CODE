#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    string res[n];
    int number[n];
    
    for (int i = 0; i < n; i++)
    {
        if(str[i] != "0"){
            res[i] = "OK";
            number[i] = 0;
            int p = 1;
            for (int j = i + 1; j < n; j++)
            {
                if(str[i] == str[j]) {
                    res[j] = str[i];
                    str[j] = "0";
                    number[j] = p;
                    p++;
                }
            }
        }
        
    }
    for(int i = 0;i<n;i++){
        if(number[i] == 0){
            cout<<res[i]<<endl;
        }else{
            cout<<res[i]<<number[i]<<endl;
        }
    }
}