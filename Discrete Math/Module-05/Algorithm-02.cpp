//bitString
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int i;
    cin>>s;
    int l=s.length();
    for(i=l-1;i>=0;i--){
        if(s[i]=='1'){
            s[i]='0';
        }
        else{
            s[i]='1';
            break;
        }
    }
    for(int i=0;i<l;i++){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}