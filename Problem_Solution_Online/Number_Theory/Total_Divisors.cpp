#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the number of divisors using prime factorization
int numberOfDivisors(int n) {
    int totalDivisors = 1;

    // Handle the smallest prime factor 2
    int count = 0;
    while (n % 2 == 0) {
        n /= 2;
        count++;
    }
    totalDivisors *= (count + 1);

    // Handle other odd prime factors
    for (int i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        totalDivisors *= (count + 1);
    }

    // If n is still greater than 2, it must be prime
    if (n > 2) {
        totalDivisors *= 2; // (count + 1) is 2 for a prime factor with count 1
    }

    return totalDivisors;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = numberOfDivisors(n);
    cout << "Number of divisors of " << n << " is: " << result << endl;

    return 0;
}
