#include<iostream>
using namespace std;

    bool checkForIncreasingOrDecreasing(int a,int b){

        bool increasing=true;
        bool decreasing=false;
        if(a<b){
            return increasing;
        }
        else{
            return decreasing;
        }
    }

    int findMaximum(int a[],int n){

        if(checkForIncreasingOrDecreasing){
            for(int i=0;i<n;i++){
                if(a[i+1]<a[i]){
                    return i;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i+1]>a[i]){
                    return i;
                }
            }
        }

    }


int main(){

    int arr[] = {1, 30, 40, 50, 60, 70, 23, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "index is: " << findMaximum(arr, n);

    return 0;
}