/*Given an even integer n, find two prime number 
whether the sum of them is equal to n.
*/
#include<bits/stdc++.h>
using namespace std;
int is_prime(int n){
  if(n<=1) return 0;
    if(n<=3) return 1;
    if(n%2==0) return 0;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
  cin>>n;
  int a,b,x,y;
  a=2;
  b=n-a;
  if(n % 2 != 0 || n <= 2){//if input is odd or less than 2;
    cout << "Invalid input" << endl;
  }
  else{
  while(a<=b){
    x=is_prime(a);
    y=is_prime(b);
    if(x==1 && y==1){
      cout<<"Two Prime Numbers: "<<a<<" "<<b<<endl;
      break;
    }else{
      a++;
      b=n-a;
    }
  }
  if(a>b){
      cout<<"No Pair Found"<<endl;
    }
  }
  }
}
/*
Output:
10
100
Two Prime Numbers: 3 97
26
Two Prime Numbers: 3 23
25
Invalid input
28
Two Prime Numbers: 5 23
30
Two Prime Numbers: 7 23
32
Two Prime Numbers: 3 29
34
Two Prime Numbers: 3 31
36
Two Prime Numbers: 5 31
38
Two Prime Numbers: 7 31
40
Two Prime Numbers: 3 37
*/