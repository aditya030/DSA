#include<iostream>
using namespace std;


void solve (int arr[],int sum,int &maxi,int i, int szie){
    if(i>=szie){   // normal base case in which if i is geate than the array we will terminate
        maxi=max(sum,maxi);   // jaise hi hum array ke baarr nikal jayenge humme maximum adjacent sum dena hoga isliye ye use kiya ki if we have completed the traversal of the array
        return ;
    }
  
  //include
  solve(arr,sum+arr[i],maxi,i+2,szie);   // include ke case mai we would update the sum value so thatd why sum++arr[i] and i + 2 isliye because we cannot take adjavent elements

  //exclude
  solve(arr,sum,maxi,i+1,szie);  // if not then just norally print the last ans 


}
int main(){
    int arr[]={1,2,3,1,3,5,8,1,9};  // first we pass the array to find the maximum adjacent sum
    int szie = 9;  // size of the array
    int sum =0;   // we make an ans variable to initialize sum 
    int maxi=INT_MIN;   // the to find the max adjacent sum we initialize maxi with minimum number to comapre and update 
    int i =0;   // for base case we would be needed this 
    solve(arr,sum,maxi,i,szie);  // the caling the function
    cout<<"the anser is: "<<maxi<<endl;
}