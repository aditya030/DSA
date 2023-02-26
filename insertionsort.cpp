#include<iostream>
using namespace std;
int main(){
    int arr[]={10,1,7,6,14,9}; // passing the array
    int size =6; // finding the size of the array 

    for(int i=0;i<size;i++){ // running the outer for loop for comaprison of ith index with each element 
        int val=arr[i]; // Step 1 fetching the value in ith index 
        int j=i-1;  // then comparing it with the previous element 
        for(;j>=0;j--){  // // j will be from 0 because we will be comparing with previous element 
            if(arr[j]>val){ // if j is greater than value 
                arr[j+1]=arr[j];  // step 2 shift 
            }else{
                break;   // else break 
            }
        }
        arr[j+1]=val;  // step 3 make a copy and store it 
    }

    for(int i=0;i<size;i++){   // print 
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}