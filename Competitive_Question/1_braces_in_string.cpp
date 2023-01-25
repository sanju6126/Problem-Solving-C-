#include<iostream>
#include<string>
using namespace std;
int main(){
    int count=0,count2=0;

    char str[50]= "{what's your{} name remind me}";
    for(int i=0; str[i] !='\0'; i++){
        if(str[i] == '{'){
            count++;
        }
        if(str[i] == '}'){
            count2++;
        }
        else{
            continue;
        }
    }

    if(count == count2){
        cout<<"no error found";
    }
    else{
        cout<<"check ur string";
    }
    
    return 0;
}