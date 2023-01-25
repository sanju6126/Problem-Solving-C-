#include<iostream>
using namespace std;                                                         //INCOMPLETE HAI
int main(){
    int row,col;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>row>>col;


    //taking input from the user in the matrix
    int a[row][col]; 
    cout<<"Enter the elements into matrix: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }

    int n;
    cout<<"Enter the number u want to search: ";
    cin>>n;

    row = row-1;
    col = col-1;
    int head=0;
    int tail=col;
    
    string s="";
    int i=0;
    while(head < tail){
        int middle = (head + tail)/2;
        if(a[i][middle] == n){
            s="found";
            break;
        }
        else if(a[i][middle] > n){
            head = 0;
            tail = middle;
        }
        else if(a[i][middle] < n){
            head = middle;
            tail = col;
        }
        // i++;
    }

    int j=0;
    while(head < tail){
        int middle = row/2;
        if(a[middle][j] == n){
            s="found";
        }
        j++;
    }
    
    
    

    return 0;
}



i=0   for freezing row
row freeze kar ke usme while(col/2 check kiye...agar equal hai return kar do true.....agar reqd no.(n) middle(col/2) se chota hai to head ko 00 me rehne do or tail ko col/2-1 me rakh do or phir check karo(means while loop me rahega jab tak head jo hai tail se kam hai(head<tail)) )

j=0 for freezing column
column freeze kar ke usme while(row/2 check kiye...agar equal hai return kar do true.....agar reqd no.(n) middle(row/2) se chota hai to head ko 00 me rehne do or tail ko row/2-1 me rakh do or phir check karo(means while loop me rahega jab tak head jo hai tail se kam hai(head<tail)) )


agar dono condition me ni mila to a[i][j] me chale jao jsme i=j rahega.        
         

                            1 