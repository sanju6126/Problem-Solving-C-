// #include<iostream>
// using namespace std;

// int main(){

//     int f=0;
//     int s=1;
//     int t;
//     int n;

//     cout<<"Enter upto which term u want to print the fibonacct series: ";
//     cin>>n;

//     for(int i=0;i<n;i++){

//         if(i==0){
//             cout<<f<<" ";
//             continue;
//         }
//         if(i==1){
//             cout<<s<<" ";
//             continue;
//         }

//         t = f + s;
//         cout<<t<<" ";
//         f = s;
//         s = t;

//     }
    


//     return 0;
// }



//using Recursion

#include<iostream>
using namespace std;

int fibo(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    return (fibo(n-1) + fibo(n-2));
}


int main(){

    int n;
    cout<<"enter the value of n : ";
    cin>>n;

    
    cout<<"fibonacci upto " <<n<<" is = "<<fibo(n);

    return 0;
}
