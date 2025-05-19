
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0)){
            return false;
        }
        int s = x;
        long r = 0;
        while (x)
        {
            r = r * 10 + x % 10;
            x = x / 10;
        }
        while (s)
        {
            if(r%10 != s%10){
                return false;
            }
            r = r / 10;
            s = s / 10;
        }
        return true;
        
        
    }
};

int main() {
    int n;
    cin >> n;
    Solution s;
    cout << s.isPalindrome(n) << endl;
    return 0;
}
