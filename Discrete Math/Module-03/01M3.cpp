#include<bits/stdc++.h>
using namespace std;
int main(){
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
    int a[10], i;
    ifstream inputFile("largest_int.txt");
    if (inputFile.is_open()) {
        for (i = 0; i < 10; i++)
            inputFile >> a[i];
        inputFile.close();
        sort(a, a + 10);
        cout << "Max Number: "<<a[9];
        cout << endl;
    } 
    ofstream outputFile("largest_int.txt");
        if (outputFile.is_open()) {
            for (i = 0; i < 10; i++)
                outputFile << a[i] << " ";
            outputFile.close();
            cout << "Sorted array stored in 'largest_int.txt'" << endl;
        }
    }
    

