// #include<iostream>
// using namespace std;
// class student{
//         string name;
// 	public:
// 		int age;
// 		//string name;        //data members   public
// 		bool gender;

//         void setName(string s){  //this will come to play when we want to access the private data member from outside the class
//             name = s;
//         }
//         void getName(){
//             cout<<name<<endl;
//         }
	
// 		void printInfo(){
//             cout<<name<<" ";
//             cout<<age<<" ";
//             cout<<gender<<" ";

//             cout<<endl;
		
// 		}
// };

// int main(){
// 	student arr[3];          
	
// 	for(int i=0;i<3;i++){
// 		cout<<"name:";
// 		//cin>>arr[i].name;        //name will be accessable if it is public

// 		//if name is in PRIVATE then to access it we have to put that private member in a function within a class
//         //agar name ko access karna hai kahi bahar se to usko ek function me dalna hoga
//         //private member ko access karne k liye ??
//         //private member ko bahar se acces karna k liye??

//         //ek string variable lenge or usko pas kar denge wo function me jisme private data member present hai or usme initialize ho rha hai
//         string s;
//         cin>>s;
//         arr[i].setName(s);
//         cout<<"age:";
// 		cin>>arr[i].age;
// 		cout<<"gender:";
// 		cin>>arr[i].gender;
// 	}
	
// 	for(int i=0;i<3;i++){
// 		arr[i].printInfo();
// 	}

// 	return 0;
// }




// //OOP   => it's which binds data member and member function of the classes so that no other part of the code can access that data and functions.

// //CLASS => it's a user defined data type which has its own data member and member functions....which can be accessd by creating instance(object) of that class.

// //         CAR can be a class bcz there may be different brands of car which share some common propertis.(like speed limit,no. of wheels,mileage)
// //         Student can be a class bcz there may be different types of students sharing common props like(roll no,class no,usn no,marks)
// //         Pencil can be a class bcz there may be different brands of pencils and have some properties
// //         likely Reynolds pencil can be a class because there may be different types of that pencils  and they may share some common properties

// //         but a particular student can't be a class because there is no one like him,it itsel is a object.....so its a object

// //Object=> An Object is an identifiable entity with some characteristics and behaviour. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

// //Encapsulation => This is a type of data hiding....like making ur data private and people from ur own space can access it(i.e  its is accessable only from inside the class)
// //                 in a company, there are different sections like the accounts section, finance section, sales section etc. The finance section handles all the financial transactions and keeps records of all the data related to finance. 
// //                 Similarly, the sales section handles all the sales-related activities and keeps records of all the sales. Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month. 
// //                 In this case, he is not allowed to directly access the data of the sales section. He will first have to contact some other officer in the sales section and then request him to give the particular data. This is what encapsulation is
                   
// //                 like private data members can't be acccessd from outside the class......if u want to access it first u have to become the part of the class or 
// //                 another way is to access it throug the member function of the class(like telling the member functionof the class to bring it for u)

// // Abstraction =>  This also leeds to data hiding, i.e shoing only the essential part of the pgm that is useful....like if someone wants to apply a brake then he just have to find wher are the brakes.....he does not need to find out how the braking process will work out on 





#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout<<"Enter string: ";
    cin>>s;
    // cout<<s[1];

    int k = s.length();

    string s2=" ";
    for(int i=s.length()/2;i>0;i--){
        if(s[k] != s[i]){
            break;
        }                                    
        k++;

        

    string s2 = s;
    reverse(s.begin(),s.end());

        

        
    


    

    return 0;
}
