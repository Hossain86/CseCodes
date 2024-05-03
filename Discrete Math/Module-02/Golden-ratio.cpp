// #include <bits/stdc++.h>
// using namespace std;
// bool checkGoldenRatio(float a,float b){ 
//     if(a <= b) {
//         float temp = a;
//         a = b;
//         b = temp;
//     }
//     stringstream ratio1;
//     ratio1 << fixed << setprecision(3) << (a / b);
//     stringstream ratio2;
//     ratio2 << fixed <<  setprecision(3) << (a + b) / a;
//     if((ratio1.str() == ratio2.str()) && ratio1.str() == "1.618"){
//         cout << "Yes" << endl;
//         return true;
//     }
//     else{
//         cout << "No" << endl;
//         return false;
//     }
//     }
    
//     int main(){
//     float a = 0.618;
//     float b = 1;
//     checkGoldenRatio(a, b); 
//     return 0;
//     }
#include <bits/stdc++.h>
using namespace std;
int main() {
    double ratio;
    ratio = 1 + sqrt(5);
    ratio/=2;
    cout << fixed << setprecision(49) << ratio << endl;
    return 0;
}
