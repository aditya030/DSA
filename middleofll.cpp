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
fifth->next = NULL;
fifth->next=sixth;
print(head);
cout<<"middle node is: "<<getmiddle(head)->data<<endl;
//getmiddle(head);

}