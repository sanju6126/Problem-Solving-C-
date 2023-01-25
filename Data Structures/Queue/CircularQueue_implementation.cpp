#include<iostream>
using namespace std;

class circularQueue{
    private:
        int arr[5];
        int front , rear;
        int itemCount;

    public:
        circularQueue()
        {
            front = -1;
            rear = -1;
            itemCount = 0;
            for(int i=0;i<5;i++)
            {
                arr[i] = 0;
            }
        }    

        bool isFull()
        {
            if((rear+1)%5 == front)
                return true;
            else
                return false;    
        }

        bool isEmpty()
        {
            if(front == -1 && rear == -1)
                return true;
            else
                return false;    
        }

        void enqueue(int val)
        {
            if(isFull())
            {
                cout<<"Queue is fulled,can't insert new value"<<endl;
            }
            else if(isEmpty())
            {
                front = rear = 0;
                itemCount++;
            }
            else
            {
                rear = ((rear+1)%5);           //khali v ni hai or vara hua v ni hai to...us jaga ka position number dega jaha khali hai...
                itemCount++;
            }
            arr[rear] = val;
        }

        int dequeue()
        {   int x;
            if(isEmpty())
            {
                cout<<"Queue is Empty,can't dequeue"<<endl;
                
            }
            else if (front == rear)         //this condition will happen only when there is only one value...at the very starting and u want to dequeue(means only one value is enqueued and u want to dequeue it)
            {
                x = arr[front];
                arr[front] = 0;
                front = rear = -1;
                itemCount--;
            }
            else
            {
                x = arr[front];
                arr[front] = 0;
                front = ((front+1)%5);
                itemCount--;
            }
            return x;
            
        }

        int count()
        {
            return itemCount;
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
    circularQueue q1;
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
                cout<<"U can insert value"<<endl;
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
