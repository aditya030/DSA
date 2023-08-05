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
void sortzeroonetwo(Node* &head){
    // count of 0 ,1 ,2 
    int zero = 0;
    int one = 0;
    int two = 0;
    Node* temp = head;

    while(temp!=NULL){
        if(temp->data==0){
            zero++;
        }
        else if(temp->data==1){
            one++;
        }
        else if(temp->data==2){
            two++;
            temp= temp->next;
        }
    }
    // fill 0,1,2
    temp = head;
    while(temp!=NULL){
        // fill 0
while(zero--){
    temp->data =0;
    temp = temp->next;
}
while(one--){
    temp->data = 1;
    temp = temp->next;
}

while(two--){
    temp->data = 2;
    
}
   temp = temp->next;     


        
    }
    
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//  Node* reverse(Node* &head){
//      Node* prev = NULL;
//      Node* curr = head;
//      Node* next = curr-> next;

//      while(curr!=NULL){
//          next = curr-> next;
//          curr-> next = prev;
//          prev = curr;
//          curr = next;
//      }
//      return prev;
//  }
//  bool checkpallindrome(Node* &head){
//      if(head==NULL){
//          cout<<"LL is empty "<<endl;
//          return true;
//      }
//      if(head->next == NULL ){
//          return true;
//      }

//      // find middle
//      Node* slow = head;
//      Node* fast = head;

//      while(slow!=NULL && fast!=NULL && fast->next != NULL){
//          slow = slow -> next;
//          fast = fast->next->next;

         
//      }

//      // reverse ll after middle node
//      Node* reversekahead = reverse(slow->next);
//      slow->next = reversekahead;
     

//      Node* temp1 = head;
//      Node* temp2 = reversekahead;

//      while(temp2!=NULL){
//          if(temp1->data!=temp2->data){
//              return false;
//          }
//          else{
//              temp1 = temp1->next;
//              temp2 = temp2->next;
             
//          }
//      }
//  return true;
//  }
int main(){
  Node* head = new Node(1);
  Node* second = new Node(1);
  Node* third = new Node(0);
  Node* fourth = new Node(2);
  Node* fifth = new Node(1);
  Node* sixth = new Node(2);
  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = sixth;
//print(head);
//   bool ispallindrome = checkpallindrome(head);
//   if(ispallindrome){
//       cout<<"LL is a valid pallindrome"<<endl;
//   }
//   else{
//       cout<<" LL is not a valid pallindrome"<<endl;
//   }
 sortzeroonetwo(head);
 print(head);


// }
}