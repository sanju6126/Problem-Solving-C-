#include<iostream>
using namespace std;

class Vehicle{
    int registrationNo;
    int modelNo;
    
    public:
        Vehicle(int reg,int model){               //parameterised constructor
            registrationNo = reg;
            modelNo = model;

            cout<<"reg no.: "<<registrationNo<<endl;
            cout<<"model no: "<<modelNo<<endl;
        }
    

        //REGISTRATION NO GETTER SETTER
        int regGetter(){
            return registrationNo;
        }

        void regSetter(int reg){
            registrationNo = reg;
        }


        //MODEL NO GETTER SETTER
        int modGetter(){
            return modelNo;
        }

        void modSetter(int n){
            modelNo = n;
        }


};
class  car : public Vehicle{
    
    public:
        car(int x,int y):Vehicle( x,y){
            cout<<"car constructor called: ";
        }
};



int main(){
    // Vehicle obj(4,55);
    // cout<<"Registration No. is: "<<obj.regGetter()<<endl;
    // obj.regSetter(7077);
    // cout<<"New Registration no. is: "<<obj.regGetter()<<endl;

    // cout<<"Model No is: "<<obj.modGetter()<<endl;
    // obj.modSetter(778);
    // cout<<"New Model No is: "<<obj.modGetter()<<endl;


    car obj(0,1);
    

return 0;
}