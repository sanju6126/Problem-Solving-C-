#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int sum=0;  
    int x = num;   

    if(num < 0){
        num = -1*num;
    }

    do{ 
        
        while(num>0){
            int rem = num%10;
            sum = sum+rem;
            num=num/10;
        }

        num = sum;
        sum = 0;
    }while(num > 10);

    if(x < 0){
        cout<<(-1*num);
    }
    else{
        cout<<num;
    }
    
    return 0;
}