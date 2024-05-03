#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int n,int x){
  int left,mid,right;
  left=0;
  right=n-1;
  while(left<=right){
    mid=(left+right)/2;
    if(a[mid]==x)return mid;
    if(a[mid]<x) left=mid+1;
    else right=mid-1;
  }
  return -1;
}
int main(){
  int n,x;
  cin>>n;
  int a[n],i;
  for(i=0;i<n;i++) cin>>a[i];
  cin>>x;
  sort(a,a+n);
  ofstream outFile("file2.txt");
  if(outFile.is_open()){
    for(i=0;i<n;i++){
      outFile<<a[i]<<" ";
    } 
    outFile.close();
  }else{
    cout<<"Unable to open file"<<endl;
  }

    ifstream inputFile("file2.txt");
    if (inputFile.is_open()) {
        for (i = 0; i < n; i++)
            inputFile >> a[i];
        inputFile.close();
    } 
   int position= binary_search(a,n,x);
   cout<<"Elements index position: "<<position<<endl;
   
}