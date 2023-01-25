#include<iostream>
using namespace std;
int main(){
int n=5;
int a[n];
cout<<"enter the elements: ";
for(int i=0;i<n;i++){
cin>>a[i];
}
int k;
cout<<"enter the value of k: ";
cin>>k;
int sum=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        sum=a[i]+a[j];
        if(sum==k){
          cout<<"combination found";
          break;
        }
        if(sum==k){
          //cout<<"combination found";
          break;
        }
   }
}
return 0;
}