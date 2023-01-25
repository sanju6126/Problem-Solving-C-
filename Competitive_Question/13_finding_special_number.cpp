#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the numbers into the array, it should be atleast of 2-Digit: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

            //    4 7 1           7 4 1
    // int d,r=0,num;
    // int inc = 1;
    // int comp = 0;
    // for(int i=0;i<n;i++){
    //     num = a[i];
    //     while(num != 0){
    //         d = num%10;
            
    //         if(inc>1){
    //             if(d > comp){

    //             }
    //         }
    //         num = num/10;
    //         comp = r;
    //     }
    // }

    // return 0;


                                                            //    4 7 1                7 4 1
    int d,r=0,num;
    int inc = 1;
    int comp = 0;
    int count = 0;

                        //                          4 7 1                 7 4 1
    for(int i=0;i<n;i++){
        num = a[i];
        do{
            d = num%10;               //1       7         4                    1       4          7
            num = num/10;             //47      4         0                    74      7          0
            
            if(inc > 1){
                if(d < comp){                             //break
                    break;
                }
                else{
                    comp = d;         //         7                                      4         7
                    inc++;            //         3                                      3         4
                    r = r*10 +d;      //         17                                     14        147
                    
                    
                }
            }
            else{
                r = r*10+d;              //1                                    1
                comp = d;                //1                                    1
                inc++;                   //2                                    2
            }           

        }while(num != 0);

        //reversing the number that we get after the process  
        int rr=0 , dd ;
        while(r != 0){
            dd = r%10;
            rr = rr*10 + dd;
            r = r/10;
        }

        if(a[i] == rr){
            count++ ;
             
        }
        
        comp = 0;
        inc = 1;
        r = 0;
        d = 0;
    }

    cout<<"count of special numbers in the array is: "<<count;

    return 0;
}