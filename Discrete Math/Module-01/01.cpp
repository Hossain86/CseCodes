#include <bits/stdc++.h>
using namespace std;
int main() {
   cout << "Truth Table"<<endl;;
   cout << "p | q | !p | p && q | p || q | p ^ q | p -> q | p <-> q"<<endl;
   for (int p = 0; p <= 1; p++) {
       for (int q = 0; q <= 1; q++) {
           int notP = !p;
           int pAndQ = p && q;
           int pOrQ = p || q;
           int pXorQ = p ^ q; 
           int pImpliesQ = !p || q; 
           int pBiconditionalQ = (p && q) || (!p && !q);  //Biconditional
           cout << p << " | " << q << " | " << notP << " | " << pAndQ << " | " << pOrQ << " | "
                << pXorQ << " | " << pImpliesQ << " | " << pBiconditionalQ << "\n";
       }
   }
   return 0;
}
