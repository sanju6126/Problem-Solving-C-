#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the integer a: "<<endl;
    cin>>a;
    cout<<"enter the integer b: "<<endl;
    cin>>b;
    cout<<"enter the integer c: "<<endl;
    cin>>c;

    if(a>b){
        if(c>a){
            cout<<"c is the biggest and b is the smallest"<<endl;
        }
        else if(b>c){
            cout<<"a is the biggest and c is the smallest"<<endl;
        }
        else{
            cout<<"a is the bigest and b is the smallest";
        }
    }
    else if(b>c){
        if(a<c){
            cout<<"b is the biggest and a is the smallest"<<endl;
        }
        else{
            cout<<"b is the biggest and c is the smallest"<<endl;
        }
    }
    else{
        cout<<"c is the biggest and a is the smallest";
    }
    return 0;
}
