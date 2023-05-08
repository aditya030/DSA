#include<iostream>
using namespace std;
void maximum(int arr[], int n, int i, int& maxi){
    if(i>=n){
        return ;
    }
    // 1 case mai sambhalunga 

    if(arr[i]>maxi){
        maxi=arr[i];
    }
    maximum(arr,n,i+1,maxi);
    

}
int main(){
    int arr[5]={12,10,15,45,32};
    int i=0;
    int n = 5;
    int maxi =INT_MIN;
    maximum(arr,n,i,maxi);
    cout<<"maximum number is: " << maxi << endl;
    return 0;
}