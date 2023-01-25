#include<iostream>
using namespace std;

int binary_search(int arr[],int key,int n){
    int start = 0;
    int end = n;

    int mid;

    while(start <= end){
        mid = (start+end)/2;
         
        if(key == arr[mid]){

            return mid;
        }
        else{
            if(key > arr[mid]){

                start = mid+1;
                end = end;
            }
            if(key < arr[mid]){

                end = mid-1;
                start = start;
            }
        }
    }

    return -1;
}


int main(){
    

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<endl<<"Enter the elements into the array: ";
        for(int i=0;i<n;i++){

            cin>>arr[i];
        }

    int key;
    cout<<endl<<"Enter the number u want to search: ";
    cin>>key;

    cout<<binary_search(arr,key,n)<<endl;

    
    return 0;
}