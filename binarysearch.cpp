#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//finding the element using binary search 
// int Binarysearch(int arr[],int size,int key){  // using function for the binary serach for the element 
//     int start=0;   // initialize start with =0
//     int end=size-1;//initialize end with size -1
//     int mid = start+(end-start)/2; //finding the mid
//     while(start<=end){  // basic condition for iterating the element using start <= end
//         // int element =arr[mid];  // making a variable and storing the mid value 
//         if(arr[mid]==key){   // when element == key 
//             return mid;     // return mid
//         }else if(key<arr[mid]){ // when the element  is less than key then 
//             end=mid-1;        // then we will use the end pointer to mid -1
//         }else{
//             start=mid+1;       // if the key is greater than element 
//         }
//         mid=start+(end-start)/2;    
//     }
//     return -1;
// }


// int main(){   // main function
//     int arr[]={2,3,4,5,6,8}; // array for the input 
//     int size =6; // size of the array
//     int key=6; // element to be found 
//     int indexoftarget =Binarysearch(arr,size,key); //calling the binary search function for finding the element 

//     if(indexoftarget==-1){
//         cout<<"target not found"<<endl;
//     }else{
//         cout<<"target found at index: "<<indexoftarget<<endl;
//     }
//     return 0;
// }

// STL INBUILT FUNCTION FOR BINARY SEARCH.
// int main(){
//     //vector<int> v{1,2,3,4,5};
//     int arr[]={1,2,3,4,5,6,7};
//     int size =7;

//     if(binary_search(arr,arr+size,20)){ // stl function for binary search
//         cout<<"found";
//     }
//     else{
//         cout<<"not found";
//     }
//     return 0;
// }
// code for finding the first occurance of an element in an array using binary search.
// int firstocuur(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     int ans=-1; // making a ans variable initialize it with -1 because if not found return -1
//     while(start<=end){ // basic condition
//         if(arr[mid]==key){ // if target == mid
//             ans=mid; // store it maybe it could not be the first occurance there msut be a occurance before it
//             end=mid-1; // so thats why we will check before it 
//         }else if(key>arr[mid]){  // if value is greater
//             start=mid+1; // search in right 

//         }else if(key<arr[mid]){ // if greater search in right part 
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;
// }


// int main(){
//     int arr[]={1,3,2,4,4,4,4,6,7};
//     int size =9;
//     int key =4;
//     int ans =firstocuur(arr,size,key);
//     cout<<"Ans is: "<<ans<<"rd index"<<endl;

// }
// last occurance of the value in an array using binary search.
// int lastoccur(int arr[],int size,int key){
//     int start=0;
//     int end =size -1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==key){
//             ans=mid;
//             start=mid+1;
//         }else if(key<arr[mid]){
//             end=mid-1;
//         }else if(key>arr[mid]){
//             start=mid+1;
//         }
//         mid = start+(end-start)/2;
//     }
//     return ans;
// }


// int main(){
//     int arr[]={2,5,7,7,7,7,7};
//     int size =7;
//     int key =7;
//     int ans =lastoccut(arr,size,key);
//     cout<<"Ans is"<<ans<<"rd index"<<endl;

//     // stl library for finding the first occurance 
//     // auto ans2=lower_bound(arr.begin(),arr.end(),key)
//     // cout<<ans2-v.begin()<<endl;
// }

//TOTAL OCCURANCE 
//using first occurance function nad last occurance function
// int main(){
//     int arr[]={1,7,7,7,7,7,7,5,6};
//     int size =9;
//     int key =7;
//     int ans=lastoccur(arr,size,key)-firstocuur(arr,size,key)+1;
//     cout<<"Ans is:"<<ans<<endl;

// }


//Find missing element using binary search
// int missingele(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     int mid =start+(end-start)/2;
//     int index =arr[i]-1;

// }


// int main(){
//     int arr[]={1,2,3,4,6,7};
//     int size =6;
//     int ans=missingele(arr,size);
//     cout<<"ans is: "<<ans<<endl;
// }


//PEAK ELEMENT IN A MOUNTAIN LEET CODE(MEDIUM LEVEL)
int findpeak(int arr[],int size){
    int s=0;
    int e=size-1;
    int m=s+(e-s)/2;
    while(s < e){
        if(arr[m]<arr[m+1]){
            s=m+1;
        }else{
            e=m;
        }
        m=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[]={0,1,1,4};
    int size =4;
    int ans =findpeak(arr,size);
    cout<<"The peak is "<<ans<<" index"<<endl;
}