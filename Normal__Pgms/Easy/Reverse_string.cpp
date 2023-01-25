#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,result="";

    cout<<"Enter any string: ";
    getline(cin,s);

    for(int i=s.length();i>=0;i--){
        result = result + s[i];
    }

    cout<<result<<endl;

    return 0;

}
