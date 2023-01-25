#include<iostream>
using namespace std;

int divisible(int n,int p,int q){
    int c1, c2, c3;
    c1 = n/p;           //numbers divisible by 5
    c2 = n/q;           //numbers divisible by 7
    c3 = n/(p*q);       //common number divisible by 5 and 7

    return c1+c2-c3;
}

int main(){
    //pgm to find the numbers divisible by two number in a certain range

    int n,p,q;
    cout<<"Enter the range: ";
    cin>>n;
    cout<<"Enter the numbers to which it should be divisible: ";
    cin>>p>>q;

    cout<<"Total numbers divisible by "<<p<<" and "<<q<<" are: "<<divisible(n,p,q);

return 0;
} 