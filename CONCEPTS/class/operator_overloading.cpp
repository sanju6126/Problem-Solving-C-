#include<iostream>
using namespace std;

class complex{
    private:
        int real,img;
    
    public:
        complex(){                     //default empty constructor
            real=0;
            img=0;
        }

        complex(int r,int i){          //deafault parameterised constructor
            real=r;
            img=i;
        }

        //return type   operator(keyword that u have to use to overload the operator) +(which operator u are goning to overload)()
        complex operator +(complex c){
            complex temp;

            //since c1 function call kar raha hai therefore...waha sirf real likha hai
            temp.real=real+c.real;             //here real variable corresponds to c1.real and c.real corresponds to c2.real
            temp.img=img+c.img;                //because how compiler c3=c1+c2 is interpreted as is.....c1.add(c2).....so c2 is passed as  paramenter to this function which contains complex c type  of data-type.....so to access c2ka real...it used c.real

            return temp;
        }


        void print(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }


};



int main(){

    complex c1(5,4);
    complex c2(3,7);
    complex c3;

    //c1.add(c2)
    c3=c1+c2;       //since c1 and c2 data-type are user defined data-type (complex type) therefore, + operator doesn't know what to do with those variables......
    c3.print();     //....like in case of int c1 and int c2    int c3=c1+c2     ...here + operator knew what type of data-type c1 and c2 are...so 
                    //it went on to add both the values of variable and stored it to the variable c3; 

    
return 0;
}