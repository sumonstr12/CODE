#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        if(len == 0) return 0;
        int fin = 0;
        for (int i = 0; i < len; i++)
        {
            int temp = 0;
            unordered_map<char, int> mp;
            for (int j = i; j < len; j++)
            {
                if(mp.find(s[j]) == mp.end()){
                    mp[s[j]] = j;
                    temp++;
                }else{
                    break;
                }
            }
            fin = max(fin, temp);

                
        }
        return fin;
        

    }
};

int main() {
    
    string s = "abcabcbb";
    Solution sol;
    int num = sol.lengthOfLongestSubstring(s);
    cout << num << endl;
    
    return 0;
}
