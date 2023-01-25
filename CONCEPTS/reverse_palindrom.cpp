#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    string p;
    cin>>p;

    string k;
    k=p;

    reverse(p.begin(),p.end());
    if(k==p){
        cout<<"palindrom";
    }
    else{
        cout<< "its not a palidrom";
    }
 
 
    
    return 0;

}


