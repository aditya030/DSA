#include<iostream>
#include<limits.h>
using namespace std;
// int main(){   // uncomment int main to run the programs till line 86
//     int arr[23];
//     cout<<arr<<endl;// printing the 1st addres of 23*4=92 byte storage of int array 
//     cout<<&arr; // and this is also doing the same thing.
// int arr[53];
// char arr[106];
// bool arr[23];

// now lets understand how to initialize an array or put elements of your choice into it 
//  int arr[]={1,2,3,4,5,6};
//  int brr[5]={1,2,3,4,5,6};
//  int crr[10]={1,2,3,4,5,6};// remaining 5 location will store 0
//  int drr[4]={1,2,3,4,5};//this line will show error because your are tring to store more than data then required.
// cout<<arr;


// int arr[]={1,3,5,6,8,9};
// cout<<arr[0]<<endl; // finding the value from the array that we created using index of the particular elemet that we need to find.
// for(int i=0;i<6;i++){ // running for loop for printing all the values in array.
//     cout<<arr[i]<<" ";
// }


// Now lets make an array and ask the elements of the array from the user itself and print the same array.
// int arr[10];// taking input in the array
// cout<<"enter the values for the array";
// for(int i=0;i<10;i++){
// int n;
// cin>>n;
// arr[i]=n;
// }
// cout<<"printing the values of the array"; // printing the array
// for(int i=0;i<10;i++){
//     cout<<arr[i]<<" "<<endl;
// }
//  return 0;
// }


// now lets take 5 elements input in array and print their doubles.i.e 1->2,2->4 like this
//inputiing from the user
// int arr[5];
// cout<<"enter the elements of the array";
// for(int i=0;i<=5;i++){
//     int n;
//     cin>>n;
//     arr[i]=n;
// }

// // printing
// cout<<"printing the doubles of the element that you used"<<endl;
// for(int i=0;i<=5;i++){
//     cout<<2*arr[i]<<endl;

// }
// return 0;


// Take n elements from the user and then print all the elements converted into 1 only

// int n;
// int arr[100];
// cout<<"enter the elements of the array";
// for(int i=0;i<n;i++){
//     cin>>arr[i];
    
// }


// int arr[5]={1,2,3,4,5};
// for(int i=0;i<5;i++){
//    arr[i]=1;
// }
//  for(int i=0;i<5;i++){
//      cout<<arr[i];
//  }
//  return 0;


// now lets try what the other index of array will be if we only  store 2 value
// int arr[10]={1,2};
// for(int i=0;i<10;i++){ // this will give last 8 values as 0
//     cout<<arr[i]<<endl;
// }

// void printarray(int arr[],int size){    // code for inc the array and then printing it using the pass by refference concept.
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
//  void incarray(int arr[],int size){
//      arr[0]=arr[0]+1;
//      arr[1]=arr[1]+2;
//  }


// int main(){
//     // int size;
//     // size = 2;
//     int arr[]={2,4};
//     // incarray(arr,size);
//     // printarray(arr,size);

// }
//  bool linearsearch(int arr[],int size,int key){   // A linear search code for finding the value of element from the array if found return the value else return not found 
//     for(int i=0;i<size;i++){
//         if(arr[i]==key)
//         return true; // if found then return true 
//     }
//     return false ; // if not found then dont return the value
// }

//  int main(){
//      int size = 5;
//     int arr[]={2,4,6,8,10};
//     cout<<"enter the value of key that you want to find from the array: ";
//     int key;
//     cin>>key;
//     if(linearsearch(arr,size,key)){
//         cout<<"search found: ";
//     }else{
//         cout<<"Not found: ";
//     }
// return 0;
//  }
 


 // Now lets write a code for counting the numbers of 0's and 1's in an array
 
     
//  int main(){
//      int size=6;
//      int arr[]={0,1,1,1,0,1};
//      int numzero=0;
//      int numone=0;
//     for(int i=0;i<size;i++){      
//       if(arr[i]==0){
//             numzero++;
//         }else if(arr[i]==1) {
//             numone++;
//             }
//                }
//             cout<<numzero<<" :number of zeros"<<endl;
//             cout<<numone<<" :number of ones";
// }
     


 // Now lets find the number of 2's in an array
 
//   int  find2(int arr[],int size){
//      for(int i=0;i<size;i++){
//          int count;
//          if(arr[i]==2){
//              count++;
             
//              }
         
//      }
//  }
 
 
 
//  int main(){
//      int size=10;
//      int arr[]={1,2,2,2,2,2,4,5,6,7};
//      for(int i=0;i<size;i++){
//          int count=0;
//          if(arr[i]==2){
//              count++;
//              }
//              cout<<count<<endl;
         
//      }
//  }



//now lets write a code for finding the maximum number in an array
// int main(){
    
//     int arr[]={1,2,4,57,8,9,76};
//     int size=7;
//     int maxi=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>maxi){
//              maxi=arr[i];
//         }
//     }
//     cout<<"maximum number is: "<<maxi;


//     return 0;

// }
    

    // int main(){  // this is the code for the finding the minimum number in an array
    //     int arr[]={1,2,3,45,56,67,78,89,90};
    //     int size=9;
    //     int mini=INT_MAX;
    //     for(int i=0;i<size;i++){
    //         if(arr[i]<mini){
    //             mini=arr[i];
    //         }
    //     }
    //     cout<<"the minimum number in an array is: "<<mini;

    //     return 0;
    // }



    // Now lets find the code for printing the 1st element then the last element and then 2nd element then 2nd last.
    int main(){
        int arr[]={10,20,30,40,50,60,70,80};
        int size =8;
        int start=0;
        int end=size-1;
        while(start<=end){
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
            start++;
            end--;

        }
        return 0;
    }
        

    // Now lets write a code for printing the reverse of an array

    // int main(){
    //     int arr[]={10,20,30,40,50,60,70,80};
    //     int size =8;
    //     int start=0;
    //     int end=size-1;
    //     while(start<=end){
    //         // step 1
    //         swap(arr[start],arr[end]);
    //         // step 2
    //         start++;
    //         //step 3
    //         end--;
    //     }
    //     for(int i=0;i<size;i++){
    //         cout<<arr[i]<<endl;
    //     }
    //     return 0;
    // }
 

