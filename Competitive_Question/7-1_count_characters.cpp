#include<iostream>
#include<string>
using namespace std;
                        //i jo hai point kar raha hai j jo hai check kar raha hai ki kahi s[i] == s[j] hai ki ni
int main(){

    int count=1,i;
    int checking_for_counted=0;
    string flag="not_found" ;   //check

    string s;
    cout<<"Enter any string: ";
    getline(cin,s);

    for(int i=0;i<s.length();i++){
        //checking peehe ki wo char kya present hai
        while(checking_for_counted != i){
            if(s[checking_for_counted] == s[i]){
                flag = "found";
                break;    //humko pata chal gaya ki wo peeche v present hai, to waha loop se nikal jaynge
            }
            else{
                // flag = "not_found";
                checking_for_counted++;
            }
        }

        if(flag == "found"){
            checking_for_counted=0;
            continue;                    //means i ko increment kar do
        }

        //not_found case   ....to aage check karo...agar mila to count++ kar do
        else{
            for(int j=i+1;j<s.length();j++){
                if(s[i] == s[j]){                                  //for(int j=i+1;j<=s.length();j++){if(s[i] == s[j] && i!=j){                
                    count++;               
                }
                else{
                    continue;
                }
            }
            cout<<s[i]<<" - "<<count<<endl;
        }
    
        
        count = 1;
        checking_for_counted=0;
    }
        

    return 0;
}