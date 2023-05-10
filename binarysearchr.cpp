#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key, int start,int end){
    int mid =(start+end)/2;
    if(start>end)
        return -1;
    
    if(arr[mid]==key){
        return mid;
    }
    // left wle case
    if(arr[mid]<key){
      return binarysearch(arr,n,key,mid+1,end);
    }
    if(arr[mid]>key){
        return binarysearch(arr,n,key,start,mid-1);
    }
}


int main(){
    int arr[]={10,20,30,40,50};
    int n = 5;
    int key = 50;
    int start = 0;
    // int mid =(start+end)/2;
    int end = n - 1;
     int ans =binarysearch(arr,n,key,start,end);
    cout <<" the index at which the required key is: "<<ans<<endl;

}