#include<iostream>
#include<climits>

using namespace std;

int main(){

    int mx = INT_MIN;

    int n,pos=0,i=0;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<"Enter the elements into the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    // while(a[i] !> a[i+1] && [i-1]){

    while(i!=n){
        if(a[i] > a[i+1] && a[i-1]){
            mx = max(mx,a[i]);
            pos = i;
        }

        i++;

    }      
    
    cout<<"peek number is found at pos: "<<pos;                                     //2 3 5 2 4 6 2

    return 0;
}