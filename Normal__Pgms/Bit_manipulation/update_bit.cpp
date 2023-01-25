#include<iostream>
using namespace std;

int update_bit(int n,int p){
    int x=1;                    //updating bit is, at certain position what u want to do , u want to make it 0 or u want to make it 1
    x = x<<p;
    int ans = n&x;

    cout<<ans;

    
incomplete
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

    cout<<"Required Bit is: "<<update_bit(n,p);

    return 0;
}