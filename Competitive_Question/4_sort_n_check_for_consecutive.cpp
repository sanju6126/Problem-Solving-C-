#include<iostream>
using namespace std;

int main(){

    int n; int flag; int c=0;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<"Enter the elements into the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

//     for(int i=1;i<n;i++){
//         int c = a[i-1];
//         if(c+1 == a[i]){
//             flag = 1;
//             continue;
//         }
//         else{
//             flag = 0;
//             break;
//         }
        
//     }

//     if(flag == 1){
//         cout<< "1";
//     }
//     else{
//         cout<<"0" ;
//     }

//     return 0;
// }


// ALTERNATIVE way...
    c = a[0];
    for(int i=1;i<n;i++){
        if(a[i] != c+1){
            return 0;
        }

        c++;
    }

    return 1;
}