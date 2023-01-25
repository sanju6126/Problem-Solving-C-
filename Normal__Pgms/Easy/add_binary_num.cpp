#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter two binary numbers of same length: ";
    cin>>num1>>num2;

    // cout<<num1<<" "<<num2<<endl;

    string s = to_string(num1);
    int len = s.length();
    // cout<<len<<endl;
    

    int a[len+1],i=0;
    for(i=0;i<len+1;i++){
        a[i]=0;
    }
    
    int prev_carry=0,d1,d2,s1,s2;
    i=0;
    while(num1>0 && num2>0){
        d1 = num1%10;
        d2 = num2%10;
        if((d1==0 && d2==1) || (d1==1 && d2==0)){
            if(prev_carry == 0){
                
                a[i] = 1;
                // cout<<a[i]<<" ";
                prev_carry = 0;
            }
            else if(prev_carry == 1){    //
                if(i+1 == len){
                    a[i] = 10;
                    // cout<<a[i]<<" ";
                }
                else{
                    a[i] = 0;
                    // cout<<a[i]<<" ";
                    prev_carry = 1;
                }
                
            }
        }

        if(d1==1 && d2==1){
            if(prev_carry == 0){
                if(i+1 == len){
                    a[i] = 10;
                    // cout<<a[i]<<" ";

                }
                else{
                    a[i] = 0;
                    // cout<<a[i]<<" ";
                    prev_carry = 1;
                }
               
            }
            else if(prev_carry == 1){   //
                if(i+1 == len){
                    a[i] = 11;
                    // cout<<a[i]<<" ";
                }
                else{
                    a[i] = 1;
                    // cout<<a[i]<<" ";
                    prev_carry = 1;
                }
                
            }
        }

        else if(d1==0 && d2==0){//
            if(prev_carry == 0){
                a[i] = 0;
                // cout<<a[i]<<"k ";
                prev_carry = 0;
            }
            else if(prev_carry == 1){   //
                a[i] = 1;
                // cout<<a[i]<<"k";
                prev_carry = 0;
            }
        }

        num1 = num1/10;
        num2 = num2/10;

        i++;

    }

    for(i=len-1;i>=0;i--){
        cout<<a[i];
    }


    return 0;
}