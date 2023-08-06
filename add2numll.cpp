#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;

    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
head = prev;
}

void solve(Node* &head1, Node* &head2,Node* &anshead){
    // step 1 reverse both the linked list
   head1 = reverse(head1);
   head2 = reverse(head2);
    // add both linked list
   Node* anshead = NULL;
   Node* anstail =NULL;
   int carry =0;

   while(head1!=NULL && head2!=NULL){
       // calculate sum
   int sum = carry + head1->data+head2->data;
   int digit = sum%10;
   carry = sum/10;
   // crete a new node for the digit 
   Node* newNode = new Node(digit);
   // if no node then attach it  
   if(anshead == NULL){
       anshead = newNode;
       anstail = newNode;
   }else{
       // else attach it next to tail
       anstail->next = newNode;
       anstail = newNode;
   }
   head1 = head1->next;
   head2 = head2->next;
   }
// head 1 ll ki leght jyada huo
   while(head1!=NULL){
       int sum = carry+head1->data;
       int digit = sum%10;
       carry = sum/10;
       Node* newNode = new Node(digit);
       anstail->next = newNode;
       anstail = newNode;
       head1 = head1->next;
   }

   // head2 ll ki length jyada huo
    while(head2!=NULL){
       int sum = carry+head2->data;
       int digit = sum%10;
       carry = sum/10;
       Node* newNode = new Node(digit);
       anstail->next = newNode;
       anstail = newNode;
       head2 = head2->next;
   }


   while(carry!=0){
       int sum = carry;
       int digit = sum%10;
       carry = sum/10;
       Node* newNode = new Node(digit);
       anstail->next = newNode;
       anstail = newNode;
   }
    // reverse  he ans wlilinked list
     reverse(anshead);
    //return anshead;
}

int main(){
Node* head1 = new Node(2);
Node* second1 = new Node(4);
head1->next = second1;


Node* head2 = new Node(2);
Node* second2 = new Node(3);
Node* third2 = new Node(4);

head2->next = second2;
second2->next = third2;

Node* ans =NULL;
solve(head1,head2,ans);
print(ans);
}