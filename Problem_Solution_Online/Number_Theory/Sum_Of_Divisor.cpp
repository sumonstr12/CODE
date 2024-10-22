#include<bits/stdc++.h>
using namespace std;

// Function to calculate the sum of divisors using prime factorization
int sumOfDivisors(int n) {
    int sum = 1;
    
    // Handle 2 separately
    int currentSum = 1;
    int currentTerm = 1;
    while (n % 2 == 0) {
        n /= 2;
        currentTerm *= 2;
        currentSum += currentTerm;
    }
    sum *= currentSum;

    // Check for all odd primes
    for (int i = 3; i <= sqrt(n); i += 2) {
        currentSum = 1;
        currentTerm = 1;
        if (n % i == 0) {
            n /= i;
            currentTerm *= i;
            currentSum += currentTerm;
        }
        sum *= currentSum;
    }
    
    // If n is still greater than 2, it means it's prime
    if (n > 2) {
        sum *= (1 + n);
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = sumOfDivisors(n);
    cout << "Sum of divisors of " << n << " is: " << result << endl;

    return 0;
}
