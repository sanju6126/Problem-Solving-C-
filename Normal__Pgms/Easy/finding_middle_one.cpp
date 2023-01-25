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

    cout<<endl<<endl;
    if(a>b){
        if(b>c){
            cout<<"OUTPUT: b is the second highest no."<<endl;
        }
        else if(a<c){
            cout<<"OUTPUT: a is the second highest no."<<endl;
        }
        else{
            cout<<"OUTPUT: c is the highest no.";
        }
    }
    else if(b>c){
        if(a>c){
            cout<<"OUTPUT: a is the second highest"<<endl;
        }
        else{
            cout<<"OUTPUT: c is the second highest";
        }
    }
    else{
        cout<<"OUTPUT: b is the second highest";
    }
}
