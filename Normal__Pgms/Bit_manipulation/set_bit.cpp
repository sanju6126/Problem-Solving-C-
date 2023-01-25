#include<iostream>
using namespace std;

int set_bit(int n,int p){            //setting bit is known as making a value at certain position as 1;
    int x=1;
    x = x<<p;
    int ans = n|x;

    return ans;

    

    // return (n | (1<<p));

    
    

}


int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    
    int p;
    cout<<"Enter the position where u want to set: ";
    cin>>p;
   

    cout<<"Required number is: "<<set_bit(n,p);

    return 0;
}