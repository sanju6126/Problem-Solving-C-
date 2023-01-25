#include<iostream>
using namespace std;
                                        //in this u will be given a key and u have to search that key in the given array
                                       //searching process is called LINEAR SEARCH because in this u will  be traversing 
                                      // in the array and ONE BY ONE u will be checking whether the VALUE is equal to the KEY 
int main(){
    int arr[] = {5,8,6,7,2,9};
    int i,k,n=6;
    int found,flag;

    cout<<"enter the number u want to search: ";
    cin>>k;

    for(i=0;i<n;i++){
        if(arr[i] == k){
            found = i+1;
            flag = 1;
            break;
        }
        else{
            flag = 0;
            continue;
        }

    }

    if(flag == 1){
        cout<<"number found at positon: "<<found;
    }
    else
        cout<<"Number not found";

    return 0;
}