#include<iostream>
#include<string>
using namespace std;

int main(){

    string s ,result_string="";
    int k=0; 
    int last_val = 0;

    cout<<"Enter any string: ";
    getline(cin,s);

    char a[150],arr[50];
    for(int i=0;i<150;i++){
        a[i] = -1;
    }

    
    for(int i=0;i<s.length();i++){
        int index_of_a = int(s[i]);                    //index_Of_a     me ascii value hona chahiye
        // cout<<index_of_a<<" ";                     //OK hai

        // 
        if(a[index_of_a] == -1){                              //hind  i s iksha
            // cout<<a[index_of_a]<<" ";
            // cout<<s[i]<<" ";
            a[index_of_a] = s[i];
            // cout<<a[index_of_a]<<" ";


        //     arr[k] = s[i];                           //neeche wala statement alternative hai isko v use kar sakata hai  line32 and 34
        //    // cout<<arr[k]<<endl;                    //cout wala statement sara baas check karne k liye hai
        //     k++;



            //or u can do is replace above two statements with a variable that will get appended with character that is in the loop.
            result_string += s[i];
            
        }
        else{
            continue;
        }

        // last_val = k;
    }

    cout<<result_string;

    // cout<<"string after removing duplicates is: ";
    // for(int i=0;i<last_val;i++){
    //     cout<<arr[i];
    // }


    return 0;
}