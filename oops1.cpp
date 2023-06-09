#include<iostream>
using namespace std;

 class Animals{
     private:
     int weight;
     
    public:
    // state or properties
    int age;
    string name;


    // default constructor
   Animals(){
       this->weight = 0;
       this->age = 0;
       this->name = "";
      cout<<"constructor called"<<endl;
   }

    //parametrized constructor
    Animals(int age){
        this->age =age;
        cout<<"parametrized constructor called"<<endl;
    }

    // copy constructor
    Animals(Animals &obj){
        this->age = obj.age;
        this->weight=obj.weight;
        cout<<"i am inside copy constructor"<<endl;
    }
    // behaviour
    void eat(){
      cout<<"eating"<<endl;
    }
    void sleep(){
     cout<<"sleeping"<<endl;
    }
    int getweight(){
         return weight;
     }
     void setweight(int weight){
         this->weight = weight;
     } 

     void print(){
         cout<<this->age<<" "<<this->weight<<" "<<this->name<<endl;
     }    


     ~Animals(){
         cout<<"i am inside destructor"<<endl;
     }
};

int main(){
    // object creation


    // static
     Animals ramesh;
     ramesh.age=12;
     ramesh.name="ramesh";
     cout<<"age of ramesh is : "<<ramesh.age<<endl;
     cout<<"name of ramesh is : "<<ramesh.name<<endl;
     

     ramesh.eat();
     ramesh.sleep();
     ramesh.setweight(101);
     cout<<"weight is"<<ramesh.getweight()<<endl;
    // dynamic memory

    Animals* suresh = new Animals;
    (*suresh).age =15;
    (*suresh).name = "suresh";
    suresh->age =17;
    suresh->name="kutta";
    suresh->eat();
    suresh->sleep();
    Animals* rahul = new Animals(100);//paramertizd cosntructor call dynmaic one
    Animals(10);//parametrized constructor called static 
    // object copy 
    Animals a(19);
   Animals c = a;
   Animals Animals1(a);
    //Animals c(b);

    Animals g ;
    g.age=20;
    g.setweight(101);
    g.name="aditya";

    Animals d = g;// same values are copied 
     g.print();
     d.print();
     g.name[0]='P';//changes 1st index
     g.print();


     Animals h ;
     h.age =5;// apne aap destructor call hoga

     Animals* v = new Animals();
     v->age=12;
     delete v;// destructor call


}

