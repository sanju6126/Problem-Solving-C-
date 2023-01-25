#include<iostream>
#include<bits/stdc++.h>
#include<sstream>
#include<algorithm>
using namespace std;

string solveFor2(int a[], int n, int k){

        if(k>n){
            return "Invalid value of K!!";
        }

        int x=1;  int item=1;

        for(int i=n-1;i>=0;i--){
            if(a[i]!=a[n-item]){
//                x++;
                item++;   //found new item
                if(item == k){
                    stringstream ss;
                    ss << a[i];
                    string s;
                    ss >> s;
                    return  s;
                }
            }
            else{   //equal hai condition
                if(item==k){
                    stringstream ss;
                    ss << a[i];
                    string s;
                    ss >> s;
                    return  s;
                    // return a[i].tostring();
                }
                continue;
            }
        }

            return "nth highest can't be found, input  different integers";

    }



int main(){
    int k,n,a[n];

    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter the Value of K: ";
    cin>>k;

    cout<<"Output: ",solveFor2(a,n,k);

    return 0;
}