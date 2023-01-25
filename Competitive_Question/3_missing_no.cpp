// #include<iostream>
// using namespace std;

// int main(){

//     int missing_no;

//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;

//     int a[n];
//     cout<<"Enter elements into the array with one missing number among the consecutive numbers: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }                                     1 2 3 5 6                     4 5 3 7 8

//     for(int i=1;i<n;i++){
//         if(a[i]-a[i-1] == 1){
//             continue;
//         }
//         else{
//             missing_no = a[i]-1;
//             break;
//         }
//     }

//     cout<<"missing number is: "<<missing_no;

//     return 0;

// }





// *******************ALTERNATIVE FOR ANY NUMBER*******************   originally it will work for any value

// find the max ...find the min........now min se max tak ka sum le lo..........or phir given array ka sum le lo 



    #include<iostream>
    #include<climits>
    using namespace std;


    int main(){

        int n;
        cout<<"Enter the size of the array: ";
        cin>>n;

        int a[n];
        cout<<"Enter elements into the array with one missing number among the consecutive numbers: ";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }             


        int sum=0;
        int ar_sum=0;
        int mx=INT_MIN;
        int mn=INT_MAX;
        int ans=0;
        int i;

        for(i=0;i<n;i++){
            mx = max(mx,a[i]);
            mn = min(mn,a[i]);
        }

        // cout<<mn<<" "<<mx<<" ";

        for(i=mn;i<=mx;i++){
            sum = sum + i;
        }

        // cout<<sum<<" ";

        for(i=0;i<n;i++){
            ar_sum = ar_sum + a[i];
        }

        // cout<<ar_sum<<" ";

        cout<<"missing number is: "<<(sum - ar_sum);


        return 0;
    }




// ********************GOOGLED METHOD*****************
//won't work for some values...if number of values in the array is 5 it will take the sum of first 5 values of the counting numbers...that is where it goes wrong

// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// // Function to get the missing number
// int getMissingNo(int a[], int n)
// {

// 	int total = (n + 1) * (n + 2) / 2;                           //n*(n+1)/2
// 	for (int i = 0; i < n; i++)
// 		total -= a[i];
// 	return total;
// }

// // Driver Code
// int main()
// {
// 	int arr[] = {  3, 5, 4, 6, 8 };          
// 	int n = sizeof(arr) / sizeof(arr[0]);
//     // cout<<n;
// 	int miss = getMissingNo(arr, n);
// 	cout << miss;
// }
