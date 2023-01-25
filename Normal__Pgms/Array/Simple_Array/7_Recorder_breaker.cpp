#include<iostream>
using namespace std;

int main(){

    int flag_1 = 0;
    int flag_2 = 0;
    int prev_flag = 0;
    int min = -1999;
    int record_breaking_day = 0;

    int n;
    cout<<endl<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements into the array: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

    for(int i=0;i<n;i++){

        if(i == n-1){
            if(arr[i] > prev_flag){
                record_breaking_day++;

                // cout<<"Total Record_breaking_days are: "<<record_breaking_day;
            }

            cout<<"Total Record_breaking_days are: "<<record_breaking_day;

            return 0;
        }

        if(arr[i] > min){
            flag_1 = 1;

        }
        else{
            flag_1 = 0;
        }

        if(arr[i] > arr[i+1]){
            flag_2 = 1;
        }
        else{
            flag_2 = 0;
        }

        if(flag_1 == flag_2){

            if(i == 0){
                prev_flag = arr[i];
                record_breaking_day++;
            }
            else{
                if(arr[i] > prev_flag){

                    record_breaking_day++;
                    prev_flag = arr[i];
                }
            }

        }




        min = arr[i];     //last me isko
    }



    // return 0;

}




    // ALTERNATIVE METHOD;

    // int main{

    // int record_breaking_day = 0;
    // int mx = -1;

    // for(int i = 0;i<n;i++){

    //     if(a[i]>mx && a[i] > a[i+1]){
    //         record_breaking_day++;
    //     }

    //     mx = max(mx,a[i]);
    // }

    // cout<<"Total Record_breaking_days are: "<<record_breaking_day;

    // return 0;

    // }