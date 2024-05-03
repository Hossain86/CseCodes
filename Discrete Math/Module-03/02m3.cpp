#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n],i;
  for(i=0;i<n;i++) cin>>a[i];
  ofstream outFile("file2.txt");
  if(outFile.is_open()){
    for(i=0;i<n;i++){
      outFile<<a[i]<<" ";
    } 
    outFile.close();
  }else{
    cout<<"Unable to open file"<<endl;
  }
}
// int n;
    // cin>>n;
    // int a[n],i;
    // for(i=0;i<n;i++)cin>>a[i];
    // ofstream outFile("largest_int.txt");
    // if(outFile.is_open()){
    //     for(i=0;i<n;i++) outFile<<a[i]<<" ";
    //     outFile.close();
    //     cout<<"Array stored in file"<<endl;
    // }else{
    //     cout<<"Unable to open file"<<endl;
    // }