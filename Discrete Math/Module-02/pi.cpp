#include <bits/stdc++.h>
using namespace std;
    int main() {
    int r[3000 + 1];
    int i, k;
    int b, d;
    int c = 0;
    string result;
    for (i = 0; i < 2000; i++) {
     r[i] = 2000;
    }
    for (k = 2000; k > 0; k -= 14) {
        d = 0;
        i = k;
        for (;;) {
            d += r[i] * 10000;
            b = 2 * i - 1;
            r[i] = d % b;
            d /= b;
            i--;
            if (i == 0) break;
            d *= i;
        }
        result=result+to_string(c+d/10000);
        c = d % 10000;
    }
    for(long long int i=0;i<result.length();i++){
        if(i==1){
            cout<<".";
        }
        cout<<result[i];
    }

    return 0;
    }
