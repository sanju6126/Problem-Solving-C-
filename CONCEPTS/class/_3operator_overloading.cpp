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

        //CONSTRUCTOR
        student(student &a){
            cout<<"Copy Constructor";
            name = a.name;
            age = a.age;
            gender = a.gender;
        }

        //DESTRUCTOR
        ~student(){
            cout<<"Destructor called"<<endl;
        }


        //OPERATOR OVERLOADING
        bool operator == (student &a){
            if(name==a.name && age==a.age && gender==a.gender){
                return true;
            }
            else{
                return false;
            }
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

    student a("sanju",18,0);
    student b;
    student c(a); //COPY CONSTRUCTOR  ---- it can be also written as student c=a
                  //it's use is to copy all the values of the obj "a" to obj "c"
	
	if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }

	return 0;
}