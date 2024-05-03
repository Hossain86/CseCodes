/*Given integers n and b, each greater than 1, find the base b ex of this 
integer.
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    vector<int> ex;
    int q = n;
    int k = 0;
    while (q != 0) {
        int ak = q % b;
        q = q / b;
        ex.push_back(ak);
        k++;
    }
    for (int i = ex.size() - 1; i >= 0; i--) {
        cout << ex[i];
    }
    cout << endl;
    
    return 0;
}

