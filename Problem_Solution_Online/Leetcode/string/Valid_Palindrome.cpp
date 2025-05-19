
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto i: s){
            if(isalnum(i)){
                str += tolower(i);
            }
        }
        cout << str << endl;
        string rev = str;
        reverse(rev.begin(), rev.end());
        if(str == rev){
            return true;
        }else{
            return false;
        }
    }
    
};

int main() {
    string s = "A man, a plan, a canal: Panama";
    Solution sol;
    sol.isPalindrome(s);
    return 0;
}
