#include<iostream>
using namespace std;

int main(){

        int arr[]={0,0,0,1,1,4,4,4,4,7,8,9,9};      //this method will work only if Array is Sorted 
        int n = sizeof(arr)/sizeof(arr[0]);

        int old = arr[0];
        cout<<arr[0]<<" "; 
        
        int count = 1;
        for(int i=1;i<n;i++){
            if(old != arr[i]){
                old = arr[i];
                cout<<old<<" ";       //or cout<<arr[i];
                count++;
            }
        }

        cout<<endl<<count;


    return 0;
}





// // Using STL....

// #include<iostream>
// #include<set>
// using namespace std;

// int main(){

//     int arr[]={0,0,0,1,1,4,4,4,4,9,9,7,8};          //this method will work for all types of array
//     int n = sizeof(arr)/sizeof(arr[0]);

//     set<int> s; int count=0;


//     for(int i=0;i<n;i++){
//         if(!s.count(arr[i])){
//             s.insert(arr[i]);
//             count++; 
//         }
//     }


//     for(auto i:s){
//         cout<<i<<" ";
//     }

//     cout<<endl<<count;


//     return 0;
// }