#include <iostream>
#include <string>
using namespace std;

void solve() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;  // n: number of 0's, m: number of 1's, k: maximum balance-value
        
        // If the balance value is greater than max(n, m), it's impossible to achieve
        if (k > max(n, m)) {
            cout << -1 << endl;
            continue;
        }
        
        // Constructing the binary string
        string result = "";
        
        // Current counts of 0's and 1's
        int zeros_left = n;
        int ones_left = m;
        
        // We want to create a balanced string with balance k
        int balance = 0; // Start with a balance of 0
        
        while (zeros_left > 0 || ones_left > 0) {
            // Try to maintain balance k
            if (balance < k && zeros_left > 0) {
                result += '0';
                zeros_left--;
                balance++;  // Adding a 0 increases balance (more 0's than 1's)
            }
            else if (balance > -k && ones_left > 0) {
                result += '1';
                ones_left--;
                balance--;  // Adding a 1 decreases balance (more 1's than 0's)
            }
            else {
                // If the balance is already at its max or min, just add the remaining elements
                if (zeros_left > 0) {
                    result += '0';
                    zeros_left--;
                } else if (ones_left > 0) {
                    result += '1';
                    ones_left--;
                }
            }
        }
        
        // Print the result
        cout << result << endl;
    }
}

int main() {
    solve();
    return 0;
}
