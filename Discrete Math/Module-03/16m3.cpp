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
    n=pow(n,2)-n+41;
    int a=is_prime(n);
    if(a==1)cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;
  }
}