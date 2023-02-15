#include<iostream>
using namespace std;
// numeric hollow pyramid 
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             if(j==0 || j==i || i==n-1){
//             cout<<j+1;
//         }
//         else{
//             cout<<" ";
//         }
        
//     }
//     cout<<endl;
//   } 
// }

//Inverted numeric hollow pyramid
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<=n;j++){
//             if(j==i+1 || j==n || i==0){
//             cout<<j;
//         }
//         else{
//             cout<<" ";
//         }

//         }
//           cout<<endl;
//     }
   
// }


//Pascal triangle
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int c=1;
//         for(int j=1;j<i;j++){
//             cout<<c<<" ";
//             c=c*(i-j)/j;
//         }
//         cout<<endl;
//     }
// }

//floyd traingle
// int main(){
//     int n;
//     cin>>n;
//     int c=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<c<<" ";
//             c++;
//         }
//         cout<<endl;
//     }
// }


//factorial of a small number 
long long int factorial(long long n){
    long long int fact =1;
    for(long long int  i=1;i<=n;i++){
    fact=fact*i;
}
return fact;
}
long long int  main(){
long long int  n;
cin>>n;
 long long int  ans=factorial(n);
cout<<"factorial is "<<ans<<endl;
}