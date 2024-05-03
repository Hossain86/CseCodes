//Given an integer n, use the greedy algorithm to find the change for n cents 
//using quarters, dimes, nickels, and pennies. 
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cout<<"Enter the amount:";
  cin>>n;
  int count=0;
  while(n!=0){
    if(n>=25){
      count+=(n/25);
      n=n%25;
    }else if(n>=10){
      count+=(n/10);
      n=n%10;
    }else if(n>=5){
      count+=(n/5);
      n=n%5;
    }
    else{
      count+=(n/1);
      n=0;
    }
  }
  
  cout<<"Total number of coins: "<<count<<endl;
  }
  
}