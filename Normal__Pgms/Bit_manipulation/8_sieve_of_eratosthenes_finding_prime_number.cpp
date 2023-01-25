#include<iostream>
using namespace std;
int main(){
    int start = 2;
    int end= 50;

    int a[100]={0};

    int sqr;
    for(int i=2;i<=end;i++){
        sqr = i*i;
        if(sqr > end){
            break;
        }
        else{
            for(int j=sqr;j<=end;j=j+i){
                if(a[j]!=1){                //agar ksi ka table me ni aaya hai to  matlab unchecked hai to
                    a[j] = 1;               //check kar do
                }
                else{
                    continue;               //agar kisi ka table me allready aa gaya hai to
                }
            }
        }
    }

    cout<<"prime numbers in between "<<start<<" and "<<end<<" is: ";
    for(int i=2;i<=end;i++){
        if(a[i]!=1){
          cout<<i<<" ";  
        }
        
    }
return 0;
}