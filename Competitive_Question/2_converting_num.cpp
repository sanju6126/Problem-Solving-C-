#include<iostream>
using namespace std;
int main(){
    int n,d,r=0;
    cout<<"Enter any number: ";
    cin>>n;

    while(n!=0){
        d = n%10;
        if(d%2 == 0){
            d = d+1;
        }
        else{
            d = d-1;
        }

        r = (r*10)+d;
        n = n/10;
    }

    int n1 = r;
    int d1,r2=0;
    while(n1!=0){
         d1 = n1%10;
         r2 = (r2*10)+d1;
         n1 = n1/10;
    }

    cout<<"new number after updating is: "<<r2;

    return 0;
}