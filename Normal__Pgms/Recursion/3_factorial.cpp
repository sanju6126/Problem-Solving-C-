#include<iostream>
using namespace std;

int fact(int n){

    if(n==0){
        return 1;
    }

    return (n*fact(n-1));
}

int main(){

    int n;
    cout<<"enter the value of n for which u want to find the factorial: ";
    cin>>n;
    cout<<"factorial is = "<<fact(n);

    return 0;
}