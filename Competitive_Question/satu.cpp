// #include<iostream>
// using namespace std;

// int main(){
//     int n;int k=0;
//     cout<<"Enter the size of array: ";
//     cin>>n;

//     int a[n],b[n];
//     cout<<"enter the elements into the array: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     for(int i=0;i<n;i++){
//         b[i] = 0;
//     }

//     for(int i=0;i<n;i++){
//         if(a[i] > 0){
//             int new_number = a[i]-1;
//             if(new_number >=1){
//                 b[k] = new_number;
//                 k++;
//             }
//         }
//         else{
//             continue;
//         }
//     }




//     for(int i=0;i<k;i++){                            //displaying the new array
//         cout<<b[i]<<" ";
//     }

//     int count=0;
//     int c[10];
//     for(int i=0;i<n;i++){
//         c[i] = -1;
//     }


//     //counting the numbers present(without duplication)
//     for(int i=0;i<n;i++){
//         int index_c = b[i];
//         if(c[index_c] == -1){
//             c[index_c] = b[i];
//             count++;
//         }
//         else{
//             continue;
//         }
//     }

//     cout<<endl<<count;

//     return 0;
// }



#include<iostream>
using namespace std;

int solve(int arr[],int n,int k){

    int start=0,end=n-1;
    int mid;
        
        
    while(start<=end){
        mid = (start + end)/2;
        
        if(arr[mid] == k){
            return mid;
        }
        else if(k < arr[mid]){
            end=mid-1;
        }
        else{
            start = mid+1;
        }
    }
    
    return -1;
}

int main(){

    int a[] = {11 ,22 ,33, 44, 55} ;
    int n = sizeof(a)/sizeof(a[0]);

    int k;
    cin>>k;

    cout<<solve(a,n,k);

    return 0;
}
