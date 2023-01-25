#include<iostream>
using namespace std;                        
int main(){
    int i,j,k;
    int arr[]={-1,0,-5,0,6};                           //in this program, it will check in the given array that 
    int n=5;                                           //if any consecutive elements of array(that is from subarray) 
    int sum=0;                                         //make the sum = 0....if yes then cout found if no then cout not found...
    int flag=0;

    for(i=0;i<n;i++){

        for(j=i;j<n;j++){  

            sum=0;

            for(k=i;k<=j;k++){

                sum = sum + arr[k];
                if(sum==0){
                    flag=1;
                    break;
                }
                else{
                    continue;
                    // cout<<"FAlSE: NOT FOUND";
                }
            }
            // cout<<endl;
        }

       
    }

     if(flag==1){
            cout<<"found";
        }
        else{
            cout<<"NOT FOUND";
        // cout<<endl;
        }

    return 0;
}