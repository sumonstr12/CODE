#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;    //Reading input from STDIN
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr1[n];
		int arr2[n];
		for(int i = 0;i<n;i++){
			cin>>arr1[i];
		}
        float div[n];
		for(int i = 0;i<n;i++){
			cin>>arr2[i];
            if(arr1[i]<arr2[i]){
                div[i] = float(arr2[i]/arr1[i]);
                
            }else{
                div[i] = 0;
            }
            
		}
        cout<<endl;
        float divc[n] ;
        copy(div,div + n,divc);
        sort(divc,divc+n, greater<float>());
        int total = 0;
		for(int i = 0;i<k;i++){
			for(int j = 0;j<n;j++){
                if(divc[i] == div[j]){
                    arr1[j] = arr2[j];
                    break;
                }
            }
		}

        for(int i = 0;i<n;i++){
            cout<<divc[i]<<' ';
            cout<<arr1[i]<<' ';
            total += arr1[i];
        }

        cout<<total<<endl;

	}
}