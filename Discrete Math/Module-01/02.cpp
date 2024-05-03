#include <iostream>
using namespace std;

int main() {
    int p, q, r;
    cout << "Truth Table" << endl;
    cout << "p | q | r | !(p && q && r)|(p v q v r) " << endl;

    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            for (r = 0; r <= 1; r++) {
                int pAndQ = p && q;
                int eq1 = pAndQ && r; 
                int eq2= p|| q||r;
                cout << p << " | " << q << " | " << r <<
                 " | " << eq1 <<" | " << eq2 <<endl;
            }
        }
    }

    return 0;
}
