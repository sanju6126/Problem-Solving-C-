#include<iostream>
using namespace std;

void printAllSubsets(char a[],int n) {             //n here is the size of the array
    for(int i=0;i< (1<<n);i++){                   //2 power 3 is represented as (1<<n)  means 1(0001) ko 3 shift karo (0100)  8 hoyga
        for(int j=0;j<n;j++){
            if( i& (1<<j)){
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
}       


int main(){
    char a[]={'a','b','c'};                            //if 3 number ka subset nikalenge to total 8 subsets banega   that is 2^3 (2 power 3)
    printAllSubsets(a,3);
    
return 0;
}