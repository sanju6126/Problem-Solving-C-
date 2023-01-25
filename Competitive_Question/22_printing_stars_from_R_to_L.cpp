// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     int k=5;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=n;j++){
//             if(j>=k){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//         k--;
//     }

//     return 0;
// }


// // if we print  "k" we will get 5 44 333...
// //if we will print "j" we will get 5 45 345 2345...




#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    // int n_copy=0;

    int k=1;
    for(int i=0;i<n;i++){
        // n_copy = n;
        
        for(int j=n;j>0;j--){
            if(j==k){
                cout<<"*";
            }
            else{
                cout<<j;
            }

        }
        cout<<endl;
        k++;
    }
    return 0;
}
