#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;



// // to input a full line of string(sentence)
int main(){

//     string str;
//     //mehtod to take a single word input.
//     cin>>str;                           //this won't consider the word written after space.
    
//     string str1(5,"n");                 //this will print 5 times n;
//     cout<<str1<<endl;

//     string str2 = "Apnikaksa";          //this will print the word written under double quotes
//     cout<<str2;

//     //input from the user.
//     string str3;                        //taking input from the user .....here SPACING WILL BE CONSIDERD
//     getline(cin,str3)
//     cout<<str3<<endl;




// // *************FUNTIONS***********

//     //append function of string
    // string s1 = "fam";
//     string s2 = "ily";
//     s1.append(s2);                       //or s1 = s1 + s2;
//     cout<<s1<<endl;

//     // to access any particular character of the string
    // cout<<int(s1[1])<<endl;                         //this will print "a" from s1("fam")


//     // clear();
//     string s3 = "abcde fghijkl mnopqrst uvwxyz"
//     s3.clear();
//     cout<<s3;


//     //comparing two strings
//     string s4 = "abc";                        //if the strings are different then it will print 1, otherwise it will print 0(same)
//     string s5 = "xyfbdjbjdbgjdbsjgbz";

//     cout<<s5.compare(s4)<<endl;
//     if(s5.compare(s4) == 0){
//         cout<<"strings are equal"<<endl;
//     }
//     else{
//         cout<<"strings are not equal"<<endl;
//     }


//     //empty()
//     string s6 = "abcdef";
//     s6.clear();
//     cout<<s6<<endl;
//     if(s6.empty()){
//         cout<<"your string is empty"<<endl;
//     }


//     //erase()
//     string s7 = "nincompoop";
//     s7.erase(3,3);                             //it will erase from index no. 3 (till 3 characters)....
//     cout<<s7<<endl;                            //and after erasing data will automatically shift left.


//     //find()
//     cout<<s7.find("com")<<endl;                      //this will check whether the string "com" is present there or not...
//                                                // if yes then it will print the starting index
    

//     //insert()
//     cout<<s7.insert(2,"lol")<<endl;                  //this func will insert the given string in that index no. that is provided


//     //size() or length()
//     cout<<s7.size()<<endl;


//     //looping
//     for(int i=0;i<s7.length();i++){
//         cout<<s7[i]<<endl;
//     }


//     //substring()
//     cout<<s7.substr(6,4)<<endl;                     //this will print the substring starting from index 6 till 4 strings


//     //stoi()
//     string s8 = "786";
//     int x = stoi(s8);                               //this function will convert the STRING TO INTEGER
//     cout<<x<<endl;


//     //to_string()
//     int s9 = 796;
//     cout<<to_string(s9) + "2"<<endl;


//     //sort()                                         //for this u have to include a header file algorithm
//     string s10 = "gnjnagjjdngjehrhejth";
//     sort(s10.begin(),s10.end());                     //BEGIN will take the first character and END will take the null character
//     cout<<s10<<endl;

    // string s11="544421979";
    // sort(s11.begin(),s11.end(),greater<int>());
    // cout<<s11<<endl;


    // //LOWER TO UPPER &UPPER TO LOWER
    // string s="fndnkndnrnf";
    // transform(s.begin(),s.end(),s.begin(),::toupper);     
    // cout<<s<<endl;
    // transform(s.begin(),s.end(),s.begin(),::tolower);
    // cout<<s<<endl;



    // so

    // string s1="1234";
    // for(int i=0;i<3;i++){
    //     cout<<int(s1[i]);
    // }

    // cout<<s1[0];



   
    return 0;
}