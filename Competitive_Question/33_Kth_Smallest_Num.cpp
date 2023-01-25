#include<iostream>
#include<map>
using namespace std;

int solve(map<int,int> mp,int k){

    int frq=0;
    for(auto it=mp.begin();it!=mp.end();it++){    //this method works only when duplicates are there.....
                                                  //But if Duplicates are not there then u just  return the kth element in the Map....
                                                  //no need to calculate the frequency that time.

        frq += it->second;                        //means corresponding count of that element

        if(frq >= k){           //3 3 3 3 3 3 4 4 5 OR 3 4 5 6 7 8 9    ...if 1st count 6 hai and k=5 hai to uska KEY 3 return karega na.
            return it->first;
        }
    }

    return -1;             //means if the k value is grater than the Size of the Array.

}

int main(){

    int a[] = {3,4, 8, 3 ,5 ,9,4,3,7,1,8} ;
    int n = sizeof(a)/sizeof(a[0]);

    int k;
    cin>>k;

    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }

    cout<<solve(mp,k);

    return 0;

}