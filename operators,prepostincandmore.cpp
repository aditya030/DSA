#include<iostream>
using namespace std;
int main(){
    // int a = 5;
    // cout<<++a<<endl;//in pre increment first the value is increased and then it print 

    // int b =8;
    // cout<<b++<<endl;//output ->8
    // //in post increment the value is first stored and then increased here 8 will be printed in first cout call but when you cout once more 9 will be printed.
    // cout<<b<<endl;//output->9
// int n;
// cin>>n;
    // for(int i=0;i<5;i++){   // here using break keyword we will not iterate for loop for 5 times and as soon as break keyword hits it moves out of the loop and print next thing .
    //     cout<<"aditya";
    //     break;
    // }
    // cout<<"sinha";

// for(int i=0;i<5;i++){
//      if(i==3){
//          continue; // continue keyword can be used for skipping a particular iteration if you want to skip .
//      };
//     cout<<i;
    
// }
//     cout<<"sinha";

// Variable scoping(variable ki life)
int a;//decleration

 int b=5;//initilization
b=10;
if(true){
    int b=15;
    cout<<b<<endl;
}
cout<<b<<endl;
}