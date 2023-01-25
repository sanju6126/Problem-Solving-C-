#include<iostream>
#include<algorithm>
using namespace std;

bool checkPalindrom(string str,int s,int e){

    if(s >= e){                      //exit condition  //agar yha tak phuch gaya h tab humko pta lg jyga tab tak ki wo palindrom h
        return true;
    }

    if(str[s++] != str[e--]){      //if condtion gets false it will return false that implies that it's not a palindrom
        return false;
    }
    else{          //talat
        
        return checkPalindrom(str,s,e);
    }
}

// abba

int main(){

    string str;
    cout<<"Enter String: ";
    cin>>str;

    // //using reverse function
    // string p=str;
    // reverse(p.begin(),p.end());

    //can be also done using a For Loop and two pointers
    //can also be done using another string and appending on it with last characters.

    int s=0;
    int e = (str.length())-1;

    

    if(checkPalindrom(str,s,e)){
        cout<<"Palindrom found";
    }
    else{
        cout<<"Not a palindrom";
    }

    return 0;
}