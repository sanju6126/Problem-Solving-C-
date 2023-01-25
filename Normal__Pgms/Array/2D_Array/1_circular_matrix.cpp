#include<iostream>
using namespace std;

int main(){
    int row_start,row_end;
    int col_start,col_end;

    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>row_end>>col_end;


    //taken input from the user into the array
    int a[row_end][col_end]; 
    cout<<"Enter the elements into the array: "<<endl;
    for(int i=0;i<row_end;i++){
        for(int j=0;j<col_end;j++){
            cin>>a[i][j];
        }
    }

    //printing the spiral matrix
    row_start=0,col_start=0;
    row_end=row_end-1,col_end=col_end-1;

    cout<<"circular matrix is: "<<endl;
 
    while(row_start <= row_end && col_start <= col_end){

        
        // horizontal row(forward)
        for(int i=col_start;i<=col_end;i++){
            cout<<a[row_start][i]<<" ";
        }
        row_start++;

        if(row_start > row_end || col_start > col_end){
            break;
        }

        //vertical col(forward)
        for(int i=row_start;i<=row_end;i++){
            cout<<a[i][col_end]<<" ";                            //yaha pe col_end=5 lele raha hai(means jo user input kiya wo) 
        }                                                        //lekin 05 column to exist hi ni karta hai iske liye upar me row=row-1 
        col_end--;                                               //and col=col-1 kiya gaya hia and for loop me >=,<=(equals to ka use hua hai)


        if(col_end == 0){
            break;
        }

        //horizontal row(backward)
        for(int i=col_end;i>=col_start;i--){
            cout<<a[row_end][i]<<" ";
        }
        row_end--;
        
        //vertical col(backward)
        for(int i=row_end;i>=row_start;i--){
            cout<<a[i][col_start]<<" ";
        }
        col_start++;

        
    }
    

    return 0;
}