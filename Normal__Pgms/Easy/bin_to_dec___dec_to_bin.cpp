// //    *************dec to binary

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;

//     int a[10],i=0;
//     for(int i=0;i<10;i++){
//         a[i]=0;
//     }

//     while(n!=0){
//         a[i] = n%2;
//         n = n/2;

//         i++;
//     }

//     cout<<"your binary number is: ";
//     for(int i=10;i>=0;i--){
//         cout<<a[i];
//     }


//     return 0;
// }


//decimal to binay---------------> divide by 2
#include<iostream>
using namespace std;

int main(){
    int n,i=1,sum=0,d,temp;
    cout<<"Enter the decimal number: ";
    cin>>n;

    temp=n;
    while(temp>0){
        d = temp%2;
        sum = sum + i*d;
        i = i*10;
        temp = temp/2;

    }

    cout<<"Decimal number: "<<n<<endl;
    cout<<"binary number: "<<sum;

    return 0;
}





// // // **********binary to decimal
// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter any binary number of 10bits: ";
//     cin>>n;

//     int sum=0,d,i=0;
//     while(i!=11){                //for normal ones..u just have to find the length of the entered number...(101101...len(101101)) ,har loop me length ko decreeement karwate rahebnge and tab tak loop chalaynge jab tak length 0 na ho jay....and baki sab same step hai
//         d = n%10;
//         sum = sum + d*pow(2,i);
//         n = n/10;

//         i++;
//     }

//     cout<<"the decimal number of the given binary number is: "<<sum<<endl;

//     return 0;
// }



// // **********binary to decimal
// #include<iostream>
// #include<math.h>
// #include<string.h>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter any binary number: ";
//     cin>>n;
    
//     string s = to_string(n);
//     int len = s.length();
//     cout<<len<<endl;

//     int sum=0,d,i=0;
//     while(len!=0){                //for normal ones..u just have to find the length of the entered number that user wants to convert...(101101...len(101101)) ,har loop me length ko decreeement karwate rahebnge and tab tak loop chalaynge jab tak length 0 na ho jay....and baki sab same step hai
//         d = n%10;
//         sum = sum + d*pow(2,i);
//         n = n/10;

//         i++;
//         len--;
//     }

//     cout<<"the decimal number of the given binary number is: "<<sum<<endl;

//     return 0;
// }




// octal to decimal----------------->132: 1x8^2 + 3x8^1 + 2x8^0
// hexa to decimal--------------->A=10,B=11,C=12...F=15, 1CF: 15X16^0 + 12X16^1 + 1X16^2






// //decimal to octal---------------> divide by 8
// #include<iostream>
// using namespace std;

// int main(){
//     int n,i=1,sum=0,d,temp;
//     cout<<"Enter the decimal number: ";
//     cin>>n;

//     temp=n;
//     while(temp>0){
//         d = temp%8;
//         sum = sum + i*d;
//         i = i*10;
//         temp = temp/8;

//     }

//     cout<<"Decimal number: "<<n<<endl;
//     cout<<"octal number: "<<sum;

//     return 0;
// }




// //decimal to hexa-decicmal---------------> divide by 8           133--->D101
// #include<iostream>
// using namespace std;

// int main(){
//     int n,i=1,d,sum=0,temp;
//     cout<<"Enter the decimal number: ";
//     cin>>n;
//     temp = n;

//     while(tmep>0){
//         d = temp%16;
//         sum = sum + i*d;
//         i = i*10;
//         temp = temp/16;

//     }

//     cout<<"Decimal number: "<<n<<endl;
//     cout<<"hexa-decimal number: "<<sum;

//     return 0;
// }