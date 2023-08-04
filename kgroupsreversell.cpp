#include<iostream>
using namespace std;
class Node{
public:
Node* next;
int data;

Node(int data){
    this->data = data;
    this->next = NULL;

}
};
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* getmiddle(Node* &head){
    if(head == NULL){
        cout<<" ll is empty "<<endl;
        return head;
    }
    if(head->next == NULL){
        return head;
    }

    Node* slow = head ;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){
        fast = fast ->next;
        if(fast!=NULL){

            fast = fast->next;
            slow = slow -> next;
        }
    }
    return slow;
} 

int getlength(Node* &head){
    int len =0;
    Node* temp = head;
    while(temp!= NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

Node* reverseknode(Node* &head, int k){
    if(head==NULL){
       cout<< "ll is empty"<<endl;
       return NULL;
    }
     int len = getlength(head);
     if(k>len){
         cout<<"enter valid value for K "<<endl;
         return head;
     }
   // it means no of nodes in a linke dlist is >=k
   Node* prev = NULL;
   Node* curr = head;
   Node* next = curr->next;

   int count =0;
   while(count<k){
          
    
       next = curr->next;
       curr->next = prev;
       prev = curr;
       curr = next;
       count++;

   }

   if(next!=NULL){
       // we still have nodes to reverse 
       head->next = reverseknode(next,k);
   }
    return prev;

}
int main(){
Node* head = new Node(10);
Node* second = new Node(20);
Node* third = new Node(30);
Node* fouth = new Node(40);
Node* fifth = new Node(50);
Node* sixth = new Node(60);

head->next=second;
second->next=third;
third->next=fouth;
fouth->next=fifth;
fifth->next=sixth;
print(head);
head = reverseknode(head,3);
print(head);
//cout<<"middle node is: "<<getmiddle(head)->data<<endl;
//getmiddle(head);

}