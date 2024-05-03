#include <bits/stdc++.h>
using namespace std;
void solve(string a, string b, int res[]) {
    int n= a.length();
    for (int i= 0;i < n;++i) {
        res[i]=(a[i] -'0') & (b[i] -'0');//bitwise aND
    }
    for (int i= 0;i < n;++i) {
        res[i + n]=(a[i] -'0')|(b[i]-'0');//bitwise OR
    }
    for (int i= 0;i < n;++i) {
        res[i+2* n]=(a[i] -'0')^(b[i] -'0');//bitwise XOR
    }
}
int main() {
    string a= "1101";
    string b= "1010";
    int n= a.length();
    int res[3 * n];
    solve(a, b, res);
    cout << "bitwise aND: ";
    for (int i= 0;i < n;++i) {
        cout << res[i];
    }
    cout<<endl;
    cout << "bitwise OR : ";
    for (int i= n;i < 2 * n;++i) {
        cout << res[i];
    }
    cout<<endl;
    cout << "bitwise XOR: ";
    for (int i= 2 * n;i < 3 * n;++i) {
        cout << res[i];
    }
    cout<<endl;
    return 0;
}
