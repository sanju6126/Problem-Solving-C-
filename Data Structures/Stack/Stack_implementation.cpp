#include<iostream>
#include<string>

using namespace std;

class stack{
      private:
        int top;
        int arr[5];
      
      public:
        stack()                        //constructor to initialize the initial top with -1..and to initialize all the with 0 value to the stack 
        {
            top = -1;
            for(int i = 0;i<5;i++)
            {
                arr[i] = 0;
            }
        }

        bool isEmpty()                  //return type is boolean because it will 0 or 1 if the stack is empty or not
        {
            if(top == -1)               //this will check if the top variable is still -1 that means there is no value inserted till now and the stack is empty
                return true;            //Empty hai
            else
                return false;            //(EMPTY NI HAI) means kuch vara hua hai lekin iska matlab ye ni ki FULL hai(ho v skta hai ni v...ye bas cjeck kar raha 
                                        // hai khali hai ki ni).....will return false if the stack consist of even one value..that obviously means stack is not empty..  
        }

        bool isFull()                   //this will check whether the stack is full or not
        {
            if(top == 4)                //if the top variable is allotted with 4 that means the stack is full
                return true;
            else 
                return false;  
        }

//*********the above functions were just for checking whether the stack is full or empty************
// ********now comes the main push and pop functions..where we will try to insert to the stack but before that we have to check whether the stack is full or empty

        void push(int val)
        {
            if(isFull())
            {
                cout<<"stack overflow"<<endl;          //if its full above function will return true....and it will display "STACK OVERFLOW"
            }
            else
            {
                top++;              //if its not true the above function will return false(that is stack is not full)..that means we can insert a value
                                    //if its not full we have to increment the top variable...so that it points to that empty location where the data has to be filled
                                    //suppose if the top is -1..then if u dont increment that value by one then it will store that value to thtat location only which will give us error
            
                arr[top] = val;     //fill that position that top is pointin with the value that is passed
            }
        }

        int pop()                   //here the return type is int bcz..we have to return that popped_value
        {
            if(isEmpty())
            {
                cout<<"stack underflow"<<endl;
            }
            else
            {
                int popped_value = arr[top];        //in this since stack follows the LIFO therefore it will pop the last value in the stack that has been inserted...and that time pop will be pointeing that only
                arr[top] = 0;                       //afte popping that value we have to fill that position with zero so that it dont take any garbage value
                top--;                              //and again we have to decrement top so that it points to below location(uske neeche wala)..jisme value hai...or agar ni hai to fir se top = -1 ho jayga...
                return popped_value;
            }
        }

        int count()                     // this function will just count no. of positions that are filled ......again int return type beacause we are returning
        {  
            return (top+1);             // since the indexing start st 0..suppose there is no value then top will be -1...and to ge the number 0 we have to add +1 to it.....suppose the top is pointing to index pos. 1..
                                        //.then there would total to 2 values (one at 0..and one at 1) ...thats why top + 1 is written
        }

        int peek(int pos)               //if u werite peek(1)..it will give u the value thats is present at the position 1..so we have to check first whether the stack is empty or not....if not empty then return that value that is in that position
        {
            if(isEmpty())
            {
                cout<<"stack underflow"<<endl;
                return 0;
            }
            else
            {
                return arr[pos];
            }
        }

        void change(int pos,int val)
        {
            arr[pos] = val;
            cout<<"value cahnged at location"<<pos<<endl; 
        }

        void display()
        {
            cout<<"All values in the stack are"<<endl;
            for(int i=4;i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
        }
             
             


};

int main()
{
    stack s1;
    int option,position,value;
    
    do
    {
        cout<<"What operation u want to perform,Enter 0 to exit."<<endl;
        cout<<"1.push()"<<endl;
        cout<<"2.pop()"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.peek()"<<endl;
        cout<<"6.count()"<<endl;
        cout<<"7.cahnge()"<<endl;
        cout<<"8.display()"<<endl;
        cout<<"9.clear screen"<<endl<<endl;

        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"Enter an item to push in the stack"<<endl;
            cin>>value;
            s1.push(value);
            break;
        case 2:
            cout<<"Pop function called-Popped value is: "<<s1.pop()<<endl;
            break;
        case 3:
            if(s1.isEmpty())
                cout<<"Stack is Empty"<<endl;
            else
                cout<<"Stack is not Empty"<<endl;
            break;  
        case 4:
            if(s1.isEmpty())
                cout<<"Stack is Full"<<endl;
            else
                cout<<"Stack is not Full"<<endl;
            break;                   
        case 5:
            cout<<"Enter the position of item u want to peek"<<endl;
            cin>>position;
            cout<<"peek function called: value at position"<<position<<" is "<<endl<<s1.peek(position)<<endl;
            break;
        case 6:
            cout<<"Count function called-number of items in the stack are: "<<s1.count()<<endl;
            break;
        case 7:
            cout<<"cahange func called"<<endl;
            cout<<"Enter pos. of item u want to change";
            cin>>position;
            cout<<endl;
            cout<<"Enter the new value ";
            cin>>value;
            s1.change(position,value);
            break;    
        case 8:
            cout<<"Display function called- "<<endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout<<"Enter proper option number"<<endl;
        }

    } while(option!=0);

    return 0;
    
}                         

  