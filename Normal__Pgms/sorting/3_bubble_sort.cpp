#include<iostream>
using namespace std;

int main(){
                            //j ko j+1 se compare karte raho to greatest element bubble ki tarah last kon pakad leta hai
    int temp;

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements into the array: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){

            if(arr[j] > arr[j+1]){

                temp = arr[j];                           //swaping the numbers after comparing
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else{
                
                arr[j] = arr[j];
            }
        }
    }

    cout<<"Sorted Array is: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }


    return 0;
}