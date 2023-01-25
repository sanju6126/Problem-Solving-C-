// #include<iostream>
// using namespace std;

// void fibo(int n){
//     int first_term=0;
//     int second_term=1;
//     int third_term;

//     cout<<first_term<<" "<<second_term<<" ";

//     for(int i=1;i<=n;i++){
//         third_term = first_term + second_term;
//         first_term = second_term;
//         second_term = third_term;

//         cout<<third_term<<" ";
//     }
    
    

//     return;
// }

// int main(){
//     int n;
//     cout<<"Enter the number of terms u want to print: ";
//     cin>>n;

//     cout<<"**********Fibonacci Series is********** "<<endl;

//     fibo(n);
    
    

//     return 0;
// }












//finding the nth fibo number


#include<iostream>
using namespace std;

int Nfibo(int num){
    int first_term=0;
    int second_term=1;
    int third_term;

    if(num==1){
        return first_term;
    }
    else if(num==2){
        return second_term;
    }
    else{
        for(int i=3;i<=num;i++){
            third_term = first_term + second_term;
            first_term = second_term;
            second_term = third_term;
        }

        return third_term;
    }

    
}

int main(){

    int n;
    cout<<"Enter which position of the series u want: ";
    cin>>n;

    cout<<"No. of that position is: "<<Nfibo(n);

    return 0;
}