#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>row>>col;


    //taken input from the user into the array
    int a[row][col]; 
    cout<<"Enter the elements into the array: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }


    //logic(transpose)

    cout<<endl<<"transpose of the matrix is: "<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[j][i]<<" ";
        }

        cout<<endl;
    }


    return 0;
}