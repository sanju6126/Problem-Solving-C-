#include<iostream>
using namespace std;
                                      //LONGEST ARITHMETIC SUB_ARRAY
                                    //   THIS WILL PRINT THE LENGTH OF THAT BIGGEST SUB ARRAY WHOSE CONSECUTIVE TERMS DIFFERENCE IS SAME...
                                    // LIKE 10 7 4 6 8 10 11.........HERE U CAN SEE THAT THE SUB ARRAY 46810  HAS A CONSECUTIVE DIFFERENCE OF 2..
int main(){
                                    //humki wo longest sub array ka length chahiye jiska consecutive term ka diifference same ho
    int count = 0;

    int n;
    cout<<endl<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements into the array: ";
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }

    int pd,cd,prev_count=0;
    
    for(int i=0;i<n;i++){
        cd = arr[i] - arr[i+1];

        if(i>0){
            if(cd == pd){

                count++;
            }
            else{
                if(count > prev_count){

                    prev_count = count;
                }
                
                count = 0;
                count++;
            }
            
        }

        if(i == 0){
            count++;
        }
        pd = cd;
    }

    cout<<endl;
    cout<<"length of longest sub array with consecutive term of same diiference is: "<<prev_count+1<<endl;

    return 0;
}