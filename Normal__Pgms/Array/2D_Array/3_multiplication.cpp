#include<iostream>
using namespace std;

int main(){
    int row_n,col_n;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>row_n>>col_n;


    //taken input from the user into matrix_1
    int a[row_n][col_n]; 
    cout<<"Enter the elements into matrix-1: "<<endl;
    for(int i=0;i<row_n;i++){
        for(int j=0;j<col_n;j++){
            cin>>a[i][j];
        }
    }

    int row_m,col_m;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>row_m>>col_m;

    //taken input from the user into matrix_2
    int b[row_m][col_m]; 
    cout<<"Enter the elements into matrix-2: "<<endl;
    for(int i=0;i<row_m;i++){
        for(int j=0;j<col_m;j++){
            cin>>b[i][j];
        }
    }

    //output matrix initialized with zero
    int c[row_n][col_m];
    for(int i=0;i<row_n;i++){
        for(int j=0;j<col_m;j++){
            c[i][j]=0;
        }
    }

    //calculating the output matrix    
    if(col_n == row_m){

        for(int i=0;i<row_n;i++){
            for(int j=0;j<col_m;j++){
                for(int k=0;k<row_m;k++){
                    c[i][j] += a[i][k] * b[k][j]; 
                }     
            }
        }

        //printing the output matrix
        cout<<"New matrix is: "<<endl;
        for(int i=0;i<row_n;i++){
            for(int j=0;j<col_m;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }       

    }
    else{
        cout<<"matrix can't be multiplied ";
    }





    return 0;
}