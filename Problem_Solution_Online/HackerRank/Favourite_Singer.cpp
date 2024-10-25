#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool distinct(const vector<ll>& arr){
    set<ll> elements(arr.begin(), arr.end());
    return elements.size() == arr.size();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int res = 0;
    if(distinct(arr)){
        cout<<n<<endl;
    }else{
        for (int i = 0; i < n; i++){
            if(arr[i] == arr[i+1]){
                res++;
                for(int j = i+1;j<n;j++){
                    if(arr[j] != arr[i]){
                        break;
                    }
                    i = j;
                }
            }
        }
        cout<<res<<endl;
        
    }

    return 0;
    

}