#include<iostream>
#include<climits>            //for INT_MIN and INT_MAX

using namespace std;

int main(){
    int i,n;
    int max,min;

    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the values into the array: ";                           
        for(i=0;i<n;i++){
            cin>>arr[i];
        }


    max = INT_MIN;
    min = INT_MAX;

    // cout<<max<<" "<<min;

    for(i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];                                     
        }                                                     
                                                               
        if(arr[i] < min){
            min = arr[i];
        }

    }
        cout<<"max = "<<max<<"    "<<"min = "<<min<<endl;

    return 0;
}