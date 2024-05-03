/*[Modular Exponentiation] Given the positive integers a, b, and m with m> 1, 
find a^b mod m.*/

#include <bits/stdc++.h>
using namespace std;
int power(long long x, int y, int p) 
{ 
    int res = 1; 
    x = x % p; 
    if (x == 0) return 0;
    while (y > 0) 
    { 
           if (y & 1) 
            res = (res*x) % p;
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
} 
int main() 
{ 
    int x = 3; 
    int y = 103; 
    int p = 7; 
    cout<<power(x, y, p); 
    return 0; 
} 
 