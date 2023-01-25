#include<iostream>
using namespace std;

int main(){

    int n,val=0,temp=0,swap=0,shift=1;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the elements into the array: "<<endl;
    cout<<"Note: array should contain some zeroes in it"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    for(int i=0;i<n;i++){
        if(a[i]==0){
            val=a[i];
            temp=a[0];
            a[0]=val;

            while(shift!=i){
                swap=a[shift];
                a[shift]=temp;
                temp=swap;

                shift++;                                        //014080    
            }

            if(shift == i){
                a[i] = temp;
            }

        }
        shift=1;
    }

    cout<<"array after shifting is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}