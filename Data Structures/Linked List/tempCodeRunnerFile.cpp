
// void intersect(node* head1,node* head2,int pos){
//     node* temp1 = head1;
//     int count = 1;
// //maan ke chalo pos 3 de diya to humko khabar rakhna hoga ki 
// //mera pointer jo hai kaha tak pahucha hai..isi liye koi variable 
// //chahiye hoga jisse POS ko compare kare..to iske liye COUNT ka use
// // kiye hai...taki pata chal jay ki wo..pointer(temp1) us position tak
// // pahuch gaya hai jaha pe humlog ko insert karne ka order mila hai
// //(jo ki POS ka value batayega kaha intersect karwana hai)

//     //head1 pe traversing 
//     while(count!=pos){
//         temp1 = temp1->next;
//     }

//     //head2 per traverse karne ki baari
//     node* temp2 = head2;
//     while(temp2!=NULL){
//         temp2=temp2->next;
//     }

//     //jab loop khatam ho jayga matlab pahuch gaya hai jagah pe..ab usko point karwa do..temp1 se
//     temp2->next = temp1;
// }


// int length(node* head){
//     int l = 0;
//     node* temp = head;
//     while(temp!=NULL){
//         temp = temp->next;
//         l++;
//     }
//     return l;
// }

// int intersection(node* &head1,node* &head2){
//     int L1 = length(head1);
//     int L2 = length(head2);
//     int d= L1-L2;

//     node* ptr1;
//     node* ptr2;

//     //assuming that L1 is bigger;
//     ptr1 = head1;                     //ptr1 will point to the head of the bigger linked list..and ptr2 to the smaller LL;
//     ptr2 = head2;

// //taking the ptr1 to that position from where checking begins...(FOR PTR1 only)
//     while(d!=0){

//         if(ptr1 == NULL){
//             return -1;                  //this means there is not intersection between the linked lists
//         }
//         ptr1 = ptr1->next;

//         d--;
//     }

//     while(ptr1!=NULL && ptr2!=NULL){
//         if(ptr1 == ptr2){
//             return ptr1->data;
//         }

//         ptr1 = ptr1->next;
//         ptr2 = ptr2->next;
//     }
//     return -1;                     //there is no intersection between the linked lists.

// }
