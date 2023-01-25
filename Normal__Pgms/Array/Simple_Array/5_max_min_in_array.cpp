#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<"Enter the elements into the array: ";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

    int mx = -1999;
    int mn = 20000;
    for(int i=0;i<n;i++){

        // mx = max(mx,a[i]);            //this method
        // mn = min(mn,a[i]);

        if(a[i]>mx){                    // OR this method
            mx = a[i];
        }

        if(a[i] < mn){
            mn = a[i];
        }
    }
        
    cout<<"max = "<<mx<<"    "<<"min = "<<mn;


    return 0;
}