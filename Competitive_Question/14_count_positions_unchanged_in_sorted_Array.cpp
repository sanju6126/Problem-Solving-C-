#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements into the array: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    
    int brr[n];
    for(int i=0;i<n;i++){
            brr[i] = arr[i];
        }


    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int count=0;
    for(int i=0;i<n;i++){
        if(brr[i] == arr[i]){
            count++;
        }
    }

    cout<<"places remain unchanged are: "<<count;


    return 0;
}