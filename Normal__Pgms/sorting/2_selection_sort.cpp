#include<iostream>
#include<climits>
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



// ************JO VIDEO ME KARA GAYA METHOD************

//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){

//             if(arr[i] > arr[j]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     cout<<"Sorted Array is: ";
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }

//     return 0;
// }



//****************JO VIDEO ME BOLA GAYA METHOD***************

// METHOD -------EVERYTIME find the minimum value from the unsorted array and swap it after the sorted array;

    int mn = INT_MAX;                                 
    int pos = 0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            // mn = min(mn,arr[j]);

            if(mn > arr[j]){
                mn = arr[j];
                pos = j;
            }
            
        }

        int temp = arr[i];
            arr[i] = mn;
            arr[pos] = temp;

            mn = INT_MAX;
    }

    cout<<"sorted array is: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

    return 0;

}