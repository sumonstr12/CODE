
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin>> n;
    string s = to_string(n);
    int len = s.length();
    if(len % 2 == 0){
        string left = s.substr(0, len/2);
        string right = s.substr(len/2, len/2);
        if(left.compare(right) > 0){
            cout<< left<< right<< "\n";
        }else{
            string temp = left;
            int carry = 1;
            for(int i=(len/2)-1; i>=0; i--){
                int x = (temp[i] - '0') + carry;
                carry = x/10;
                temp[i] = (x%10) + '0';
            }
            left = temp;
            right = left;
            reverse(right.begin(), right.end());
            cout<< left<< right<< "\n";
        }
    }else{
        string left = s.substr(0, len/2);
        string mid = s.substr(len/2, 1);
        string right = s.substr(len/2+1, len/2);
        if(left.compare(right) > 0){
            cout<< left<< mid<< right<< "\n";
        }else{
            string temp = left;
            int carry = 1;
            for(int i=(len/2)-1; i>=0; i--){
                int x = (temp[i] - '0') + carry;
                carry = x/10;
                temp[i] = (x%10) + '0';
            }
            left = temp;
            right = left;
            reverse(right.begin(), right.end());
            cout<< left<< mid<< right<< "\n";
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; // number of test cases
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}