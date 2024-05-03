#include<bits/stdc++.h>
using namespace std;
void linear_search(int a[],int x){
    for(int i=0;i<10;i++){
        if(a[i]==x){
            cout<<"Position :"<<i+1<<endl;
            break;  
        }
    }
}
int main(){
    int a[10],i;
    ifstream inputFile("largest_int.txt");
    if (inputFile.is_open()) {
        for (i = 0; i < 10; i++)
            inputFile >> a[i];
        inputFile.close();
    } 
    linear_search(a,60);
   
}