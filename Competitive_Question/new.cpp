// //  int a[] = {7, 11, 14, 19};     a[i] - a[j] == 1{continue;}  if(a[i] - a[j] > 1 && a[i]-a[j]-1 >= count){a[i] + count and return ans} else i++,j++;

// #include<iostream>
// #include<math.h>
// using namespace std;

// // bool prime(int n){
// //     for(int i=2;i<=sqrt(n);i++){
// //         if(n%i==0){
// //             return false;
// //         }
// //     }
// //     return true;
// // }


// int main(){

//     int n;
//     cin>>n;

//     bool flag=true;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             flag = false;
            
//             break;
//         }
//         else{

//             continue;
            

//         }
//     }

//     if(flag==true){
//         cout<<"prime";
//     }
//     else{
//         cout<<"not a prime";
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int k=1; int m=n*n+1;
    for(int i=0;i<n;i++){


        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<"__";
                continue;
            }
            else{
                cout<<k<<"*"; 
                k++;
            }
            
        }
        
        // cout<<endl;

        // 10 11 12    4 5 6      1                       7 8 9      9 8 7
        //  8  9       2 3        2 3                     5 6        6 5 
        //  7          1          4 5 6                   4          4

        for(int l=)



    }

    return 0;
}