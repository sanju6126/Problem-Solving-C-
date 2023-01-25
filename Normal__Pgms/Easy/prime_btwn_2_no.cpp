// // #include<iostream>
// // using namespace std;

// // int prime_check(int n,int m){
    
// //     int a[50],k=0;
// //     for(int i=n;i<=m;i++){
// //         if(i%2==0 || i%3==0){
// //             continue;                                   //kisi ek se v divisible hai to wo prime ni hai
// //         }
// //         else{
// //             a[k] = i;                                  //agar ksi se divisible ni hai to wo prime hai
// //             k++;
// //         }
// //     }

// //     for(int i=0;i<k;i++){
// //         cout<<a[i]<<" ";
// //     }

// //     return 0;
// // }



// // int main(){
// //     int n,m;
// //     cout<<"Enter any two positive integer value between which u want to find the prime numbers: ";
// //     cin>>n>>m;

// //     int ans = prime_check(n,m);
    


// //     return 0;
// // }






// // ***********************************************************************************************************

// // it can be also done through sqrt formula......actually sara number ka koi square root hoga............
// // jaise 16 ka..uska square root 4*4 hoga......lekin humko ekhi no. 4 se pata chal ja rha hai, ki usko jab 4*4 likhenge to koi number milega.....or phir us number ka square root karenge to humko wo chota wala number mil jayga....or usi ka asli need v hai(chota wala ka)


#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        
        if(num%i==0){
            return false;
        }
        // return true;       //yaha pe isi liye ni hoga kyu ki yaha pe agari=2 pe if condition true ni hua to turant return true kar dega......lekin ho skta hai wo number 3 se divisiblw hoga....or wo prime ni hoga.............totally(wo ekhi condition me check ka rk return kar de rha hai)
    }

    return true;
}
int main(){
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}

