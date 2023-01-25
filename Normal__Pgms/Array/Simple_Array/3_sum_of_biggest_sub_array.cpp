#include<iostream>
using namespace std;
int main(){

    int i,j,k;
    int sum = 0;
    // int arr[]={1,2,3,4,5};
    // int n=5;

    int mx=-199999;

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements into the array: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
 
    for(i=0;i<n;i++){

        for(j=i;j<n;j++){  

            for(k=i;k<=j;k++){
               
                cout<<arr[k]<<" ";
                sum = sum + arr[k];
            }
            cout<<"---> sum = "<<sum;
            cout<<endl;
            mx = max(mx,sum);

            sum = 0;        //jab jab new line hoga tab tab sum ka value fir se zero ho jayga kyu ki har bar sub array alag hoga or uska sum change ho jayga
        }

        cout<<endl;
    }

    cout<<"sum of biggest sub array is = "<<mx;

    return 0;
}

// ek ary me store karwa denge or usko tav change karenge agar....us array ka sum agar naya wala aray ka sum sezada hoag tabhi





// ***************************************************************************************************************************************************************





// if u want to print just the sum of the sub array not the sub array..1 2 3 4 5

// for(int i=0;i<n;i++){
//     sum = 0
//     for(int j=i;j<n;j++){
//         sum = sum + arr[j];
//         cout<<sum<<endl;
//     }
// }




// ***************************************************************************************************************************************************************





// //cumulative sum approach ----------->O(n^2)

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){

//     int mx = INT_MIN;

//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the elements into the array: ";
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }

//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum = 0;
//         for(int j=i;j<n;j++){
//             sum = sum + arr[j];
//             // cout<<sum<<endl;
//         }
//         mx = max(sum,mx);

//     }

//     cout<<"sum of maximum sub array is: "<<mx;

//     return 0;
// }



// *****************************************************************************************************************************************************************


//kadane's algorithm---------> O(n);


// #include<iostream>                            //go on adding the elements of the array,if any point u found that the sum is getting negative then make it 
// #include<climits>
// using namespace std;                          //zero(at that time and continue) also keep an mx variable where u can keep track of the largest value 
// int main(){                                   //u r getting once the addition is done at each step.....once the process gets finished u will get the output

//     int mx = INT_MIN;

//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;

//     int a[n];
//     cout<<"Enter the elements into the array: ";
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//     int cur_sum=0;
//     for(int i=0;i<n;i++){
//         cur_sum = cur_sum + a[i];
//         if(cur_sum<0){              //if we come to play when the array will be having Negative Values
//             cur_sum = 0;
//         }
//         if(cur_sum % 2 == 0){
//         mx = max(cur_sum,mx);
//         }

//     } 

//     cout<<"sum of maximum sub array is: "<<mx;

//     return 0;
// }