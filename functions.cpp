#include<iostream>
using namespace std;
// void printname(){
//     int n;
//     cout<<"enter the number of n";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"aditya sinha:"<<endl;
//     }

// }
// int main(){
// printname();

//function call to add 2 numbers 
// void add2num(){       //not pass by value
//     int a;
//     int b;
//     cout<<"enter first numbers to add: ";
//     cin>>a;
//     cout<<"enter second numbers to add: ";
//     cin>>b;
//     int c =a+b;
//     cout<<"your final sum is: ";
//     cout<<c<<endl;
// }


// int sum(int a,int b){/// this is pass by value type of function and in pass by value copy banti hai bhai bass main se function mai.
//     int result =a+b;
//     return result;
// }

// int max(int a, int b,int c){//pass by value program for finding the max of 3 numbers by making a max function and calling it from main function.
//     if(a>b&&a>c){
//         return a;
//     }else if(b>a&&b>c){
//         return b;
//     }else{
//         return c;
//     }
// }

// void count(int n){ // for couting from 1 to n function
//     for(int i=0;i<=n;i++){
//         cout<<i<<endl;
//     }
// cout<<endl;
// char getgrade(int marks){ /// student grade functiom here the function typr is cghar becauise we re returning a char in the output and it is also a pass by value .
//     char A,B,C,D,F;
//     if(marks>=90){
//         return 'A';
//     }else if(marks>=80){
//         return 'B';
//     }else if(marks>=70){
//         return 'C';
//     }else if(marks>=60){
//         return 'D';
//     }else{
//         return 'F';
//     }
// }
int even_sum(int n){
    int sum =0;
    for(int i=2;i<n;i=i+2){
     sum = sum+i;
        
    }
    return sum;
}


// }
// int main(){


    // int a;
    // cout<<"enter the first number: ";
    // cin>>a;
    // int b;
    // cout<<"enter the second number: ";
    // cin>>b;
    // int c;
    // cout<<"enter your third number: ";
    // cin>>c;
    // int maximum=max(a,b,c);
    // cout<<"maximum: ";
    // cout<<maximum<<endl;
    // // cout<<"your result is: ";
    // // int add=sum(a,b);
    // // cout<<add<<endl;
    // //add2num();
// }
//  int main(){ // 1 to n main function.
//      int n;
//      cout<<"enter a number: ";
//      cin>>n;
//      count(n);
//      return 0;
//  }
//  int main(){ // student grade main function
//      int marks;
//      cout<<"Enter your Marks: ";
//      cin>>marks;
//       char final_grade=getgrade(marks);
//       cout<<final_grade<<endl;
//  }
int main(){
    int n;
    cout<<"enter the vale of n till which you want to find the sum";
    cin>>n;
    int ans=even_sum(n);
    cout<<ans<<endl;
    return 0;
}