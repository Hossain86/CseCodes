#include <bits/stdc++.h>
using namespace std;
void nextCom_b(int com_b[], int n, int r) {
    int i;
    i=r-1;
    while (i >= 0 && com_b[i] == n - r + i + 1) {
      i--;
    }
    if (i >= 0) {
      com_b[i]++;
      for (int j = i + 1; j < r; j++) {
          com_b[j] = com_b[i] + j - i;
      }
    }
}
int main() {
    int n=5; // Size of the set
    int r=3; // Size of each com_b
    int com_b[] = {1, 2, 3};// Initial com_b
    // Generate the next com_b
    nextCom_b(com_b, n, r);
    // Output the next com_b
    cout<<"Next combination: ";
    for (int i=0;i<r;i++){
      cout<<com_b[i]<<" ";
    }
    cout<<endl;
}
