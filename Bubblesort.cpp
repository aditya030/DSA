#include<iostream>
using namespace std;
// int main(){
//     int arr[]={10,1,7,6,14,9};
//     int size =6;

//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<=size-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

//     for(int i=0;i<size;i++){
//         cout<<" "<<arr[i]<<" ";

//     }
// }

int main(){
    int arr[]={10,1,7,6,14,9};  //passing the array 
    int size = 6;  // size of array 

    for(int i=0;i<size-1;i++){  // running the outer loop for comparing with other elements in an array 
        for(int j=0;j<size-i-1;j++){  // running inner loop for finding the ith larhgest element 
            if(arr[j]>arr[j+1]){ // comparing if found then swap
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";//printing 
    }
}