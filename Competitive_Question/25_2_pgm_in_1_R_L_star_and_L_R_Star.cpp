#include<iostream>
using namespace std;
int main(){


    int n;
    cout<<"Enter n: ";
    cin>>n;

    int k=n;
    int k2 = n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){
            if(i==1){
                cout<<j;
            }
            else if(j>k){
                cout<<"*";

            }
            else{
                cout<<j;
            }

        }

        for(int j=n;j>=1;j--){
            if(i==1){
                cout<<j;
            }
            else if(j>k2){
                cout<<"*";
            }
            else{
                cout<<j;
            }
        }
       
        k--;
        k2--;
        cout<<endl;


    }

    return 0;
}


//this program runs on the concept that separate the entire program in two parts:
// 12345 
// 1234* 
// 123** 
// 12*** 
// 1**** and  

// 54321 
// *4321 
// **321...