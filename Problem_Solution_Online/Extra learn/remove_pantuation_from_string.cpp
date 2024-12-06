
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello, World!";
    string str = "";
    for(auto i: s){
        if(isalnum(i)){
            str += islower(i) ? i : tolower(i);
        }
    }
    cout << str << endl;
    string sum = "";
    for(auto i: s){
        sum += i;
    }
    cout << sum << endl;
}