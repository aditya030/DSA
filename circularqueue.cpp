#include<iostream>
#include<queue>
using namespace std;
class CircularQueue{
public:
int size;
int* arr;
int front;
int rear;

CircularQueue(int size){
    this->size = size;
    arr = new int[size];
    front =-1;
    rear =-1;
}

void push(){
    // queueu full
    if(front==0 && rear == size-1){
        cout<<"queue is full"<<endl;
    }else if(front ==-1){
        front = rear =0;
        arr[rear]= data;
    }else if(rear == size-1 && front!=0){
           rear =0;
           arr[rear]= data; 
    }
     else{
         rear++;
         arr[rear]=data;
     }
    // single element case


    //normal flow
}

 void pop(){

     // empty check
     //single element 
     //circular nature
     // normal flow
     if(front ==-1){
         cout<<" queue is empty cannot pop"<<endl;
     }else if(front == rear){
         arr[front]=-1;
         front = rear =-1;
     }
     else if(front == szie-1){
         front =0;
     }else{
         front++;
     }

 }
};
int main(){

}