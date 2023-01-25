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


//inisertion at head
void insertAtHead(node* &head,int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        head->next = head;
    }

    //if head is not null..there allready exist nodes and u want to insertAtHead of the linked list
   
    
    node*temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
    
}


//insertion at tail
void insertAtTail(node* &head,int val){

    if(head == NULL){
        insertAtHead(head,val);
        return;
    }

    node* n = new node(val);
    node* temp = head;

    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}



void deleteHead(node* &head){

    node* todelete = head;
    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    head = head->next;

    delete todelete;
}



void deletion(node* &head,int pos){

    if(pos == 1){
        deleteHead(head);
        return;
    }

    node* temp = head;
    int count = 1;

    while(count!=pos-1){
        temp = temp->next;
        count++;
    }

    node* deleteNode = temp->next;
    temp->next = temp->next->next;

    delete deleteNode;
}

//displaying function
void display(node* head){
    node* temp = head;

    do
    {
        cout<<temp->data<<" ";
       temp = temp->next;
    } while (temp!=head);

    cout<<endl;
    
}

int main(){
    node* head = NULL;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head,arr[i]);
    }
    display(head);

    insertAtHead(head,7);
    display(head);

    deletion(head,1);
    display(head);

    return 0;
}
