#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            
        }
                             // 4 6 8 10 12
        int flag =0;
        for(int i=0;i<=n-3;i++)
            {	int d = arr[i+1] - arr[i];
                int d1 = arr[i+2] - arr[i+1];

                if(d1 == d){
                    flag = 0;
                    continue;

                }
                else{
                 flag = 1;
                 break;
                }
            }
        
        if(flag == 0){
            cout<<"true";

        }
        else{
            cout<<"false";

        }

    return 0;
}