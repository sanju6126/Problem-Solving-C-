// #include<iostream>
// using namespace std;

// int power(int n,int p){

//     if(p==0){
//         return 1;               //agar yaha 0 hoga to pura pgm 0 anser dedega
//     }
//     return (n * power(n,p-1));
// }



// int main(){
//     int n,p;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     cout<<"Enter upto which power u want to calculate: ";
//     cin>>p;

//     cout<<"n power p = "<<power(n,p);

//     return 0;
// }




//this is one for 2 power n but ....u can make it n power p.......just by replacing 2 in this problem by n(taking n as input from the user)

#include<iostream>
using namespace std;

int power(int p){

    if(p==0){
        return 1;
    }

    if(p==1){
        return 2;
    }

    //recursive call
    int ans = power(p/2);                  //answer to nikalna hi padta, p chahe even ho ya odd

    //agar power even hai
    if(p%2==0){                            // jaise 2 ka power 4 nikalna hai......to humlog 2^2*2^2 likhte
        return ans*ans;
    }
    else{//agar power odd hai               //jaise 2 ka power 3 hota....to...tum 2*2^4 likhta na
        return 2*ans*ans;
    }

}


int main(){
    int n,p;
    // cout<<"enter the value of n: ";
    // cin>>n;
    cout<<"Enter upto which power u want to calculate: ";
    cin>>p;

    cout<<"n power p = "<<power(p);


    return 0;
}