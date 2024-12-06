#include <iostream>
#include <vector>

using namespace std;

// Function to compute the nth Catalan number

unsigned long long catalan(int n) {
    // Create a vector to store catalan numbers
    vector<unsigned long long> catalan(n + 1, 0);

    // Initialize the first Catalan number
    catalan[0] = 1;

    // Calculate the Catalan numbers using dynamic programming
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            catalan[i] += catalan[j] * catalan[i - 1 - j];
        }
    }

    return catalan[n];
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "The " << n << "th Catalan number is " << catalan(n) << endl;
    return 0;
}


/*
    Cn = (2n)! / (n+1)!n!

*/