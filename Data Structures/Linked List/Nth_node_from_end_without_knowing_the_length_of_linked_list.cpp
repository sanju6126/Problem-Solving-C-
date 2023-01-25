#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }

};

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;          //head, jo ki pehle null hai
    head = n;                //head ek pointer hai to ...ab wo point karega newly made node ko

}   

void insertAtTail(node* &head,int val){
    if(head == NULL){
        insertAtHead(head,val);          //agar head node present ni rha to..pehle insertAtHead ko call karega or node banayga

        return;
    }
    else{
        node* n = new node(val);
        node* temp=head; //iterator

        // jab tak temp->next , null na ho jata hai tab tak temp= temp->next karte raho
        while(temp->next!=NULL){       
            temp = temp->next;
        }
        //or jab last node tak pahuch jayga(matlab temp->next, null ho jayga)
        temp->next = n;
        n->next = NULL;


    }

}

void nthFromEnd(node* &head,int n){
    node* ref_ptr = head;
    node* main_ptr = head;

    if(head == NULL){
        cout<<"There is no node in the list!!";
    }
    else{ //n=1 rha to loop se bahar ho jayga.......n=2 rha to loop me enter karega
        for(int i=1;i<n;i++){           //maan ke chalo to n=2 dal diya or list  me 1 hi node hai   and ....ye mano ki NULL v ek NODE hota hai
            ref_ptr = ref_ptr->next;    //to pehle se ref_ptr head ko point kar rha tha ..or uska NEXT (ref_ptr ka next) NULL hai...to 
            if(ref_ptr==NULL){          //yaha jab i=1 ke liye chalega to, ref_ptr jo hai ref_ptr ka next ko point karne lagega(by the statement ref_ptr=ref+ptr->next).....jo ki NULL hai
                cout<<n<<" is bigger than the number of nodes present in the linked list";
                return;
            }
        }

        while(ref_ptr->next != NULL && ref_ptr!=NULL){                 //ref_ptr!=Null  condition isiliye lagega kyuki agar tumko last wala index ka value chahiye hoga tab kaam karega
            ref_ptr = ref_ptr->next;                                   //BAS ref_ptr->next!=NULL likhte to wo last wala position ko check karta uska next null hota hai to waha exit kar deta 
            main_ptr = main_ptr->next;

            
        }

        cout<<"\nthe value at index "<<n<<" is "<<main_ptr->data;
    }
}



void display(node* head){
    node* temp = head;            //temp pointer pehle point karega head ko

    //agar temp->next!=null kar denge to....wo last node pe aane ke baad wo loop se bahar nikal jayga, bina last node ka value print kiye
    while(temp!=NULL){                     //yaha temp!=null ....isiliye hoga kyuki...maan ke chalo list me bas ekhi node hai, 
        cout<<temp->data<<"->";            //to us time agar tum ye likh deta ki TEMP->NEXT!=NULL ...to wo loop me andar aane se pehle hi exit kar dega 
        temp = temp->next;                 //agar TEMP!=NULL likhenge to......temp pehle head ko point kar raha hoga.....uske baad list khatam ho jayga
    }                                      //or phir TEMP null ho jayga.....kyuki uske baad koi node hi ni hai isiliye.... 
}



int main(){
    node* head = NULL;

    // insertAtTail(head,10);
    

    for(int i=60;i>=10;i=i-10){
        insertAtTail(head,i);
    }

    

    int x;
    cout<<"Enter the position from where u want the data: ";
    cin>>x;

    display(head);

    nthFromEnd(head,x);



    return 0;
}





// What is the difference between ptr != null and PTR -> next != null?
// while(ptr != NULL) will iterate on all your linked list where while(ptr->next != NULL) will skip the last element. 
// The second solution is useful when you want to access your last node to add a new element at the end of the list for example.



//maan ke chalo 2 nodes hai linked list me or 2nd wala node jo hai NULL ko point karega
//let head jo hai 2nd wala node ko point kar rha hai
//to isme HEAD abhi tak NULL ni hua hai
//HEAD ka null  hona matlab wo ksi ko bhi point ni kar rha hai hoga