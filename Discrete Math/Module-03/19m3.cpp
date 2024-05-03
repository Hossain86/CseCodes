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
        int n,m,x;
        cin>>n;
        m=is_prime(n);
        if(m==1)cout<<n<<" is Prime"<<endl;
        else cout<<n<<" is Not Prime"<<endl;

        if(m==1){
          x=is_prime(n+2);
          if(x==1) cout<<"n and n+2 are twins "<<endl;
          else cout<<"n and n+2 aren't twin prime"<<endl;
        }
    }
}