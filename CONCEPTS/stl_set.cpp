#include<iostream>
// #include<set>
#include<map>
using namespace std;

int main(){

    // set<int> s;
    // s.insert(5);
    // s.insert(4);
    // s.insert(9);
    // s.insert(7);
    // s.insert(5);

    // for(auto i:s){
    //     cout<<i<<" ";
    // }

    // cout<<s.count(5);
    // // s.erase(s.begin(),s.end());

    // // for(auto i:s){
    // //     cout<<i<<" ";
    // // }



    ////MAP
    map<int,string> s;
    s.insert({5,"bheem"});
    s.insert({13,"true"});
    s.insert({6,"rahul"});
    s.insert({1,"babbar"});    
    s.insert({0,"kumar"});

    for(auto i:s){
        cout<<i.first<<" "<<i.second<<endl;
    }



    auto it = s.find(5);
    for(auto i = it;i!=s.end();i++){
        cout<<(*i).first<<endl;
    }


    return 0;
}