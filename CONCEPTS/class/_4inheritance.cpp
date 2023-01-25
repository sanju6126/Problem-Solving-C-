// // agar koi class B ksi class A ko privately inherit kar rha hai to....class A ka sara public and protected data members class B ke private me aajayga....lekin class B ka object us sabko(all the data members jo wo inherit kiya hai) class ke bahar access ni kar payga.....kyuki private me jayga to private data members class ke bahar accessable ni hote hai..
//agar class B ksi class A ko publically inherit kar rha hai to .....class A ka sara public data members class B ke public  me aajayga....or class B ka obejct us sabko access kar payga



//POLYMORPHISM
//polymorphism...are of two types cmopile time and run time...
//      compile time-----operator overloading , function overloading
//      run time-----virtual function

#include<iostream>
using namespace std;
class base{
    public:
        void print(){
            cout<<"this is the base class print func";
        }

        void display(){
            cout<<"this is the derived class display func";
        }

};

class derived : public base{
    public:
        void print(){
            cout<<"this is the derived class print func";
        }
        void display(){
            cout<<"this is the derived class print func";
        }
};

int main(){
    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr -> display();


    //during inheritance suppose if there is function named as fun() in the base class as well as in its derived class...
    //so during object creation , compiler will get confuse which one to choose...so for that we use VIRTUAL keyword...
    //in whichever function VIRTUAL keyword is used that function didn't gets called...


    //upon calling the above two function , baseptr that too after storing the address of derived class obj(d),it calls the it's own member function......
    //but VIRTUAL FUNCTION comes to play when we assign VIRTUAL keyword before the print function of the base class.....i.e  virtual void print()
    //that will transfer the flow to print the print function of the derived class....

    return 0;
}