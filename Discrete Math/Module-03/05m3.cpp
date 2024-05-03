#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n){
  int i,j,temp;
  for(i=0;i<n-1;i++){
      for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
            
        }
      }
  }
}
int main(){
  int n,x;
  cin>>n;
  int a[n],i;
  for(i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  ofstream outFile("file5.txt");
  if(outFile.is_open()){
    for(i=0;i<n;i++){
      outFile<<a[i]<<" ";
    } 
    outFile.close();
  }else{
    cout<<"Unable to open file"<<endl;
  }
  bubble_sort(a,n);//sorted array using bubble sort
  cout<<"Soreted Array:";
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    } 
    cout<<endl;
    ifstream inputFile("file5.txt");
    if (inputFile.is_open()) {
        for (i = 0; i < n; i++)
            inputFile >> a[i];
        inputFile.close();
    } 
}
