// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){

//     int n,m;
//     int mx = INT_MIN;
//     cout<<"Enter any two positive integer: ";
//     cin>>n>>m;

//     int mn = min(n,m);

//     for(int i=1;i<=mn;i++){           //here suppose some one entered 25 and 50....so answer would be 25 because it is dividing both the numbers
//         if(n%i==0 && m%i==0){         // so to that to happen u have to make one change in the loop that is i<mn(i less than the smallest of the two values)
//             mx = max(mx,i);             
            
//             //mx = i;                   //HERE U CAN ALSO DO LIKE JUST STORE THE VALUE bcz i will always be maximum(since it is incremented by one everytime)
//         }
//         else{
//             continue;
//         }
//     }

//     cout<<mx<<endl;

//     return 0;
// }




#include<iostream>
#include <climits>
using namespace std;

int gcd(int a,int b){
    
    int c=0;
    while( a!=0){
        
        c = b%a;             
        b = a;
        a = c;
       
        
    }
    return b;
}

int main(){
    cout<<gcd(24,42);
return 0;
}
