#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// int main(){

//     int n;
//         cout<<"Enter the size of the array: ";
//         cin>>n;

//         int a[n];
//         cout<<"Enter elements into the array with one missing number among the consecutive numbers: ";
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }             

//     return 0;
// }

int main(){

    //initializing all the index positon of the array with value -1;
    int n=150,k=0,count=0;
    int a[n],arr[n];                       //here i found error check the pgm once and re run it
    for(int i=0;i<n;i++){
        a[i] = -1;
    }

    string s;
    cout<<"Enter any string: ";
    getline(cin,s);


    //ab humko kya karna hai ki...string ka jo ascii value hai, array ke index value pe store kar denge(usme check karenge ki kya us index ka value -1 hai agar nin hai to counter ko increment karwa denge)

    s.erase(remove(s.begin(),s.end(),' '),s.end());
    // cout<<s;


    for(int i=0;i<s.length();i++){
        int index_of_a = int(s[i]);

        if(a[index_of_a] == -1){                              //abfje  bfej  bfe  faaanfanfanf
            a[index_of_a] = s[i];
            // count = 1;
        }
        else{
            // if(count == 2){
            //     continue;
            // }    s[i]++
            // count = 2;
            arr[k] = s[i];
            count = 0;
            k++;
        }
        
    }


    return 0;
}
//error hai uper wale me




// //correct one is this

// cout<<"Enter any string: ";
// getline(cin,s);
// for(int i=0;i<s.length();i++){
//     for(int j=i+1;j<s.length();j++){                         //abfdjfbjdb
//         if(a[i] == a[j]){
//             cout<<a[i]<<" ";
//         }

//     }
// }