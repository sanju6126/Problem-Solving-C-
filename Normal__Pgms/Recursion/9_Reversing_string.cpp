#include<iostream>
using namespace std;

void ReverseString(string &str,int s,int e){   //pass by Reference ho rha hai....(pass by value karte to humko last me Return karna padta)
    if(s > e){
        return;
    }

    swap(str[s++],str[e--]);

    ReverseString(str,s,e);
}

int main(){

    string str;
    cout<<"Enter String: ";
    cin>>str;

    int s=0;
    int e = (str.length())-1;

    ReverseString(str,s,e);

    cout<<str;

    return 0;
}