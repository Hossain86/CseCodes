#include<bits/stdc++.h>
using namespace std;

int linear_search(int a[],int n,int x){
  int num_of_comparison=0;
    for(int i=0;i<n;i++){
      num_of_comparison++;
        if(a[i]==x){
            //cout<<"Position :"<<i+1<<endl;
            break;  
        }
    }
    return num_of_comparison;
}

int binary_search(int a[],int n,int x){
  int num_of_comparison=0;
  int left,mid,right;
  left=0;
  right=n-1;
  while(left<=right){
    num_of_comparison++;
    mid=(left+right)/2;
    if(a[mid]==x)return num_of_comparison;
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
  ofstream outFile("file9.txt");
  if(outFile.is_open()){
    for(i=0;i<n;i++){
      outFile<<a[i]<<" ";
    } 
    outFile.close();
  }else{
    cout<<"Unable to open file"<<endl;
  }
  sort(a,a+n);

    ifstream inputFile("file9.txt");
    if (inputFile.is_open()) {
        for (i = 0; i < n; i++)
            inputFile >> a[i];
        inputFile.close();
    } 
   int Linear_position= linear_search(a,n,x);
   int binary_position=binary_search(a,n,x);
   cout<<"Number of comparison in Linear search: "<<Linear_position<<endl;
   cout<<"Number of comparison in Binary search: "<<binary_position<<endl;
   
}