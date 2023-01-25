

//<<<<<<<<<=====================NEW METHOD =====================>>>>>>>>>

//NEW METHOD.....SORT KAR DO PURA ARRAY KO....
//AND THEN HAR BAAR ARRAY KA "MID" NIKALO  AGAR CHOTA RAHA SUM TO MID KA PHIR SE MID NIKALO 
//JAB TAK SUM BADA NA HO GAYE MID ELEMENT SE.....
//OR JAB MID ELEMENT SE BADA HO JAYGA TO WAHA SE SUB-ARRAY KA INDEX FIND KARNE LAGENGE----
//PICHLE WALE MID TAK(PICHLE WALE MID KO STORE KAR KE RAKHNA HOGA)

//<<<<<<<<<=====================NEW METHOD =====================>>>>>>>>>


//**************************************************
//**************************************************



//SLIDING WINDOW METHOD
//O(N) METHOD       ===>  O(N2) DOWNWARDS(NEECHE SARE KA SAME APPROACH H....2ND RECOMMENDED)


#include<iostream>
using namespace std;
void subArraySum(int a[],int n,int sum){
    int current_sum = a[0],start = 0;

    for(int i=1;i<=n;i++){
        current_sum += a[i];

        while(current_sum > sum && start < i){              //i jo hai peeche wala variable ka track rak rha hai jiko hatana hai jab sum bada ho jayga
            current_sum -= a[start];
            start++;
        }

        if(current_sum == sum){
            cout<<start<<" "<<i;
            return;
        }
    }

    //agar ni mila upar tak and for loop khatam ho gaya to humko wo lelemnt ni mila
    cout<<"Sub_array not found";
    return;
}

int main(){

    int arr[] = { 3, 1, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum =0;
    cin>>sum;

    subArraySum(arr, n, sum);

    return 0;
}



//**************************************************
//**************************************************

//CAN ALSO TRY THIS .....EASY TO UNDERSTAND

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the size of the array: ";
//     cin>>n;

//     int a[n];
//     cout<<"enter the elements in the array: ";
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//     int s;
//     cout<<"enter the sum u want to find: ";
//     cin>>s;

//     int start,end,sum=0;
//     start = 0;
//     end = 0;


//     while(end<n && (sum + a[end]) <= s){          
//         sum = sum + a[end];                            
//         end++;
//     }

//     if(sum == s){
//         cout<<start<<" "<<end - 1;
//         return 0;
//     }


// // if my sum > s....then
//     while(end<n){

//         sum = sum + a[end];
//         while(sum > s){
//             sum = sum - a[start];
//             start++;
//         }

//         if(sum == s){
//             start = start++;
//             end = end++;
//             break;
//         }

//         end++;
//     }

//     cout<<start<<" "<<end<<endl;


//     return 0;
// }


//**************************************************
//**************************************************






//O(N2)METHODS
//**************************************************
//**************************************************

// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

//  vector<int> subarraySum(int arr[], int n, long long s)
//     {
//         
//         vector<int>brr;
//         int start_index,end_index,sum=0;
//         vector<int> brr;
//         for(int i=0;i<n-1;i++){
//             start_index = i;
//             sum=0;
//             for(int j=i;j<n;j++){        //ISME BAS YE HO RAH HAI KI AGAR BADA HAI PHIR V AAGE CHECK KIYE JAA RHA HAI
//                 sum += arr[j];           //NEECHE WALA PROGRAM ME AGAR BADA HO RHA HAI TO BREAK KAR JA RHA HAI
//                 end_index = j;
                
//                 if(sum == s){
//        
//                     // cout<<start_index+1<<" "<<end_index+1;
//                     brr.push_back(start_index+1);
//                     brr.push_back(end_index+1);
                    
//                    return brr;
//                     
//                 }
                
//             }
            
//             // if(sum==s){
//             //     break;
//             // }
            
//         }
//     }

// int main(){

//     int n;
//     cin>>n;
//     int a[n];

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int s;
//     cin>>s;

//     vector<int> res;
//     res = subarraySum(a,n,s);

//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }

//     return 0;
// }




//22222222222222222222222222222222222222222222222222222222222222222//////////////
//// O(n2) Time complexity ========>>>>>>PREFFERED METHOD FOR O(N2)

//**********************************************************
//**********************************************************

// #include<iostream>
// using namespace std;

// void subArraySum(int a[],int n,int sum){
//     int current_sum;

//     for(int i=0;i<n-1;i++){

//         current_sum = a[i];
//         if(current_sum > sum){        //MAAN K CHALO PEHLA HI TERM SUM SE BADA HO GYA...TO USI TIME I KO CHNGE KR DENGE
//             continue;
//         }

//         for(int j=i+1;i<n;i++){       
//             current_sum += a[j];

//             if(current_sum == sum){
//                 cout<<i<<" "<<j;
//                 return;
//             }

//             if(current_sum > sum){
//                 break;
//             }
//         }
//     }
//     cout<<"no Sub_aray found";
//     return;
// }

// int main(){

//     int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int sum =0;
//     cin>>sum;

//     subArraySum(arr, n, sum);
    
    

//     return 0;
// }

//**************************************************
//**************************************************




// //brute force approach....o(n^2)


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the size of the array: ";
//     cin>>n;

//     int a[n];
//     cout<<"enter the elements in the array: ";
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//     int s;
//     cout<<"enter the sum u want to find: ";
//     cin>>s;

//     int sum=0,start_index,end_index;
//     for(int i=0;i<n;i++){           //yaha iske neeche
//         start_index = i; 
//         sum=0;
//         for(int j=i;j<n;j++){
//             sum = sum + a[j];
//                                    //yaha
//             if(sum == s || sum > s ){
//                 end_index = j;
//                 break;
//             }
//         }
//         if(sum == s){
//             break;
//         }
//         else{
//             continue;
//         }
//     }


//     if(sum == s){
//         cout<<"starting_index is: "<<start_index<<" and ending_index is: "<<end_index<<endl;
//     }
//     else{
//         cout<<"no array found with sum = "<<s;
//     }


//     return 0;
// }

