#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,n,count=1,j;
  cin>>n;
  pair<int,int>time[n];
  for(i=0;i<n;i++){
    cin>>time[i].second>>time[i].first;
  }
  for(i=0,j=0;i<n-1;i++){
    if(time[i+1].second >=time[j].first){
      count++;j++;
    }
    else{
      j+=1;
    }
  }
  cout<<count<<endl;
}