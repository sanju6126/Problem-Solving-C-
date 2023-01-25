#include<iostream>
using namespace std;

int main(){


     int n;
    cout<<endl<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements into the array: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }


    for(int i=0;i<n;i++){

        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }

    for(int i=0;i<n;i++){

        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }


    return 0;
}