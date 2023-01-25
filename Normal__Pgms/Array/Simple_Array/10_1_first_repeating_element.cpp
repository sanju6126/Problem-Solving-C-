#include<iostream>
#include<climits>
using namespace std;                                //NOT WO?R?KING
int main(){

    int n;
    cout<<endl<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements into the array: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

//     int flag=0,index=0,i=0,j=0;
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(arr[i] == arr[j]){
//                 flag= 1;
//                 index = i;
//                 break;
//             }
//             else{
//                 continue;
//             }
//         }
//         cout<<arr[i]<<" "<<arr[j]<<endl;
//         cout<<flag<<endl;
//         cout<<index<<endl;

//         if(flag == 1){
//             cout<<"match found, "<<arr[i]<<" is the first repeating element in the array and is present in the index "<<index<<endl;
//             break;
//         }
//         else{
//             cout<<"no match found";
//             break;
//         }

//     }


//     return 0;
// } 



    const int N=1000 ;                    //this variable is assigned as const so that no one can change its value in future..
    int idx[N] = {-1};
    int min = INT_MAX;




    for(int i=0;i<n;i++){
        if(idx[arr[i]] == -1){ 

           idx[arr[i]] = i;
        }
        else{
            if(idx[arr[i]] < min){
                min = idx[arr[i]];
            }

        }
    }

    cout<<"value at index "<<min<<" is repeated first";
    // cout<<"match found, "<<arr[i]<<" is the first repeating element in the array and is present in the index "<<index;


    return 0;
}






// *********************************************
// ***********************************
// **********************



// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int a[7] = {3,4,5,1,5,7,3};

//     int mn = INT_MAX;

//     int b[50] = {-1};

//     for(int i=0;i<7;i++){
//         if(b[a[i]] == -1){
//             b[a[i]] = i;
//         }
//         else{
//             if(b[a[i]] < mn){
//                 mn = b[a[i]];
//             }
//         }
//     }   


//     cout<<"value at index position "<<mn<<" is repeating first";
// return 0;
// }






// *********************************************
// ***********************************
// **********************






//ye pgm FIRST REPEATING ELEMENT and uska STARTING POSITION dono print kar raha hai

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int mn=INT_MAX;

//     int n;
//     cout<<endl<<"Enter the size of array: ";
//     cin>>n;

//     int a[n],val,last_index;
//     cout<<"Enter the elements into the array: ";
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }


//     const int N=50;
//     int b[N] = {-1};


//     for(int i=0;i<n;i++){
//         if(b[a[i]] == -1){
//             b[a[i]] = i;

//         }

//         else{
//             if(b[a[i]]<mn){                   // isme compare kar k hum dal rahe hai .....or usme apne se compare kar leta hai or store ho jat hai...bas
//                 mn = b[a[i]];            //index of a[i] is stored in this
//                 val = a[i];
//                 last_index = i;
//             }
//         }
//     }
//     cout<<"value at index "<<mn<<" is repeated first "<<val<<" "<<last_index;

//     // cout<<val<<" is the frist repeating element whose index of first occurence is smallest and is found at "<<mn<<" and "<<last_index;





//     return 0;
// }