#include<iostream>
using namespace std;

int main(){

    int n;
    int r;
    int d=0;
    int i;
    int r[32];

    cout<<"enter any number: ";
    cin>>n;

    while(n>0){
        r[i] = n%2;
        
        n = n/2;
        i++;

    }

    cout<<d;


    return 0;
}