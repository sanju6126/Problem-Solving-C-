// // #include<iostream>
// // using namespace std;
// //  int manin(){

// //      string s1;
// //      cout<<"Enter string 1: ";
// //      cin>>s1;
// //      string s2;
// //      cout<<"Enter string 2: ";
// //      cin>>s2;

// //     bool flag;
// //     if(s1.length()==s2.length()){                              //cdefg         //gfcdh
// //         for(int i=0;i<s1.length();i++){
// //             flag = false;
// //             for(int j=0;j<s2.length();j++){
// //                 if(s1[i]==s2[j]){
// //                     flag = true;
// //                     break;
// //                 }
// //             }

// //             if(flag != true){       //ni mila word
                
// //                 break;
// //             }
// //         }

// //         if(flag != true){
// //             cout<<"can't be formed";
// //         }
// //         else{
// //             cout<<"possible";
// //         }



// //     }
// //     else{
// //         cout<<"Can't be formed: lengths are not equal!! ";
// //     }
     


// //      return 0;
// //  }










// #include<iostream>
// using namespace std;

// int main(){
//     int a[5] = {4,5,7,5,6};
//     int count=1;

//     for(int i=0;i<5;i++){
//         count=1;
//         for(int j=0;j<5;j++){        //sara chez sahi hai bas humko ye check karna hoga kya wo number peeche aa chuka hai 
//             if(a[i] == a[j]){
//                 count++;
                
//             }
//             else{
//                 continue;
//             }
//         }
//         if(count == 1){
//             cout<<a[i];
//         }
//     }

//     return 0;
// }








// #include <iostream>
// using namespace std;




// int non_repeating_elements(int arr[], int n)
// {
// int i,j;
// int count = 1;

// for(i = 0; i < n; i++)
// {                                                   //4 5 4 6 5
// for(j = 0; j < n; j++)
// {
// if(arr[i] == arr[j] && i != j)
// break;
// }
// if(j == n )
// {
// cout << "\nNon-repeating element [" << count << "]" << " : " << arr[i] << endl;
// ++count;
// }
// }
// return -1;
// }





// int main()
// {
// int n,i;
// cout << "\nEnter the number of elements : ";
// cin >> n;
// int arr[n];
// cout << "\nInput the array elements : ";
// for(i = 0; i < n; i++)
// {
// cin >> arr[i];
// }
// non_repeating_elements(arr, n);
// return 0;
// }



#include<iostream>
using namespace std;

int main(){

    int n,i;
cout << "\nEnter the number of elements : ";
cin >> n;

int a[n];
cout << "\nInput the array elements : ";
for(i = 0; i < n; i++)
{
    cin >> a[i];
}

int count =1;
for(int i=0;i<n;i++){
    count = 1;
    for(int j=0;j<n;j++){
        if(i==j){
            continue;
        }

        if(a[i] == a[j]){
            count++;
            break;
        }
        if(a[i] != a[j]){
            continue;
        }
    }

    if(count== 1){
        cout<<a[i];
    }
}

    return 0;
}


