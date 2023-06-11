#include<iostream>
using namespace std;

class animal{
    public:
  virtual void speak(){ // if virtua then in upcasting case child class functio will be called;
     cout<<"spekaing"<<endl;
 }
};
 class dog:public animal{
     public:
     void speak(){
         cout<<"barking"<<endl;
     }
 };



int main(){
    animal a;
    a.speak();

    dog b;
    b.speak();


   animal* c = new dog();// parent function will be called 
   c->speak(); // upcasting 


      // downcasting

      