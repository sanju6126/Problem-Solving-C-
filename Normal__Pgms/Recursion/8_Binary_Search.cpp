#include<iostream>
using namespace std;

bool BinarySearch(int a[7],int s,int e,int k){

    //Base Case
    if(s > e){
        return false;
    }
    
    
    int mid = (s+e)/2;

    if(a[mid] == k){
        return true;
    }
    if(k < a[mid]){
        int ans = BinarySearch(a,0,mid-1,k);
        return ans;
    }
    if(k > a[mid]){
        int ans = BinarySearch(a,mid+1,e,k);
        return ans;
        
    }


}


int main(){

    int a[7] = {2,4,6,8,10,14,16};
    int size = sizeof(a)/sizeof(a[0]);

    int k;
    cout<<"Enter the key u want to search: ";
    cin>>k;

    cout<<BinarySearch(a,0,size-1,k);


    return 0;
}