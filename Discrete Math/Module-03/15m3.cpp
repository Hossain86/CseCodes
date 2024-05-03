#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
bool is_mersenne_prime(int n) {
    if (!is_prime(n)) return false;
    int p = 0;
    while (pow(2, p) - 1 < n) {
        p++;
    }
    return (pow(2, p) - 1 == n);
}
int main() {
  int t;
  cin>>t;
  while(t--){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (is_mersenne_prime(num)) {
        cout << num << " is Mersenne prime." << endl;
    } else {
        cout << num << " is not a Mersenne prime." << endl;
    }
  }
    
    return 0;
}
