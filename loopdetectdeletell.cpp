#include<iostream>
using namepsace std;
class Node{
    Node* next;
    int data;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }
}

void detectloop(Node* &head){
    Node* fast = head;
    Node* slow = head;

    while(slow!=NULL && fast!=NULL  && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            slow = head;
            Node* prev = fast;
            while(slow!=fast){
                prev = fast;
                slow = slow->next;
                fast = fast->next;
            }
            prev->next = NULL;
            return slow;
        }
    }
return NULL;

}
int main(){

}