#include<iostream>
using namespace std;
int main(){

    int a =5;
    int* ptr=&a;


    //dereffernce operator

    cout<<&a<<endl; // printing the address of the variable

    cout<<*ptr<<endl;// using dreffernce concept for printing the ptr value.
}

// bad practice 
int* ptr;

// good practice would be using a null character 

int* ptr=0;
int*ptr =nullptr;//nya cpp ka tarika to update ourself


// pointer is just a type of variable which is used to store the address of other variable //

//&ptr->this gives the adrees of the pointer which can be in hexadecima//

//*ptr -> this will give the value the pointer is pointing at that is dabba //

//ptr-> this wil just return the value ptr is holding //

//pointer size is always -> 8 because address is always +ve//




