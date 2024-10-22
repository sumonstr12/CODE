#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n = str.length();
    string s;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'h')
        {
            s[0] = 'h';
            for (int j = i+1; j < n; j++)
            {
                if (str[j] == 'e')
                {   s[1] = 'e';
                    for (int k = j+1; k < n; k++)
                    {
                        if (str[k] == 'l')
                        {
                            s[2] = 'l';
                            for (int l = k+1; l < n; l++)
                            {
                                s[3] = 'l';
                                if (str[l] == 'l')
                                {
                                    s[4] = 'o';
                                    for (int m = l+1; m < n; m++)
                                    {
                                        if (str[m] == 'o')
                                        {
                                            s[5] = 'o';
                                            break;
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
        }
        
    }
    if( s[0] == 'h' && s[1] == 'e' && s[2] == 'l' && s[3] == 'l' && s[4] == 'o' && s[5] == 'o'){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}