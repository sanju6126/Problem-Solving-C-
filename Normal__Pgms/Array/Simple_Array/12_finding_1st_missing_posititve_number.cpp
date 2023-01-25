#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the size of the array: ";
    cin>>n;

    int a[n];
    cout<<"enter the elements in the array: ";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

    const int N=50;
    int check[N];
    for(int i=0;i<N;i++){
        check[i] = 0;
    }

    for(int i=0;i<n;i++){
        if(a[i]>=0){               //positive value for positive numbers
            check[a[i]] = 1;
        }
        else {//if(a[i]<0){           //negative value for negative numbers
            check[a[i]] = -1;
        }
        // else{                     //zero for missing numbers
        //     check[a[i]] = 0;      //allready zero kiya hua hai upar
        // }
    }

    for(int i=0;i<N;i++){
        if(check[i] == 0){
            cout<<"first missing number is: "<<i;
            break;
        }
    }



    return 0;
}