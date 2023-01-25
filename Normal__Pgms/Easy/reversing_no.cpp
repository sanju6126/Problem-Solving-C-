#include<iostream>
using namespace std;

int main(){
    int n;
    int d = 0;
    int r;

    cout<<"Enter the value of n: ";
    cin>>n;

    while(n!=0){
        r = n % 10;
        d = d * 10 + r;
        n = n/10;
    }

    cout<<d;

    return 0;
}