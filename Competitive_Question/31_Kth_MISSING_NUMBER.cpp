// #include<iostream>
// using namespace std;

// int findMissing(int a[],int n,int k){

//     int difference,count=k;
//     difference = a[0]-1;
//     if(difference >= k ){
//         return k;
//     }
//     count = abs(difference-k);        //suppose if the difference is less than k means, we wanted the 6th missing number and we can find till only 4 from above using Difference.
//                                       //then this will give us count of next remaining missings by traversing array. 
    
//     int i=0,j=1;
//     int ans = 0;
//     while(count!=0 ){
//         ans = 0;
//         difference = a[j]-a[i]-1; 
//         if(difference == 0){
//             i++;j++;
//             continue;
//         }
//         if(difference >= count){
//             ans = a[i] + count;
//             return ans;
//             // count--;
//         }
//         if(difference < count){
//             ans = a[i] + difference;
//             count = count - difference;
//             i++;j++;
//         }
//     }


// }
// int main(){

//     int a[] = {7, 9, 14, 19};
//     int n = sizeof(a)/sizeof(a[0]);

//     int k;
//     cin>>k;

//     cout<<findMissing(a,n,k);

//     return 0;
// }



// #include<iostream>
// using namespace std;

// int findMissing(int a[],int n,int k){
//     int count=k;
//     int difference;
//      int i=0,j=1;
//     int ans = 0;int l=0;
//     while(count!=0 && l!=n){
//         ans = 0;
//         difference = a[j]-a[i]-1; 
//         if(difference == 0){
//             i++;j++;
//             continue;
//         }
//         if(difference >= count){
//             ans = a[i] + count;
//             return ans;
//             // count--;
//         }
//         if(difference < count){
//             ans = a[i] + difference;
//             count = count - difference;
//             i++;j++;
//         }
//     }

// }

// int main(){

//     // int a[] = {7, 9, 14, 19};
//     int a[] = {2, 3, 4, 5, 7};
//     int n = sizeof(a)/sizeof(a[0]);

//     int k;
//     cin>>k;

//     cout<<findMissing(a,n,k);

//     return 0;
// }


#include<iostream>
using namespace std;

int findMissing(int a[],int n,int k){
    int difference;int ans;
    for(int i=0;i<n-1;i++){
        difference = a[i+1]-a[i]-1;

        if(difference == 0){
            continue;
        }
        if(difference >= k){
            ans = a[i] + k;

            if(ans > a[n-1]){
                return -1;
            }
            return ans;
        }   
        if(difference < k){
            ans = a[i] + difference;
            k = k - difference;
            
        }


    }
}

int main(){

    int a[] = {2, 4, 6, 9,14};
    int n = sizeof(a)/sizeof(a[0]);

    int k;
    cin>>k;

    cout<<findMissing(a,n,k);

    return 0;   
}