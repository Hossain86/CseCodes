//Given integers n and b, each greater than 1, find the base b expansion of this 
//integer

#include <iostream>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    int ans = 1;
    while (n > 0) {
        if (n % b == 0) {
            ans *= b;
            n /= b;
        } else {
            ans *= n;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}