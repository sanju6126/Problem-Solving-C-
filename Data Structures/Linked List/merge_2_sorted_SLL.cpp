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


//inserting at head
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    head = n;
}


//inserting at tail
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




//merge operation
node* merge(node* &head1,node* &head2){

    node* ptr1 = head1;
    node* ptr2 = head2;
    node* dummyNode = new node(-1);
    node* ptr3 = dummyNode;

    //jaha koi v ek pointer null ho jayga..waha humkko loop se bahar nikalna hai and doosra wala pointer jo null ni hua hai..uska pointer aage badhana hai and pointer-3 se attach karwate jana hai..
    while(ptr1!=NULL && ptr2!=NULL){
        //check karenge if upper wala chota hai..agar chota hai to usko dummy node se point karwa do(means ptr3->next = ptr1) and ptr1 = ptr1->next kar do..and also ptr3 = ptr3->next karwa do

        if(ptr1->data < ptr2->data){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
            ptr3 = ptr3->next;
        }   
        else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next; 
            ptr3 = ptr3->next;
        }
    }
    //suppose ptr1 ko null milgaya...to us time humko ptr2 ko chalana padte rahega jab tak usko null ni mil jata hai...or ptr3->next = p2 karna hoga...nd p2 ko aage badhana hoga and p3 ko v aage badhana hoga..
    while(ptr2!=NULL){
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }
    //suppose ptr2 ko null  mil gaya ho ..tab humko ptr1 ko chalate rehna hoga jab tak usko null ni mil jata hai
    while(ptr1!=NULL){
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }

    return dummyNode->next;
    
}

//using recursion 
node* mergeRecursion(node* &head1,node* head2){
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }


    node* result;
    if(head1->data < head2->data){
        result = head1;
        head1->next = mergeRecursion(head1->next,head2);
    }
    else{
        result = head2;
        head2->next = mergeRecursion(head1,head2->next);
    }
    return result;
}


//display operation
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}



//main function
int main(){
    node* head1=NULL;
    node* head2=NULL;
    int arr[]={1,4,5,7};
    for(int i=0;i<4;i++){
        insertAtTail(head1,arr[i]);
    }
    int arr1[] = {2,3,6};
    for(int i=0;i<3;i++){
        insertAtTail(head2,arr1[i]);
    }

    display(head1);
    display(head2);

    // node* newHead = merge(head1,head2);        //simple method(basic)
    node* newHead = mergeRecursion(head1,head2);  //recursion method(easy)
    display(newHead);

}