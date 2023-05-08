#include<iostream>
using namespace std;
void print(int arr[],int n,int i){
    //base case
    if(i>=n){
        return;
    }
    // 1 case solve krdi
    cout<<arr[i]<<" ";
    //naki recursion sambhal lega
    print(arr,n,i+1);
}

int main(){
    int arr[5] ={10,20,30,40,50};
    int i=0;
    int n=5;
    print(arr,n,i);
    return 0;
}