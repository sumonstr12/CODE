#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    // find the maximum element
    cout << *max_element(v.begin(), v.end()) << endl;

    // find the minimum element
    cout << *min_element(v.begin(), v.end()) << endl;

    // 2nd way
    vector<int>::iterator it;
    it = max_element(v.begin(), v.end());
    cout << *it << endl;

    // kon index e ache maximum element ta seta ber kora
    cout <<"index : "  << distance(v.begin(), it) << endl;

    // 2nd way
    int index = max_element(v.begin(), v.end()) - v.begin();
    cout<<"Index : "<< index<< endl;
}