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
        int n,m;
        cin>>n;
        n=(pow(n,2)+1);
        m=is_prime(n);
        if(m==1)cout<<"Prime"<<endl;
        else cout<<"Not Prime"<<endl;
    }
}
// 5
// 2
// Prime
// 3
// Not Prime
// 4
// Prime
// 5
// Not Prime
// 6
// Prime
