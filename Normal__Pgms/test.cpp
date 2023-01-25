// 

#include<vector>
#include<sstream>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

 vector<string> fizzBuzz(int n) {
        
        vector<string>a(n);
        
         for(int i=1;i<=n;i++){
             
            if(i%3==0 && i%5==0){
                a.push_back("FizzBuzz");
            }
            else if(i%3==0){
                a.push_back("Fizz");
            }
            else if(i%5==0){
                a.push_back("Buzz");
            }
            else{
                stringstream ss;
                ss << i;
                string k;
                ss >> k;
                
                a.push_back(k);
            }
            
            
        }
        
        return a;
        
    }

int main(){
    
    vector<string>s = fizzBuzz(3);
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    return 0;
}