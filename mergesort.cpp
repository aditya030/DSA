#include<iostream>
using namespace std;


void mergeing(int arr[],int n,int s,int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int*left = new int[len1];
    int*right = new int[len2];

    int k = s;
    for(int i =0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }

    k = mid+1;
    for(int i =0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }
    //merge logic
    int leftindex = 0; 
    int rightindex = 0;
    int mainarray = s;

    while(leftindex<len1&&rightindex<len2){
        if(left[leftindex]<right[right[rightindex]]){
            arr[mainarray++]=left[leftindex];
        }
        else{
            arr[mainarray++]=right[rightindex++];
        }
    }

    // copy logic for left array
    while(leftindex<len1){
        arr[mainarray++]= left[rightindex++];

    }
    // copy logic for right array
    while(rightindex<len2){
        arr[mainarray++]= right[rightindex++];

}





int merge(int arr[],int n,int s,int e){
     if(s>=e){
         return;
     }

     int mid = (s+e)/2;

     merge(arr,s,mid+1);
     merge(arr,mid+1,e);

     mergeing(arr,s,e);
 }



int main(){
    int arr[]={2,3,1,4,5};
    int n = 5;
    int s = 0;
    int e = n-1;

    merge(arr,n,s,e);
}