#include<iostream>
using namespace std;

int cutsegment(int n,int x,int y,int z){
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }

     int ans1 = cutsegment(n-x,x,y,z)+1;
     int ans2 = cutsegment(n-y,x,y,z)+1;
     int ans3 =cutsegment(n-z,x,y,z)+1;
     int finalans=max(ans1,max(ans2,ans3));
     return finalans;

}


int main(){
    int n =7;
    int x = 5;
    int y =2;
    int z =2;

    int ans = cutsegment(n,x,y,z);
    cout<<"the answer is: "<<ans<<endl;
}