#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* prev;
Node* Next;

Node(){
    this->data=0;
    this->prev =NULL;
    this->Next=NULL;
}

Node(int data){
    this->data=data;
    this->prev =NULL;
    this->Next=NULL;
}
~Node(){
    cout << " node with value "<<this->data<<"deleted"<<endl;
}
};


void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
}


int getlength(Node* &head){
    int len =0;
    Node* temp = head;
    while(temp!=NULL){
        temp=temp-> Next;
        len++;
    }
    return len;
}


void insertathead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        //l is empty
        Node* newNode= new Node(data);
        head = new Node;
        tail = new Node;

    }else{
        //ll is empty
        Node* newNode = new Node(data);
        newNode->Next = head;
        head->prev = new Node;
        head = new Node;

    }
}

void insertattail(Node* &head, Node* &tail,int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = new Node;
        tail = new Node;

    }else{
        Node* newNode = new Node(data);
        tail->Next = new Node;
        newNode->prev = tail;
        tail= new Node;

    }
}

void insertatposition(Node* &head, Node* &tail, int data, int position){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = new Node;
        tail = new Node ;
    }else{
        if(position==1){
            insertathead(head,tail,data);
        }

        int len = getlength(head);
        if(posiiton>=len){
            insertattail(head,tail,data);
        }

        int i = 1;
        Node* prevNode = head;
        while(i<posiiton-1){
            prevNode = prevNode->next;
            i++;
        }
        Node* curr = prevNode;

        Node* newNode = new Node(data);

        prevNode->next = newNode;
        newNode->prev = prevNode;
        curr->prev = newNode;
        newNode -> next = curr;
    }
}

void deletefromposition(Node* &head,Node* &tail, int position){
    if(head == NULL){
        cout <<"linked list is empty "<<endl;
        return;
    }
    if(head->Next==NULL){
        Node* temp = head;
        head =NULL;
        tail = NULL;
        delete temp;
        return;
    }
    if(position==1){
        Node* temp = head;
        head = head->next;
        head->prev =NULL;
        temp->next =NULL;
        delete temp;
        return;

    }

    int len = getlength(head);
    if(position== len){
        Node* temp = tail;
        tail = tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
        return;


    }

    // delete from middle of linked list 
    // step 1 find left,right , current

    int i =1;
    while(i<position-1){
        left = left->next;
        i++;
    }

    Node* curr = left->next;
    Node* right = curr->next;
    
// step 2

left-> next = right;
right->prev = left;
curr->prev = NULL;
curr->next = NULL;
delete curr;
return;
int  main(){
   Node* first = new Node(10);
   Node* second = new Node(20);
   Node* third  = new Node(30);
   Node* head = first;
   Node* tail = third;

   first->Next = second;
  // first->prev=NULL;
   second->prev = first;
   second->Next = third;
   third->prev = second;
   print(first);
   cout<<endl;

   insertathead(head,tail,101);
   print(head);


insertattail(head,tail,101);
cout<<endl;
   print(head);

}