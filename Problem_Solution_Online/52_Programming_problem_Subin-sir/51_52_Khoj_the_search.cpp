#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        int flag = 1;
        int con = 0;
        for (int i = 0; i < str1.length(); i++)
        {
            if(str1[i] == str2[0]){
                for (int j = 1; j < str2.length(); j++)
                {   flag++;
                    if(str1[i+j] != str2[j]){
                        flag = 1;
                        break;
                    }
                    if(str2.length() == flag){
                        con++;
                        flag = 1;
                        cout<<i<<endl;
                    }
                }
                
            }
            
        }
        cout<<"Total count : "<<con<<endl;
        
    }
    
}