#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;
    
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }    
};


void insertAtHead(node* &head,int val){      //head carries address
    node* n = new node(val);
    n->next = head;         //if called from insertAtTail ,head = NULL   , first node hai to uska next ko null karwana hi padega

    if(head!=NULL){          //..............direct called this func..and nodes allreay exist
        head->prev = n;      //kisko point karega n ko
    }
    
    // n->prev = NULL;      //this is not necessary..bcz at the time of making of new node it would have allready stored its previous = NULL
    head = n;               //head kisko point karega n ko       POINTER TO POINTER HO SKTA HAI

}



void insertAtTail(node* &head,int val){

    if(head == NULL){
        insertAtHead(head,val);
        return;
    }

    node* n = new node(val);
    node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}



void deleteHead(node* &head){
    node* todelete = head;
    
    head = head->next;
    head->prev = NULL;

    delete todelete;
}

//DELETION PROCESS
void deletion(node* &head,int pos){

    if(pos == 1){
        deleteHead(head);
        return;
    }


    node*temp = head;
    int count = 1;

    while(temp!=NULL && count!=pos){
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;

    //for end case ///this will not be applicable in endcase at that time only above code will be applicable
    if(temp->next!=NULL){
        temp->next->prev = temp->prev;
    }    

    delete temp;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}




int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);

    insertAtHead(head,6);
    display(head);

    deletion(head,3);
    display(head);

    deletion(head,1);
    display(head);

}