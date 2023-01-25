// #include<iostream>
// using namespace std;

// int prime_check(int n){
//     // for(int i=2;i<9;i++)
//     if(n == 1){
//         return 1;
//     }
//                                                     //NOTE:   5 ka table not sorted.......25...is nont prime
//     if(n%2==0 || n%3==0){
//         return 0;                                   //kisi ek se v divisible hai to wo prime ni hai
//     }
//     else{
//         return 1;                                  //agar ksi se divisible ni hai to wo prime hai
//     }
// }


// int main(){

//     int n;
//     cout<<"Enter any positive integer value of n: ";
//     cin>>n;

//     int ans = prime_check(n);
//     if(ans == 0){
//         cout<<"the number entered is not a prime number";
//     }
//     else{
//         cout<<"the number entered is a prime number";
//     }

//     return 0;
// }




//galat hai upar wala 25 ko prime  bol de raha hai


//neeche wala right hai
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    bool flag=1;
    if(n==1){
        cout<<"prime";
    }
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){

                //matlab ho gaya

                // cout<<"not prime";

                //agar ksi number se divide ho gaya to.....wo prime ni hoga
                flag=0;
                break;
            }
        }
        //or agar ksi se divide ni hua to
        if(flag==0){
            cout<<"not prime";
        }
        else{
            cout<<"prime";
        }
        
    }

    return 0;
}

