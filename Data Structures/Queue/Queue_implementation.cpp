#include<iostream>
using namespace std;

class Queue{
     private:
        int arr[5];
        int front;
        int rear;

    public:
        Queue()
        {
            front = -1;
            rear = -1;
            for(int i=0;i<5;i++)
            {
                arr[i] = 0;
            }
        }

        bool isEmpty()
        {
            if(front == -1 && rear == -1)
                return true;
            else
                return false; 
        }

        bool isFull()
        {
            if(rear == 4)
                return true;
            else    
                return false;    
        }

        void enqueue(int val)
        {
            if(isFull())
            {
                cout<<"Queue is full,can't insert new value";
                return;
            }
            //FULL NI HAI,EMPTY HAI...empty hai to front and rear -1 hoga...to usko  00 karo..taki new value enter ho pay usme
            else if(isEmpty())
            {
                front = rear = 0;
            }
            //agar poora empty v ni hai to.....rear pehle jo value insert hua hoga usko point kar raha hoga...to usko increment karo takin new value new location pe insert ho pay
            else
            {
                rear++;               //LANA PAD RAHA HAI PINTER KO TAKI NEW VALUE INSERT HO QUEUE ME

            }
            arr[rear] = val;           //this statement could have been written inside the elseif and else statement separately also...
        }
        
        int dequeue()
        {   int x;
            if(isEmpty())
            {
                cout<<"Queue is empty,can't remove any value";
                return 0;
            }
            else if(front == rear)
            {
                x = arr[front];
                arr[front] = 0;
                front = rear = -1;
                
            }
            else
            {
                x = arr[front];
                arr[front] = 0;
                front++;
                
            }
            return x;
        }

        int count()
        {
            return (rear - front + 1);
        }

        void display()
        {
            cout<<"All values in the queue are"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<arr[i]<<" ";
            }
            // cout<<endl<<endl<<endl;
        }
    
};

int main()
{
    Queue q1;
    int option,value;

    do
    {
        cout<<endl<<endl<<"What operation u want to perform,Enter 0 to exit."<<endl;
        cout<<"1.enqueue()"<<endl;
        cout<<"2.dequeue()"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.count()"<<endl;
        cout<<"6.display()"<<endl;
        cout<<"7.clear screen"<<endl<<endl;

        cin>>option;

        switch (option)
        {
        case 1:
            cout<<"Enter an item to queue"<<endl;
            cin>>value;
            q1.enqueue(value);
            break;
        case 2:
            cout<<"Dequeue function called: "<<q1.dequeue()<<endl;
            break;
        case 3:
            if(q1.isEmpty())
                cout<<"Queue is Empty"<<endl;
            else
                cout<<"Queue is not Empty,U can insert value"<<endl;
            break;  
        case 4:
            if(q1.isFull())
                cout<<"Queue is Full"<<endl;
            else
                cout<<"Queue is not Full,U can insert value"<<endl;
            break;                   
        case 5:
            cout<<"Count function called-number of items in the queue are: "<<q1.count()<<endl;
            break;
 
        case 6:
            cout<<"Display function called- "<<endl;
            q1.display();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout<<"Enter proper option number"<<endl;
        }
        
    } while (option!=0);
    
}
