#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int temp = n,d,sum=0;                                            //3 7 0
    while(temp >0){
        d = temp%10;
        // r = r*10+d;
        sum = sum + (d*d*d);
        temp = temp/10;
    }

    if(sum == n){
        cout<<"Entered number is a armstrong no."<<endl;
    }
    else{
        cout<<"Entered number is not a armstrong no."<<endl;
    }

    return 0;
}


