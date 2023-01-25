#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// vector printPrevSmaller(int in[],int n){
//     // int out[n]={0};
//     // out[0]=-1;
//     // int min= in[0];

//     // for(int i=1;i<n;i++){
//     //     if(min < in[i]){
//     //         out[i] = min;
//     //     }
//     //     else{
//     //         min = in[i];
//     //         out[i] = -1;
//     //     }
//     // }

//     // for(int i=0;i<n;i++){
//     //     cout<<out[i]<<" ";
//     // }
    

// }



vector<int> leftSmaller(int n, int a[]){
        
        stack<int>s;
        vector<int>o;
        s.push(-1);
        // cout<<s.top();
        
        for(int i=0;i<n;i++){
            
            while(s.top() >= a[i] && !s.empty()){    //-1 aagaya matlab empty ho gaya hai...matlab element se chota koi number ni hai
                s.pop();                             //s.top!=-1;   ye v likh skta hai
            }
            
            // if(s.empty()){              //this portion not needed
            //     o.push_back(-1);        //matlab us number se koi v number chota ni hai...usse pehle
            // }
            // else{
                o.push_back(s.top());            //   this one is needed
            // }
            
            s.push(a[i]);                       //this one is needed
            
        }

        
        return o;
        
    }


int main(){

    int in[] = {1, 2, 3, 9, 19, 0};
            // {-1, 1, 2, 3, 9, 3}
    int n = sizeof(in) / sizeof(in[0]);
    // printPrevSmaller(in, n);
    vector<int> out;

    out = leftSmaller(n,in);

    for(int i=0;i<out.size();i++){
        cout<<out[i];
    }

    return 0;
}