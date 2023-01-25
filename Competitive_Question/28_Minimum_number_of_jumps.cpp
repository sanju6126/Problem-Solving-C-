#include<iostream>
using namespace std;

int minJumps(int arr[], int n){
        
        if(n==1){
            return 0;
        }
        if(arr[0]==0){
            return -1;
        }
        
        int jump = 1;
        int steps = arr[0];
        int max_reach_index = arr[0];
        
        for(int i=1;i<n;i++){
            if(i == n-1){
                return jump;
            }
            max_reach_index = max(max_reach_index,i+arr[i]);          //i bs index paane k liye use hua hai
            steps--;
            if(steps == 0){
                jump++;
                if(i>=max_reach_index){
                    cout<<"x";
                    return -1;
                }
                steps=arr[i];
                // steps = max_reach_index - i;                       //i ni v dalte phir v kaam chl jata
            }   //i bas afltu k liye diya hua hai mere according 
        }
       
        
    }

int main(){
    
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1} ;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<minJumps(arr,n);

    return 0;
}