#include<iostream>
using namespace std;

bool isVowel(char x){
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' ){
        return true;
    }
    else{
        return false;
    }
}

string solve(string s){

    string out_str;

    string in="av";

    int k=0;
    for(int i=0;i<s.length();i++){
        if(isVowel(s[i])){
            out_str.insert(k,in);
            k=k+2;
            string x =  "h";

            out_str.insert(k,x);
            k++;
        }
        else{
            string x =  "h";

            out_str.insert(k,x);
            k++;
            
        }
    }

    return out_str;
}

int main(){


    string s;
    cin>>s;

    string out;
    
    

    cout<<solve(s);
}