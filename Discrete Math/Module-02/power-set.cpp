#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> set = {1, 2, 3,4};
    cout << "Power Set of {1, 2, 3, 4}:\n";
    int n = set.size();
    int size = pow(2, n);
    for (int i = 0; i < size; i++) {
        cout << "{";
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0) {
                cout << set[j] << " ";
            }
        }
        cout << "}\n";
    }
    return 0;
}
