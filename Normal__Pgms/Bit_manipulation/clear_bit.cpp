#include<iostream>
using namespace std;

int clear_bit(int n,int p){             //clear bit means making it zero by replacing 1 at certain position
    int x=1;                      
    x = ~(x<<p);                        //taking complimnet
    int ans = n&x;           

    return ans;

    // return ((n & (1<<p))!=0);

    // return 1;
    

}


int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    
    int p;
    cout<<"Enter the position where u want to clear the bit: ";
    cin>>p;
    // get_bit(n,p);

    cout<<"Required Bit is: "<<clear_bit(n,p);

    return 0;
}