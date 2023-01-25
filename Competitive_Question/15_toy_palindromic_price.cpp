#include<iostream>
using namespace std;
int main(){

    int no_of_toys;
    cout<<"enter the number of toys: ";
    cin>>no_of_toys;

    int a[no_of_toys];
    cout<<"enter the cost price of " << no_of_toys << " the toys: ";
    for(int i=0;i<no_of_toys;i++){
        cin>>a[i];
    }

    int cp=0;int r=0;
    for(int i=0;i<no_of_toys;i++){
        while(r!=cp){
            cp = a[i];
            while(cp!=0){
                 int d = cp%10;
                int r =  r*10+d;
                cp = cp/10;
            }

            if(r == cp){
                cout<<cp<<" "<<(cp-a[i])<<endl; 
                break;
            }

            cp = cp+1;
        }

        if(r == cp){
            cout<<cp<<" "<<(cp-a[i])<<endl;
        }
            
    }

    return 0;
}