#include<iostream>
#include<climits>
using namespace std;

int main(){

    int mx=INT_MIN;

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<"Enter the elements into the array: ";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    
    int k;
    cout<<"upto which index u want to find the max number: ";
    cin>>k;

    for(int i=0;i<=k;i++){
        if(a[i] > mx){
            mx = a[i];
        }
        cout<<mx<<endl;
    }

    

    return 0;
}