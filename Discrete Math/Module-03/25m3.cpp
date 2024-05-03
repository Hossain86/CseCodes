//write a cpp code given a positive integer, find the cantor exparrion of this integer
#include <bits/stdc++.h>
using namespace std;
void cantorExpansion(int x) {
    int n = 1, f = 1;
    while ((n + 1) * f <= x) {
        n++;
        f *= n;
    }
    int y = x;
    vector<int> arr(n + 1, 0);
    while (n > 0) {
        arr[n] = y / f;
        y -= arr[n] * f;
        f /= n;
        n--;
    }
    cout << x << " = ";
    for (int i = 1; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) {
            cout << " * " << i << "! + ";
        } else {
            cout << " * " << i << "!";
        }
    }
}
int main() {
    int x;
    cout << "Enter a integer: ";
    cin >> x;
    cantorExpansion(x);
}
