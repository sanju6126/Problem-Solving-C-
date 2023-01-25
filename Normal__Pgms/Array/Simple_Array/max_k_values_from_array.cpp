#include<iostream>
using namespace std;

int main(){

    int pos = 0;
    int mx = -1;

    int n;
    cout<<endl<<"Enter the size of array: ";
    cin>>n;

    int a[n];   
    cout<<"Enter the elements into the array: ";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    
    int k;
    cout<<"enter the value of k: ";
    cin>>k;

    int m1[k],m=0;
    int p1[k],p=0;

    for(int for_k=0;for_k < k;for_k++){

        for(int i=0;i<n;i++){


            if(for_k!=0 && a[i] == m1[for_k-1] ){                      //first time isko koi kaam hi ni hai
                for_k = for_k-1;
                continue;
                
            }

            if(a[i] > mx){
               
                mx = a[i];
                pos = i;
            }

            else{
                continue;
            }
        }

        for(int i=0;i<=k;i++){
            if(m1[i]==mx){
                continue;
            }
            else{
                m1[for_k] = mx;
                p1[for_k] = pos;
            }
        }    
        

        mx = -1;            //******************
        pos = 0;

    }




    for(int i=0;i<k;i++){
        cout<<m1[i]<<" ";

    }
    return 0;
}