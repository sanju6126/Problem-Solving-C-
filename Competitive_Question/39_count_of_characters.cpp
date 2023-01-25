#include<iostream>
using namespace std;

int main(){

    string str;
    cin>>str;


    int count=0;
    char old=str[0];


    //= dena hoga because tumhe last wale ka v print karana hai number last tak iterate kar ke......warna last wala jaha not equal ayga khatam karne ka baad...tabhi wo print karega
    for(int i=0;i<=str.length();i++){                //Input: aaabbccccd //Output:a3b2c4d1
        if(old!=str[i]){

            cout<<old<<count;
            old = str[i];
            count=1;
        }
        else{
            count++;
        }                                       

    }


    return 0;
}