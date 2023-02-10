#include<iostream>
using namespace std;

//  void even_odd(){      //even odd function
//     int n;   
//     cout<<"enter the number to check it is even or odd: ";
//     cin>>n;
//     if(n%2==0){
//         cout<<"even"<<endl;
//     }else{
//         cout<<"odd";
//     }
// }

// float areaOfCircle(float radius_circle) // AREA OF A CIRCLE CODE
// {
//    float area_circle;
//    area_circle = 3.14 * radius_circle * radius_circle;

//    return area_circle; //return area
//  }

// int main(){
//    // even_odd();
//   
//   int r;
//   cout<<"enter the vale of R";
//     cin>>r;
// areaOfCircle(r);
// cout<<"Area of the circle of radius = "<<r<<" is "<<areaOfCircle(r)<<endl;   
// }

// int FactorialNumber(int num) // factorial
// {
//     int i,fact=1;
//     for(i=1;i<=num;i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }

// int main()
// {
//     int num;
//     cout<<"Enter the number: "<<endl;
//     cin>>num;
//     cout<<"Factorial = "<<FactorialNumber(num)<<endl;
//     return 0;
// }


// float km_tomiles( float km){     // km to miles code
//    return (km*0.621371);
// }
// int main(){
//   int km;
//   cout<<"enter the km to be converted into miles: ";
//   cin>>km;
//   cout<<"converetedi nto miles is: "<<km_tomiles(km)<<endl;
// }

// bool isprime(int n){ // function to check whether a number is prime or not
//   int i=2;
//   for(i=2;i<n;i++){
//     if(n%i==0){
//      return false;
//     }
//   }
//    return true;
    
//   }


// int main(){
//   int n;
//   cout<<"enter te number to check wether it is aprtime or not";
//   cin>>n;
//   isprime(n);
//   cout<<isprime(n)<<endl;
//   return 0;
// }
// int main(){   // For printing alll the prime number from 1 to n
//   int n;
//   cin>>n;
//   for(int i=1;i<n;i++){
//     bool isiprime=isprime(i);
//     if(isiprime){
//       cout<<i<<" :isprime"<<endl;
//     }
//   }
// }






// REVERSE A NUMBER FOR EG-123,OUTPUT->321
// int reverse(int x){
//   int rem=0;
//   int ans=0;
//   while(x>0){
//     int digit=x%10;   // for breaking the digit 
//     ans=ans*10+digit;  // for storing 123 as 300+20+1=321
//     x=x/10;            //now making the x as 123 to 12 and then further to 1
//   }
// return ans;
// }
// int main(){  // main function
//   int x;
//   cin>>x;
//   cout<<reverse(x)<<endl;
// }


//SET THE KTH BIT OF A NUMBER 

int set_k_bit(int n,int k){
  
  int value= 1<<k;
 int ans =n|value;
 return ans;
}


