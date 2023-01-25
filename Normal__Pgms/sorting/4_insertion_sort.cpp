// #include<iostream>
// using namespace std;

// int main(){

//      int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the elements into the array: ";
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }

//     for(int i=1;i<n;i++){

//         int j = i-1;                    
//         arr[j+1] = arr[i];
                                                                      //12 45 23 9 8 assume i 9 me hai to isme peeche se comparison kar raha hai..or tab tak jaa rha hai jab tak 0tak ni pahuch jata hai....or agar kahi beech me mil gaya to usko swap kar de raha hai
//         while((arr[j] > arr[j+1]) && j>=0){                        
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;

//             j--;
//         }
//     }

//     cout<<"Sorted Array is: ";
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }


//     return 0;
// }






// best method
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
    int temp;
    for(int i=1;i<n;i++){
        
        for(int j=0;j<i;j++){
            if(a[i] > a[j]){
                continue;
            }
            else{
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    //                                           12 45 23 9 8

    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}