#include<iostream>
using namespace std;
int main(){
    int arr[]={10,1,7,6,14,9};
    int size =6;

    for(int i=0;i<size;i++){
        int val=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>val){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=val;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}