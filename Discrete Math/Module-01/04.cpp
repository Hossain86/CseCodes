#include <iostream>
using namespace std;

int main() {
    int p, q, r;
    cout << "Truth Table" << endl;
    cout << "p | q | r | !(p && q) && r | (!p) || (q && r)" << endl;

    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            for (r = 0; r <= 1; r++) {
                int notP = !p;
                int pAndQ = p && q;
                int eq1 = !(pAndQ) && r;  // ⌐(p∧q)∧r
                int eq2 = (!p) || (q && r);  // ⌐p∨q∧r

                cout << p << " | " << q << " | " << r << " | " << eq1 << " | " << eq2 << endl;
            }
        }
    }
    // int a,b,c;
    // cout<<"a | b | c | !(a&&b)&&c | (!a)|| (b&&c) |"<<endl;
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         for(int k=0;k<2;k++){
    //             int aAndb=!(i&&j);
    //             int nota=!i;
    //             int bandc=j&&k;
    //             int eq1=(!aAndb)&&k;
    //             int eq2=nota || bandc;
    //             cout<<i<<" | "<<j<<" | "<<k<<" |        "<<eq1<<" |         "<<eq2<<endl;
    //         }
    //     }
    // }

    return 0;
}
