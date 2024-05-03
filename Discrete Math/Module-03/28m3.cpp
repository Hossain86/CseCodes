#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
// Function to find all pseudo primes to the base b not exceeding 10,000
vector<int> pPrime(int b) {
    vector<int> pPrime;
    for (int n = 2; n <= 10000; ++n) {
        // Check if n is pseudo prime to the base b
        int res = 1;
        int base = b % n;
        for (int k = n; k > 0; k >>= 1) {
            if (k & 1) res = (res * base) % n;
            base = (base * base) % n;
        }
        if (res == 1 && !isPrime(n)) {
            pPrime.push_back(n);
        }
    }
    return pPrime;
}
int main() {
    int b;
    cout << "Enter the base (b): ";
    cin >> b;
    vector<int> primes = pPrime(b);
    cout << "Pseudo primes to the base " << b << " not exceeding 10,000 are:" << endl;
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;
}
