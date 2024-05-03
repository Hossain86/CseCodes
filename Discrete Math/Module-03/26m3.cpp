#include<bits/stdc++.h>
using namespace std;
int extendedEuclidean(int a, int b, int &s, int &t) {
    if (a == 0) {
        s = 0;
        t = 1;
        return b;
    }
    int s1, t1;
    int gcd = extendedEuclidean(b % a, a, s1, t1);
    s = t1 - (b / a) * s1;
    t = s1;
    return gcd;
}
int main() {
    int a, b;
    cin >> a >> b;
    int s, t;
    int gcd = extendedEuclidean(a, b, s, t);
    cout<< s << " " << t << endl;
}

