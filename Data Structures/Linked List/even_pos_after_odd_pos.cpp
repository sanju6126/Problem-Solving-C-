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
    if(head!=NULL){
        n->next = head;
    }
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



// void EvenAfterOdd(node* &head){
    
//     node* odd = head;
//     node* even = head->next;
//     node* evenStart = head->next;
//     while(odd->next!=NULL && even->next!=NULL){
//         odd->next = even->next;
//         even->next = even->next->next;

//         odd = odd->next;
//         even = even->next;
//     }

//     odd->next = evenStart; 
// //hum code lkhe the even number of nodes k liye av tak ...jisme pehle se last node me null rahega

//     if(even->next == NULL)
//         even->next = NULL;
//     }
// }



void EvenAfterOdd(node* &head){
    node* odd =head;
    node* even = head->next;                  
    node* evenStart = head->next;

    while(odd->next!=NULL && even->next!=NULL){
        odd->next = even->next;
        odd = odd->next;
        
        if(odd->next!=NULL){
            even->next = odd->next;
            even = even->next;
        }
        else{             //odd ka next equals to NULL
            odd->next = evenStart;
            even->next = NULL;
        }
    }        

    odd->next = evenStart;
    // even->next = NULL;       //isko likh v skta hai or ni v kyu ki uper ka condition jab false ho chuka hoga..tab wo allready null detect kar liya hoga

}



void display(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}





int main(){
    node* head = NULL; 
     int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head,arr[i]);
    }
    display(head);

    EvenAfterOdd(head);
    display(head);
}