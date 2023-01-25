// #include<stdio.h>

// // struct{
// //     int i;
// //     float ft;
// // }decl;
// int main(){
// //     // printf("%d",EOF);
// //     decl.i = 4;
// //     decl.ft = 7.96623;
// //     printf("%d %.2f",decl.i,decl.ft);

//     // const int a[5] = {10,20,30,40,50};
//     // printf("%d",a[2]);
//     // a[2] = 300;
//     // printf(""%d"",a[2]);

//     // char p[] = "%d";
//     // p[1] = 'c';
//     // printf(p,65);
    

 

// int m = 1;
// switch (m  << (2 + m)){
//     default:
//     printf("t");
//     case 4:
//     printf("p");
//     case 5:
//     printf("b");
//     case 8:
//     printf("i");

// }

//    return 0;
// }
#include<iostream>
using namespace std;
int main(){

    string s;
    cout<<"String is: ";
    cin>>s;
    int k=s.length();
    bool flag= true;
    for(int i=0;i<s.length()/2;i++){
        if(s[i] != s[k-1]){
            flag = false;
        }
        k--;
    }

    if(flag == false){
        cout<<"not a palindrom";
    }
    else{
        cout<<"palindrom";
    }

    return 0;
}