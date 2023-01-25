#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int k=1;
    for(int i=0;i<n;i++){   
        for(int j=n;j>0;j--){
            
            if(j==k){
                cout<<"*";
            }
            else{
                cout<<j;
            }

        }
        k++;
        cout<<endl;
        
    }

    return 0;
}
