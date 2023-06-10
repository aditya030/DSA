#include<iostream>
using namespace std;

class animals{
     public:
     int age;
     int weight;

     void eat(){
         cout<<"eating"<<endl;
     }

};


class dog:public animals{

};






int main(){
  dog d1;
  d1.eat();
}