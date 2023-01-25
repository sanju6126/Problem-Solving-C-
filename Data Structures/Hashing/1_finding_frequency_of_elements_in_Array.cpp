#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>

// #define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }



    //couting process
    map<int,int> freq;
    rep(i,0,n){
        freq[a[i]]++;

        //actually me ye map kar raha hai....ek taraf number(array wala)....and ek taraf uska count.....agar
        //array me 5 4 8 7 1 6 7 4 ye hai to wo ...5--->1 kar dega pehle....phir aage badhega  4--->1 kar dega...uske
        //uske baad phir se agar usko 5 mila to wo check karega map me kya 5 pehle aa chuka hai...
        //agar aa chuka hoga to 5--->2 kar dega.... ......

        //or phir jab neeche display karega or itrator bana ke loop chalayga to us time acha se har number ka count print kar dega


        cout<<freq[a[i]]<<" ";        //ye har number ka count print kar rah hai....jab jab number per jaa rha hai
    }                                 //ye bas check karne ka liye hai

    cout<<endl;

    //displaying
    map<int,int> :: iterator it;    //making an iterator to iterate over the map
    for(it = freq.begin();it!=freq.end();it++){
        cout<<it->ff <<" "<< it->ss <<endl;
    }

    // or

    // for (auto i = m.begin(); i != m.end(); i++)
    //     cout << i->first << "       " << i->second
    //          << endl;

return 0;
}

// ---------------------INTEGER COUNT--------------------------------------------









// ---------------------STRING COUNT----------------------------------------------

// #include<iostream>
// #include<map>
// #include<unordered_map>
// using namespace std;

// // #define vi vector<int>
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define ff first
// #define ss second


// int main(){
//     string s;
//     cin>>s;

//     int n=s.length();

//     map<char,int> freq;
//     rep(i,0,n){
//         freq[s[i]]++;
//     }


//     map<char,int> :: iterator it;
//     for(it=freq.begin();it!=freq.end();it++){
//         cout<<it->ff<< " "<<it->ss<<endl;
//     }

//          or

//      for (auto i = m.begin(); i != m.end(); i++)
//         cout << i->first << "       " << i->second
//              << endl;    


// return 0;
// }








// ---------------------------------------------------ALTERNATIVE OF STRING COUNT WITHOUT MAPPING------------------------------------


// #include<iostream> 
// using namespace std;

// int main()
// {
//     //Initializing variables.
//     char str[100]="prepinsta";
//     int i;
//     int freq[256] = {0};
    
//     //Calculating frequency of each character.
//     for(i = 0; str[i] != '\0'; i++)
//     {
//         freq[str[i]]++;

//         cout<<freq[str[i]]<<" ";
//     }

    
//     //Printing frequency of each character.
//     for(i = 0; i < 256; i++)
//     {
//         if(freq[i] != 0)
//         {
//            cout<<"The frequency of "<<char(i)<<" is "<<freq[i]<<endl;
//         }
//     }
//     return 0;
// }