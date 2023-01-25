#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    int arr[]={1,2,3,4,5};
    int n=5;
 
    for(i=0;i<n;i++){

        for(j=i;j<n;j++){  

            for(k=i;k<=j;k++){
               
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }

        cout<<endl;
    }

    //Alternative of printing the sub array..

    // int brr[n];
    // for(int i=0;i<n;i++){
        
    //     for(int b=0;b<n;b++){              //this loop is for making the elements of brr array 0;
    //         brr[b]=0;
    //     }
    //     for(int j=i;j<n;j++){
    //         brr[j]=arr[j];
            

    //         for(k=i;k<=j;k++){           //this loop is for printing the brr array;
    //             cout<<brr[k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     cout<<endl;
    // }

    return 0;
}