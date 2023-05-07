#include<iostream>
using namespace std;
 void printreverse(int n){
     // base case 
     if(n==0){
         return;
     }
     // processing 
     cout<<n<<endl;
     // recursive function 
     printreverse(n-1);
 }
 int main(){
     int n;
     cout<<"enter the number to find the reverse: "<<endl;
     cin>>n;

     printreverse(n);
     cout<<" ";
 }