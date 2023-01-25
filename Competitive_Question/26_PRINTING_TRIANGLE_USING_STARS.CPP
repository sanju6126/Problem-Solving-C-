#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int k=n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            if(j>=k){
                cout<<"*";              //print j karwa rha hai....so j jab K se bada rahega tabhi print kar wana chalu karega...
            }
            else{
                cout<<" ";
            }
        }

        for(int j=1;j<=i;j++){

            cout<<"*";
            
        }

        k--;
        cout<<endl;
    }

    return 0;
}

