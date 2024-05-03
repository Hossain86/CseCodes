#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,r,s;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)cin >> a[i];
    j = n - 2;
    while (a[j] > a[j + 1])j = j - 1;
    k = n - 1;
    while (a[j] > a[k])k = k - 1;
    swap(a[j], a[k]);
    r = n - 1;
    s = j + 1;
    while (r > s){
        swap(a[r], a[s]);
        r--;
        s++;
    }
    for (i = 0; i < n; i++)cout << a[i];
    cout << endl;
    return 0;
}