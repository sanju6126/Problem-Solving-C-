#include<iostream>
using namespace std;

int solve(int a[],int n,int left,int right){
    int levels=1;

    for(int i=1;i<=n;i++){
        if(i>=left && i<=right){
            continue;
        }
        
        else{
            levels++;
        }
    
    }    
    return levels;

}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int no_of_visits_in_town_M;
    cin>>no_of_visits_in_town_M;
         
    int integer_2;
    cin>>integer_2;

    int left,right;
    for(int i=0;i<no_of_visits_in_town_M;i++){
        cout<<"enter the left value: ";
        cin>>left;
        
        cout<<"Enter the Right Value: ";
        cin>>right;
        

        cout<<solve(a,n,left,right)<<endl;

    }
         

    return 0;
}