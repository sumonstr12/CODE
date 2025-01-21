#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // STL use kora jabe na
    // so not recommended/accepted
    int reverse(int x) {
        if(x == 0) return 0;
        if(x%10 == 0){
            x = x/10;
        }
        bool neg = false;
        if(x < 0){
            neg = true;
            x = abs(x);
        }
        int len = log10(x) + 1;
        // convert to array
        int arr[len];
        for(int i = len - 1; i >= 0; i--){
            arr[i] = x % 10;
            x = x / 10;
        }
        // array to number
        long long num = 0;
        for(int i = 0; i < len; i++){
            num += arr[i] * pow(10, i);
        }
        if(neg){
            return -num;
        }else{
            return num;
        }


    }
};

int main() {
    int n;
    cin >> n;
    Solution s;
    cout << s.reverse(n) << endl;
    return 0;
}
