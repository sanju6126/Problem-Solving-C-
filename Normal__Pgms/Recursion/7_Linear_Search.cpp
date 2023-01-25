#include<iostream>
using namespace std;

bool linearSearch(int a[],int size,int k){
    if(size==0){           //full array traversed and we didn't got the key
        return false;
    }

    if(a[0] == k){
        return true;        //if we get the required key
    }
    else{                                           //ek time agar humko element number ni mila to phir se wahi operation karo
        bool search = linearSearch(a+1,size-1,k);   //dobara jab wahi operation karega to us time usko key mila ki ni...uska result
        return search;                              //(true/false) is variable me store ho jayga and wo return karta rahega jaha se call hua tha 
    }
}

int main(){

    int a[] = {5,3,7,8,1,2};
    int size = sizeof(a)/sizeof(a[0]);

    int k;
    cout<<"Enter the key u want to search: ";
    cin>>k;

    cout<<linearSearch(a,size,k);

    return 0;
}