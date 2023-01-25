
#include<iostream>
using namespace std;

string isPossible(string name,string typed){

    if(typed.length() < name.length()){
        return "false";
    }

    int count=0,typed_count=0,m=0,k=0,j=0,l=0,prev_count=0;

    for(int i=0;i<name.length();i=k){
        count=0;
        while(name[i]==name[k]){
            count++;    
            k++;
        }

        if(name[i] == typed[j]){
            typed_count=0;
            while(typed[j] == typed[l]){
                typed_count++;
                l++;
            } j = l; 
        }
        else{
            return "false";
        }

        if(typed_count >= count){
            continue;
        }
        else{
            return "false";
        }

        // if((i==name.length()-1) && (name[i] != typed[typed.length()-1])){
        //     return "false";
            
        // }     //for last matching conditions

    }
    
    
    return "true";
    
    
}




int main(){

    int n;
    cin>>n;

    string name,typed;
    for(int i=0;i<n;i++){
        cout<<"Enter name: ";cin>>name;
        cout<<"Enter typed: ";cin>>typed;

        cout<<isPossible(name,typed);
    }

    return 0;
}

