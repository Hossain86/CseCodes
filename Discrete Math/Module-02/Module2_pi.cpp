#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=1000000000;
    double pi = 0; // Initialize pi to zero
    
    for(int i=0; i<n; i++){
        pi += ((double)1/((double)((4*i)+1)*((4*i)+3)));
    }
    pi =pi* 8;
    cout << setprecision(250) << pi << endl;
}
//3.14159264457621567601108836243