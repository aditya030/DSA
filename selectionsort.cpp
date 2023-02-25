#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1,6};  // passint the 
    int size =6;
    

    for(int i=0;i<size-1;i++){
        int minindex =i;
        for(int j=i+1;j<size;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
                swap(arr[minindex],arr[i]);

            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<"("<<" "<<arr[i]<<" "<<")";
    }
}