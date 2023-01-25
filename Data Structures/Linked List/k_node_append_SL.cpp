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
    head = n;
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

}



void display(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


//finding the length of the linked list
int length(node* head){

    int l=0;
    node* temp = head;
    while(temp!=NULL){
        l++; 
        temp = temp->next;
    }
    return l;                       //l will return us the length of the linked list
}




node* kappend(node* &head,int k){              //k is the position from where u want to append 
    node* newTail;
    node* newHead;
    node* temp = head;

    int l = length(head);
    k = k%l; 
    int count = 1;
    while(temp->next!=NULL){              //hum chahte hai ki tail jjo hai at the end of linked list me ja ke ruke..
        if(count == l-k){
            newTail = temp;
        }
        if(count == l-k+1){
            newHead = temp;
        }


        temp = temp->next;
        count++;
         
    }


    newTail->next = NULL;
    temp->next = head;           //last wale node ka nexta ab head ka address store karega..

    return newHead;
}


int main(){
    node* head = NULL;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head,arr[i]);
    }
    display(head);

    node* newHead = kappend(head,3);
    display(newHead);


    return 0;
}


