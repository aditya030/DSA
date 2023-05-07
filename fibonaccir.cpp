#include<iostream>
using namespace std;
int fib(int n){
    // base case 
   if(n==0||n==1){
       return n;
   }
    //recurrence relation 

    int fibo = fib(n-1)+fib(n-2);
    return fibo;

}
int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;

    int ans = fib(n);
    cout<<"the fibonacci number  at that index is: "<<ans<<endl;


}