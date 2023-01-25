#include<iostream>
using namespace std;
int main(){                                                 //sara sub array print karega..apne sum ke sath  or phir 
                                                            // LAST me wo SUB_ARRAY or uska SUM print karega jiska SUM sabse ZADA hoga

    int i,j,k;
    int sum = 0;
    // int arr[]={1,2,3,4,5};
    // int n=5;

    int c=-199;

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n],b1[n],b2[n];
    cout<<"Enter the elements into the array: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
 
    for(i=0;i<n;i++){

        for(j=i;j<n;j++){  

            for(k=i;k<=j;k++){
               
                cout<<arr[k]<<" ";

                // yeha pe aek naya aray me sstore karwange..jo values aayga or usko sum to neeche calculate hoga hi,,,,or neche comparison hoga hi
                sum = sum + arr[k];
                b1[k] = arr[k];
            }
            cout<<"---> sum = "<<sum;
            
            
            if(sum > c){
                c = sum;
                for(int i=0;i<k;i++){
                    b2[i] = b1[i];
                }
            }

            for(int i=0;i<k;i++){
                b1[i] = 0;
            }

            // if(sum > c){
            //     c = sum;
            // }

            cout<<endl;

            sum = 0;        //jab jab new line hoga tab tab sum ka value fir se zero ho jayga kyu ki har bar sub array alag hoga or uska sum change ho jayga
        }

        cout<<endl;
    }


    cout<<"Biggest Sub_Array and it's Sum is: ";
    for(int i=0;i<n;i++){
        cout<<b2[i]<<" ";
    }
    cout<<"= "<<c<<endl<<endl;

    return 0;
}

// ek ary me store karwa denge or usko tav change karenge agar....us array ka sum agar naya wala aray ka sum se zada hoag tabhi
//agar sum mx se bada hoga tabhi tum













//Alternative of printing the sub array..(only the sub array)

        // int brr[n];
        // for(int i=0;i<n;i++){
            
        //     for(int b=0;b<n;b++){              //this loop is for making the elements of brr array 0;
        //         brr[b]=0;
        //     }
        //     for(int j=i;j<n;j++){
        //         brr[j]=arr[j];
                

        //         for(k=i;k<=j;k++){           //this loop is for printing the brr array;
        //             cout<<brr[k]<<" ";
        //         }
        //         cout<<endl;
        //     }
        //     cout<<endl;
        // }


    // return 0;             ISKO ACTIVATE KARNE K LIYE UPPER WALE RETUN OR } COMMENT DOWN KARO
// }







// if u want to print just the sum of the sub array not the sub array..

// for(int i=0;i<n;i++){
//     sum = 0
//     for(int j=i;j<n;j++){
//         sum = sum + arr[j];
//         cout<<sum<<endl;
//     }
// }


