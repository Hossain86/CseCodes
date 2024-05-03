//chinese remainder theorem
#include<bits/stdc++.h>
using namespace std;
int findx(int num[],int rem[], int k){
  int x=1;
  while(1){
    int j;
    for(j=0;j<k;j++){
      if(x%num[j]!=rem[j]) break;
    }
    if(j==k) return x;
    x++;
  }
  return x;
}
int main(){
  int num[] = {5,7}; 
  int rem[] = {1,3}; 
  int k = sizeof(num) / sizeof(num[0]);
  cout << "x is " << findx(num, rem, k); 
  return 0; 
}