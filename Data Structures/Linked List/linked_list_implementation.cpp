#include<iostream>
using namespace std;


class node{
    public:
        int data;
        node* next;                  //pointer jo hai next node ko point kar raha hai(node to khud ek class hai to uska type hoga node) to uska type kya ho gaya node*.(means ek class apne aap ko hi point kar raha hai)

        node(int val){               //constructor
            data = val;
            next = NULL;
        }
};



//insertion at head
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;  //n->next ...null ko point karega      //new node ka next ko point kara do....purane wale list ka first node se..(jisme head jo hai us node ka address carry kar raha tha)
    head = n;                                               //now ab head ko move kara do peeche jo new node bana hai...kyuki ab wo first node ba chuka hai...list ka
}



void insertAtTail(node* &head , int val){            //head jo hai us node ka address ko carry kar raha hai
    node* n = new node(val);

    if(head == NULL){
        head = n;                                    //upper me kya kar raha hai head & se...head address carry kar raha hai
        return;
    }

    //now we have to make a iterator who can traverse through the linked list
    node* temp = head;                       //temp jo hai head ko point kar raha hai

    //iterator ban gaya ab iterate karo
    while(temp->next!= NULL){
        temp = temp->next;            //temp ko ek step aage badahao
    }
    //jab is loop se bahar aagaye iska matlab hai k tum list ke last element tak pahuch gaye ho..
    
    //last wale node ka next me new node jo bana hai ukso daal do
    temp->next = n;



    // what if u dont have any head node..then u have to make that also..
    // then only u can use the head variables and all that...then u will 
    // able to traverse through the list...so that should be checked first 
    // that..if head allready exists or not..if it exist then go forward 
    // and traverse

}






//displaying the list
void display(node* head){  
    // cout<<head<<endl;                //************jst checking head kya stire kar raha hai
    node* temp = head;                     //last me jo tum null dala hai cout me..usko check karega agar wo mil jayga to loop band ho jayga
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;                  //first display karo or aage badho
    }
    cout<<"NULL"<<endl;
}



//deleting head
void deleteHead(node* &head){
    node* deleteHead = head;
    head = head->next;

    delete deleteHead;

    cout<<"Head deleted"<<endl;
}



//deletion  process
void deletion(node* &head,int val){

    //if head does not exist
    if(head == NULL){
        cout<<"nothing to delete"<<endl;
        return;
    }

    //if only head exist in the list
    if(head->next == NULL){
        deleteHead(head);
        // cout<<"head deleted"<<endl;
        return;
    }

    //if u want to delete any other node except head
    node* temp  = head;
    while(temp->next->data!= val){
        temp = temp->next;
    }
    node* todelete = temp->next;              //temp deletion node ka pehle wala node ko point kar rha hai...or uska next uska address store kar raha hai node ko delete karna hai
    temp->next = temp->next->next;           //temp jisko point kar rha tha uska next ko...deletion node ka next(delete hone wala node apne agle node ka address next me store ka raha hoga) se point karwa do
                                            //link change ho gaya upar wala statement se..
    delete todelete;
}



//searching operation
bool search(node* head,int key){
    node* temp = head;
    while(temp!= NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}


// REVERSE OPERATION
node* reverse(node* &head){

    node* previousPtr = NULL;
    node* currentPtr = head;
    node* nextPtr;
    while(currentPtr!=NULL){
        nextPtr = currentPtr->next;
        currentPtr->next = previousPtr;
        previousPtr = currentPtr;
        currentPtr = nextPtr;

    }
    return previousPtr;            //returning the new head

}

//recursive method for reverse operation
node* reverserecursive(node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    node* newHead = reverserecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}


//MAKING A CYCLE
void makeCycle(node* &head,int pos){         //pos will tell u in which position u want to make ur cycle..
    node* temp = head;
    node* startNode;
    
    int count=1;
    while(temp->next!=NULL){

        if(pos==count){
            startNode = temp;
        }

        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}



//THIS LOOP IS JUST CHECKING WHTHTER A CYCLE EXIST OR NOT
//iske liye HEAD ya HEAD->next NULL ni hona chahiye....agar ho gaya..to CYCLE exist ni hoga...(bcz CYCLE wale linked list me NULL ni rehta hai)
//WHILE LOOP CONDITION...it will check whether cycle exist v kart hai ki ni...cycle ka exist tabhi hoga jab list me null ni milega.....agar NULL mil jayga to wo list me CYCLE present ni hai..
//list ka HEAD ya uska HEAD->next me agar null mil gaya iska matlab...wo CYCLIC list ni hai(usme CYCLE present ni hai)
//HEAD ya HEAD->next me agar null mil gaya to wahi loop exit kardega or FALSE vej dega..means CYCLE present ni hai list me
bool detectCycle(node* &head){
    
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){

        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
            return true;
        }
    }
    return false;      //this will be executed when there exist a null in the list that means list does not contains cycle;
    
}

//ASSUMING THAT CYCLE ALLREADY EXISTS
void removeCycle(node* &head){
    node* fast = head;
    node* slow = head;

    // while(fast!=slow){
    //     slow=slow->next;
    //     fast = fast->next->next;
    // }
    //upper wala loop ko do while me dalna hoga kyuki...initially tum dekho fast and slow dono ek hi jagah me hai..jo ki head ke pas
    //or tum pehla hi condition while loop me likkh diya hai..fast not equal to slow...(lekin initially fast equal to slow hai)..to first hi attempt me loop se bahar ho jayga..
    //isi liye tumko do while me dalna hoga taki..loop pehle ek bar chale..dono pointers apne initial positons se hate or uske baad conditon check kare..or fir agar wo dono kahi mile..to us time exit kar de..

    do
    {
         slow = slow->next;
         fast = fast->next->next;
    } while (fast!=slow);
    

//uske bad fast ko head pe le aao or phir while wala condition check karwao...
    fast=head;
    while(fast->next!=slow->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}



//main function
int main(){

    node* head = NULL;               //assuming there is no node at the begining of the linked list

    insertAtHead(head,6); 
    // display(head);

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);

    

    // cout<<search(head,5)<<endl;

    // deletion(head,3);
    // display(head);

    // deleteHead(head);
    // display(head);

    // node* newHead = reverserecursive(head);
    // display(newHead);

    
    
    makeCycle(head,3); 
    cout<<detectCycle(head)<<endl;
    // display(head);
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);




}
