#include<iostream>
using namespace std;


void update(int* ptr){   // ye wla pointer alag memory lerha hai....
  *ptr =*ptr+10;
}
int main(){

// int arr[10];

// int*ptr=&arr[0];

// cout<<&arr[0]<<endl;

// sirf arr likhne se base address print hota hai....
//----------------------------------------------------------------------------------------------------------------------------------------
                                                       //INT ARRAY AND POINTERS//
// int arr[4]={10,12,14,16};
// cout<<*arr<<endl;//10
// cout<<*arr+1<<endl;//11
// cout<<*(arr+1)<<endl;//12 // next address pe jayega 


// sirf arr likhne se base address print hota hai....


//&arr , arr[0],arr-> will always show you the based address of the array 

// and arr=arr+1-> cannot be done because we cannot update any address of the array   // symbol table 
// int* ptr = ptr+1 // this can be done

//--------------------------------------------------------------------------------------------------------------------------------------------
                                                     // CHAR ARRAY AND POINTERS//

// char ch[20]="adityasinha";
// char* c =ch;
//  cout<<ch<<endl;//CH KE ANDAR JO HAI WO PRINT HOGA
//  cout<<&ch<<endl;//ADDRESS OF CH
//  cout<<c<<endl;// C KE ANDAR JO HAI WO PRINT HOGA ->ADITYASINHA
//  cout<<*c<<endl;// first character hi aayega khliiililiililili


  char ch='k';
  char*cptr =&ch;
  cout<<cptr<<endl;  //garbage value bhi print hogi bahut sariiiiiiiiiiiii------------------------------------------------------------------


//cptr ko access krne se puri string aaayegiiiiiiiiiiiiiiiii


//------------------------------------------------------------------------------------------------------------------------------------------------
           
           
                                                     //FUNCTIONS AND POINTERS//


int a=5;
int* ptr=&a;
update(ptr);
cout<<"value of a IS:  "<<a<<endl; /// this will change the value of a 


}