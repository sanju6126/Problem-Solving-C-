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
    // if(head!=NULL){
    //     n->next = head;          //ye bahar v rakh skta hai ya andar v..condition ki jarrorat ni hai kyu ki agar head null hua phir v uski chalna hai...lekin jab node ban raha hoga tabhi usme null store ho jayga...or tum usme phir se null store ka raha hai ....to usse kuch ni hoga
    // }
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



void intersect(node* head1,node* head2,int pos){
    node* temp1 = head1;
    int count = 1;
//maan ke chalo pos 3 de diya to humko khabar rakhna hoga ki 
//mera pointer jo hai kaha tak pahucha hai..isi liye koi variable 
//chahiye hoga jisse POS ko compare kare..to iske liye COUNT ka use
// kiye hai...taki pata chal jay ki wo..pointer(temp1) us position tak
// pahuch gaya hai jaha pe humlog ko insert karne ka order mila hai
//(jo ki POS ka value batayega kaha intersect karwana hai)

    //head1 pe traversing 

    
    while(count!=pos){
        temp1 = temp1->next;
        
        count++;
        
    }

    //head2 per traverse karne ki baari
    node* temp2 = head2;
    while(temp2->next!=NULL){
        
        temp2=temp2->next;
    }
    
    //jab loop khatam ho jayga matlab pahuch gaya hai jagah pe..ab usko point karwa do..temp1 se
    
    temp2->next = temp1;
    
}


int length(node* head){
    int l = 0;
    node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        l++;
    }
    return l;
}

int intersection(node* &head1,node* &head2){
    int L1 = length(head1);
    int L2 = length(head2);
    int d= L1-L2;

    node* ptr1;
    node* ptr2;

    //assuming that L1 is bigger;
    ptr1 = head1;                     //ptr1 will point to the head of the bigger linked list..and ptr2 to the smaller LL;
    ptr2 = head2;

//taking the ptr1 to that position from where checking begins...(FOR PTR1 only)
    while(d!=0){

        if(ptr1 == NULL){
            return -1;                  //this means there is not intersection between the linked lists
        }
        ptr1 = ptr1->next;

        d--;
    }

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1 == ptr2){
            return ptr1->data;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;                     //there is no intersection between the linked lists.

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
    node* head1 = NULL;
    node* head2 = NULL;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head1,arr[i]);
    }
    
    // display(head1);

    insertAtTail(head2,9);
    insertAtTail(head2,10);
    // display(head2);

    intersect(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2)<<endl;


    return 0;
}