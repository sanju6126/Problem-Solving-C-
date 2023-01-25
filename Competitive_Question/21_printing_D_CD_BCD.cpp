
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // char ch = 'a'+2;
    // cout<<ch;
    // int a = ch;
    // cout<<a;
    // char ch='A';
    int k=0;

    for(int i=1;i<=n;i++){ k=0;
        for(int j=1;j<=i;j++){
            cout<<'A'+(n-(i+(k)));
            k--;
        }cout<<endl;
    }
    return 0;
}

