#include<iostream>
using namespace std;

int get_bit(int n,int p){
    int x=1;
    x = x<<p;
    int ans = n&x;

    cout<<ans;

    if(ans!=0){
        return 1;
    }
    if(ans==0){
        return 0;
    }

    // return ((n & (1<<p))!=0);

    // return 1;
    

}


int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    
    int p;
    cout<<"Enter the bit u want to get: ";
    cin>>p;
    // get_bit(n,p);

    cout<<"Required Bit is: "<<get_bit(n,p);

    return 0;
}