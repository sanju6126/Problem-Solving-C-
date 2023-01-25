#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printPairs(int a[],int n,int sum){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        //1 me kitna(x) add kare ki wo 16(sum) dede ==> 1+x = 16 => x=16-1 or 16-a[i];
        int temp = sum-a[i];
        if(s.count(temp)){
            cout << "Pair with given sum "
                 << sum << " is (" << a[i] << ","
                    << temp << ")" << endl;
        }

        s.insert(a[i]);
    }

}


int main(){

    //we just have to find which amonth the given elements will give us the sum defined by the user
    
    //*****Approach*****
    //we have to check for the first element ki is first index ke element me kya(x) + kare ki humko wo sum ke equal de de
    //suppose sum=16 chahiye...to ye 2 taraf se mil skta hai ..array element hai 4....to humko yaa to isme +12(x) karna hoga ya to 20(x)-4 = 16 hoga..
    //to + and - dono method se answer nikal skta hai to ek method use karte hai + wala and x nikalte hai and wo x ko check karte hai ki wo element array me present hai ki ni.

    int A[] = { -1, 4, 45, 6, 10, -8 };
    int n = -9;
    int arr_size = sizeof(A) / sizeof(A[0]);
 
    // Function calling
    printPairs(A, arr_size, n);


    return 0;
}