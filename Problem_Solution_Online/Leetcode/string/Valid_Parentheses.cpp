#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s){
        stack<char> st;
        for(auto i: s){
            if(i == '(' || i == '{' || i == '['){
                st.push(i);
            }else if(i == ')' && !st.empty() && st.top() == '('){
                st.pop();
            }else if(i == '}' && !st.empty() && st.top() == '{'){
                st.pop();
            }else if(i == ']' && !st.empty() && st.top() == '['){
                st.pop();
            }else{
                cout << "false" << endl;
                return false;
            }
        }
        if(st.empty()){
            cout << "true" << endl;
            return true;
        }else{
            cout << "false" << endl;
            return false;
        }
    
    }
    
};

int main() {
    string s = "()[]{}";
    Solution sol;
    sol.isValid(s);
    return 0;
}