
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    // sort the vector
    sort(v.begin(), v.end());   // complexity O(nlogn)

    // find unique elements
    vector<int>::iterator it;

    // complexity O(n) for determining unique elements
    it = unique(v.begin(), v.end()); // ata diye unique element gula first e niye asbe

    v.resize(distance(v.begin(), it));  // ata diye unique element gula erase korbe jegula last e ache

    // print the unique elements
    for(it = v.begin(); it!= v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}