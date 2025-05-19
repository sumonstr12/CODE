#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int minlen = min(word1.length(), word2.length());
        string res = "";
        for(int i = 0; i < minlen; i++){
            res += word1[i];
            res += word2[i];
        }
        if(word1.length() > word2.length()){
            res += word1.substr(minlen);
        }else{
            res += word2.substr(minlen);
        }
        return res;
    }
    
};

int main() {
    Solution sol;
    string word1, word2;
    cin>>word1>>word2;
    string res = "";
    res = sol.mergeAlternately(word1, word2);
    cout<<res;
    return 0;
}
