#include<iostream>
using namespace std;

class Animal{
      private://perfect enacsulation
      int age;
      int weight;


      public:

      void eat(){
          cout<<"eatingh"<<endl;//this is normal encapsulation
      }
       int getage(){      // to acces private function or memebers we use getter and setter method 
           return this->age;
       }
       void setage(int age){
           this->age = age;
       }

};




int main(){

}