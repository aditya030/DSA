#include<iostream>
using namespace std;
class Dequeue{
  public:
  int size;
  int* arr;
  int front;
  int rear;

 Dequeue(int size){
     this->size = size;
     arr = new int[size];
     front =-1;
     rear =-1;
 }

 void pushrear(int data){
     if(front == 0 && rear == size-1){
         cout<<"Queue is full and value cannot be inserted"<<endl;

     }
     else if(front == -1){
         rear =0;
         arr[rear]= data;
     }
     else if(rear == size-1 && front!=0){
         rear =0;
         arr[rear]=data;
     }
     else{
         rear++;
         arr[rear]=data;
     }
 }

 void pushfront(int data){
     if(front == 0 && rear == size-1){
         cout<<"Queue is full and value cannot be inserted"<<endl;
         return;
     }else if(front == -1){
        front= rear =0;
         arr[rear]= data;
     }else if(front == 0 && rear!=size-1 ){
         front = size-1;
         rear=1;
         
     }else{
         front--;
     }
     arr[front]= data;
 }

 void popfront(){
      if(front ==-1){
         cout<<" queue is empty cannot pop"<<endl;
     }else if(front == rear){
         arr[front]=-1;
         front = rear =-1;
     }
     else if(front == size-1){
         front =0;
     }else{
         front++;
     }
 }
 void popRear(){
      if(front ==-1){
         cout<<" queue is empty cannot pop"<<endl;
     }else if(front == rear){
         arr[front]=-1;
         front = rear =-1;
     }
     else if(rear == 0){
         arr[rear]=-1;
         rear = size-1;
     }else{
         arr[rear]=-1;
         rear--;
     }
 
 }
 void print(){
     for(int i =0;i<size;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
 }

};
int main(){
   Dequeue dq(10);
   dq.print();
   dq.pushrear(10);
   dq.pushrear(20);
   dq.pushrear(30);
   dq.pushrear(40);
   dq.pushrear(50);
   dq.pushrear(60);
   dq.pushrear(70);
   dq.pushrear(80);
     
     dq.popRear();
     dq.print();

   dq.print();
}