
// #include<iostream>
// using namespace std;

// int power(int n){

//     if(n<=0){
//         return 1;
//     }

//     return (2*power(n-1));
// }

// int main(){

//     int n;
//     cout<<"enter n";
//     cin>>n;

//     cout<<"Ans is: "<<power(n);

//     return 0;
// }



// ****************************************************


//This is for n power n

// #include<iostream>
// using namespace std;

// int power(int n){

//     if(n<=0){
//         return 1;
//     }

//     return (n*power(n-1));
// }

// int main(){

//     int n;
//     cout<<"enter n";
//     cin>>n;

//     cout<<"Ans is: "<<power(n);

//     return 0;
// }


// ****************************************************************


// FINDING SUM OF ELEMENTS IN THE ARRAY

#include<iostream>
using namespace std;


int totalSum(int a[],int size){

    if(size==0){
        return 0;
    }

    return a[0]+totalSum(a+1,size-1);

}

int main(){

    int a[] = {5,3,7,8,1,2};
    int size = sizeof(a)/sizeof(a[0]);

    cout<<totalSum(a,size);

    return 0;
}



// //array that sums up to 0(3 adjacent elements)
// #include<iostream>
// using namespace std;

// bool sumsup0(int a[],int size){

//     //exit condition
//     if(size<3){
//         return false;
//     }


//     if((a[0]+a[1]+a[2]) == 0){
//         return true;
//     }
//     else{
//         int ans = sumsup0(a+1,size-1);
//         return ans;
//     }
    
// }

// int main(){

//     int a[]={2,-1,-7,3,4};
//     int size = sizeof(a)/sizeof(a[0]);

//     cout<<sumsup0(a,size);

//     return 0;
// }