#include<iostream>
#include<string>
using namespace std;
int main(){

    int n;
    cout<<"eneter an num"<<endl;
    cin>>n;

    string s = to_string(n);
    // cout<<s;

    int a[150];
    for(int i=0;i<150;i++){
        a[i]=-1;
    }

    int count=1,odd_count=0;
    for(int i=0;i<s.length();i++){
        if(a[int(s[i])]==-1){
            for(int k=i+1;k<s.length();k++){    //23131
                if(s[i] == s[k]){
                    count++;
                }
            }

            a[int(s[i])]=1;         //visited
        }
        else{
            continue;
        }

        if(count%2!=0){
            odd_count++;
        }

        count=1;
            
    }
    if(odd_count>1){
        cout<<"not possible";
        // return 2;
    }
    else{
        cout<<"possible";
        // return 1;
    }

    return 0;
}


// #include<sstreaam>

// string s; // a variable of str data type

//   // using the stringstream class to insert an int and
//   // extract a string
//   stringstream ss;  
//   ss << input1;  
//   ss >> s;




