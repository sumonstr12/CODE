#include<bits/stdc++.h>
using namespace std;

#define long long ll

void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0, y = 0;
    int ss = 1, w = 1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
        {
            y += 1;
        }
        else if (s[i] == 'S')
        {
            y -= 1;
            ss += 1;
        }
        else if (s[i] == 'E')
        {
            x += 1;
        }
        else if (s[i] == 'W')
        {
            x -= 1;
            w += 1;
        }

    }
    bool flag = false;
    for (int i = 0; i < ss; i++)
    {
        if(a%x == 0 && b%y == 0){
            flag = true;

        }
        else{
            y --;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        for (int i = 0; i < w; i++)
        {
            if(a%x == 0 && b%y == 0){
                flag = true;

            }
            else{
                x --;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
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