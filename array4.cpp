#include<iostream>
using namespace std;
//  void array_after_sort(int arr,int n){
//      countzero=0;
//      countone=0;
//      counttwo=2;
//      int start=0;
//      int end=size-1;
//      whiel(start<=end){
//          if(arr[i]==0){
//              countzero++;
//          }else if(arr[i]==1){
//              countone++;
//          }else{
//              counttwo=counttwo+2;
//          }
//          start=start+1;
//      }
//      for(int i=0;i<countzero;i++){
//          arr[i]=0;
//      }
//  }
// int main(){
//     int arr[];
//     int n;
//     cin>>n;
//     cout<<"enter the array that you want to sort as for 0's,1's,2's";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//     cout<<"array after sorting is: ";
//     array_after_sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// return 0;
// }

// void findcommon(int arr[3],int brr[3],int crr[3]){
//     int common;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             for(int k=0;k<3;k++){
//                 if(arr[i]==brr[j]==crr[k]){
//                     common=arr[i];
                    
//                 }
//             }
//         }
//     }
//     cout<<common<<endl;
// }


// int main(){
//     // int n;
//     // cout<<"enter the no of elements you want in each array";
//     // cin>>n;
//     int arr[3];
//     int brr[3];
//     int crr[3];
//     for(int i=0;i<3;i++){
//         cout<<"enter the elements inside the array 1: ";
//         cin>>arr[i];
//     }
//     for(int j=0;j<3;j++){
//         cout<<"enter the elements inside the array 2: ";
//         cin>>brr[j];
//     }
//     for(int k=0;k<3;k++){
//         cout<<"enter the elements inside the array 3: ";
//         cin>>crr[k];
//     }

//     // printing the array
//     for(int i=0;i<3;i++){
//         cout<<"("<<arr[i]<<")"<<" ";

//     }
//     cout<<endl;
//      for(int j=0;j<3;j++){
//         cout<<"("<<brr[j]<<")"<<" ";
//     } 
//     cout<<endl;
//     for(int k=0;k<3;k++){
//         cout<<"("<<crr[k]<<")"<<" ";
//     }
//     cout<<endl;
//     findcommon(arr,brr,crr);
// }
// // int common_element=findcommon(arr,brr,crr);
// // cout<<common_element<<endl;


// BUY SELL STOCK

// int main(){
//     int arr[7]={9,7,1,6,2,4,8};
//     int size=7;
//     int min =INT_MAX;
//     int max=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }

//     }
//     for(int j=min;j<size;j++){
//         if(arr[j]>max){
//             max=arr[j];
//         }
//     }
//     cout<<"You should buy at: "<<min<<endl;
//     cout<<"You should sell at: "<<max<<endl;
//     int profit =max-min;
//     cout<<"your profit is: "<<profit<<endl;
// }

int main(){
    int arr[6]={-1,-2,-3,1,2,3};
    int size=6;
    int start=0;
    int end=size-1;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            // start=arr[i];
            swap(arr[start],arr[i]);
            start++;
            // cout<<arr[start];
        }else{
            // end=arr[i];
            swap(arr[end],arr[i]);
            end--;
            // cout<<arr[end];
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}