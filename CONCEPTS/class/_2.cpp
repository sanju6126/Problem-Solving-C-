#include<iostream>
using namespace std;
class student{
        string name;
	public:
		int age;
		bool gender;


        student(){
            cout<<"default constructor"<<endl;
        }

        student(string s,int umr,bool gen){
            cout<<"parameterised constructor"<<endl; 
            name = s;
            age = umr;
            gender = gen;
        }

        student(student &a){
            cout<<"Copy Constructor";
            name = a.name;
            age = a.age;
            gender = a.gender;
        }

        //CONSTRUCTORS
        //there are two type of constructors...SHALLOW COPY and DEEP COPY
        //SHALLOW COPY(Default copy constructor)---suppose ek object hai(obj 1)...and uske kuch data members hai(p,q,r) hai kisi location pe(x,y,z)...to isme kya hota hai ki jab ye constructor call hota hai to....iske data members(values of xyz) copy ho jate hai,lekin uske location(x,y,z) copy ni ho pata hai
        //DEEP COPY(own copy constructor)---it does all that the SHALLOW copy don't do.


        //DESTRUCTORS
        //this gets called everytime when work of one object gets over.....(when it exist the main function everytime)
        //so in this program it will be called three times

        //NOTE: for STATICALLY ALLOCATED MEMORY destructor gets called AUTOMATICALLY
        //      But, for DYNAMICALLY ALLOCATED MEMORY destructor has to be called MANUALLY 
        ~student(){
            cout<<"Destructor called"<<endl;
        }

        void setName(string s){        //this wil come to play when u want to access this private member from outside the class
            name = s;
        }
        void getName(){
            cout<<name<<endl;
        }
	
		void printInfo(){
            cout<<name<<" ";
            cout<<age<<" ";
            cout<<gender<<" ";

            cout<<endl;
		
		}
};

int main(){
	//it would have been great if instead of doing all those stuff of initializing the values or taking it from the user
    //we would have directly passed it as parameter while making that object.

    student a("sanju",18,0);
    student b;
    student c(a); //COPY CONSTRUCTOR  ---- it can be also written as student c=a
                  //it's use is to copy all the values of the obj "a" to obj "c"
	
	student *d = new student;  //dynalmically allocated object/memory
    delete d;                  //this will delete the dynamically created obj d

	return 0;
}

