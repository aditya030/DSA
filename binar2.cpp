#include<iostream>
using namespace std;



//Now lets find the square root of a number using binary search
// int squareroot(int n){
//     int target =n;  // target is just that no whose square root we nee do find 
//     int s= 0; // s=0
//     int e = n; // end will go till n only because we weill serch from 0 to that number only to find the suare root
//     int m = s+(e-s)/2;
//     int ans =-1;

//     while(s<=e){ // basic condition
//         if((m*m)==target){  // because square root is just the multiplication of 2 same numbers to find the resultant number around it
//             return m;  // if found simply return
//         }
//         if((m*m)>target){  // if comming gretarer than n then search in left side because going in right further is no use
//             e=m-1;
//         }else if(m*m<target){ // if less first store the mid because maybe that would be only the ans 
//             ans=m;
//             s=m+1; // and search in right part
//         }
//      m = s+(e-s)/2;   
// }
// return ans;
// }
// int main(){
//     int n; // first lets take a variable n
//     cout<<"enter the number to find the square root: "<<endl; // amd ask from the user 
//     cin>>n;
//     int ans =squareroot(n); // then pass than number to the function to find the square root
//     cout<<"the ans is: "<<ans<<endl;

//     int precision;
//     cout<<"enter the number of precision you want: "<<endl;
//     cin>>precision;
// double  step =0.1;
// double finalans=ans;
//     for(int i=0;i<precision;i++){
//         for(int j=finalans;j*j<n;j=j+step){
//             finalans=j;
//         }
// step =step/10;
//     }
//     cout<<"final ans is: "<<finalans<<endl;
//     return 0;
// }

//TO SEARCH A ELEMENT IN A 2D ARRAY
// bool binarysearch(int arr[][4],int rows,int cols,int target){
//     int start =0;
//     int end=rows*cols-1;
//     int mid = start+(end-start)/2;
    


//     while(start<=end){
//         int rowindex =mid/cols;  // in this question just the new concept is that we need to find row indexx and column index because to acces a particular index in a 2d array
//         int colindex =mid%cols;

//         if(arr[rowindex][colindex]==target){
//             cout<<"FOUND AT: "<<rowindex<<" "<<colindex<<endl;
//                return true;
//         }else if(arr[rowindex][colindex]<target){
//             start=mid+1;//right search
//         }else{
//             end = mid -1;//left search
//         }
//         mid = start+(end-start)/2;//updating mid value
//     }
//     return false;
// }



// int main(){
//     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     int rows =3;
//     int cols =4;

//     int target = 12 ;

//     bool ans =binarysearch(arr,rows,cols,target);
//     if(ans){
//         cout<<"found"<<endl;
//     }else {
//         cout<<"not found"<<endl;
//     }
// }


//To find a target variable in nearly a sorted array
// nearly sorte array is a type of array in which the element is either in i or i+1 or i-1 indexes.
int binarysearch(int arr[],int size ,int target){
    int s =0;
    int e =size -1;
    int mid = s+(e-s)/2;

    while(s<=e){   // there will be 4 cases 
        if(arr[mid]==target){ // as earlier told it will be either on i
            return mid;
        }else if(arr[mid+1]==target){ //or on i+1
            return mid +1;
        }else if(mid-1>=0&&arr[mid-1]==target){ //or on i-1
            return mid -1;
        }else if(arr[mid]>target){ //and if not in 3 cases lets break the array using previous concept of binary search
            e =mid-2; // -2 because -1 i.e i-1 case is already handeled in line no: 105
        }else{
            s=mid+2; // +2 because +1 i,e i+1 case is already handeled in line no : 103
        }
mid = s+(e-s)/2; // update mid value 
    }
    return -1; //if  not found return -1
}
int main(){
    int arr[]={10,3,40,20,50,80,70};
    int size =7;
    int target =40;

    int ans = binarysearch(arr,size,target);
    cout<<"the index at which our array is: "<<ans<<endl;

}
