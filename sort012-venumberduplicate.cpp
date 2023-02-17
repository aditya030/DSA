#include<iostream>
#include<vector>
using namespace std;

// sort 012 code using 3 pointers approach    // low=0;mid=1;high=2 these 3 pointers are used for denoting and storing these 3 values 
//  void sort_012(vector<int>& arr){
//     int low=0;    //low and mid will be initialized with 0 only 
//     int mid=0;
//     int high=arr.size()-1;
//     while(low<=high){
//     if(arr[mid]==0){     // we are just couting and replacing 
//         swap(arr[mid],arr[low]);
//         mid++;
//         low++;
//     }
//     else if(arr[mid]==1){   // here we will not swap because mid will be used for 1
//         mid++;
//     }
//     else{
//         swap(arr[mid],arr[high]);
//         high--;
//     }
// }
//  }
// int main(){
//     // int n;
//     // cout<<"enter the number of elements you want in an array: ";
//     // cin>>n;
//     // int arr[n];
//     // cout<<"enter the element s inside the array: ";
//     // for(int i=0;i<n;i++){
//     // cin>>arr[n];
//     vector<int> arr={1,0,2,1,0};
//     }
//     sort_012(arr);
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i];
//     }
// cout<<endl;
// }

// sort all -ve numbers to the left 
//HERE WE WILL BE USING DUTCH NATIONAL FLAG ALGORITHM OR SAY 2 POINTERS APPROACH
//  void movenegative(int*arr,int size){   // here we will not be passing like normal way here we are using pointer approach so by pointer we will pass the array 
//      int start=0;
//      int end=size-1;
//      while(start<=end){
//          if(arr[start]<0){   // agar starring wle pointer mai already -ve value hai toh shi haina swap ka koy jaruart nhi
//              start++;
//          }
//          else if(arr[end]>0){ // aur agar end wle mai already +ve value hai toh kyu swap krna peeche jao aur check kro
//              end--;

//          }
//          else{
//             swap(arr[start],arr[end]);    // aur agar start wle mai -ve nhi hai and vice versa toh swap krduo
//          }
//      }
//  }
// int main(){
//     int arr[]={1,2,-3,4,-5,6};
//     int size=6;
//     movenegative(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }



// find a duplicate number using positioning approach

int dupliacte_no(int arr[],int size){
    while(arr[0]!=arr[arr[0]]){// index check kr rhe ki agar already index mai hi element ke barabar value hai toh wo return krna hai 
        swap(arr[0],arr[arr[0]]);// aur agar nhi hai toh swap krte rho uske value = index ke roop mai 
    } 
    return arr[0]; // aur agar nhi swap horha toh wo 0th index wle ko return krduo.
}

int main(){
    int arr[] ={1,2,3,3,4};
    int size =5;
    dupliacte_no(arr,size);
    // for(int i=0;i<size;i++){
        cout<<arr[0];
    
}