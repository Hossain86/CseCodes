#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
  if (a<b) return gcd(b, a);
  if (a % b == 0) return b;
  return gcd(b, a % b);
}

// Function to find pow(x,y) under given modulo mod
int power(int x, int y, int mod) {
  if (y == 0) return 1;
  int temp = power(x, y / 2, mod) % mod;
  temp = (temp * temp) % mod;
  if (y % 2 == 1) temp = (temp * x) % mod;
  return temp;
}
//Function to find if received number n is a Carmichael number
int carmichaelnumber(int n) {
  for (int b=2;b<n;b++){
  if (gcd(b,n)==1)
  if (power(b,n-1,n)!= 1){
  cout<<"0"<<endl;
  return 0;
  }
  }
  cout<<"1"<<endl;
  return 0;
};
int main(){
  carmichaelnumber(500);
  cout<<endl;
  carmichaelnumber(561);
}
