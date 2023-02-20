#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// int findpivot(int arr[],int size){
//     int s =0;
//     int e = size -1;
//     int m = s+(e-s)/2;
//     while(s<=e){
//         if(arr[m]>arr[m+1]){    // DEKH BHAI AGAR MID JO HAI WO M+1 MTLB NEXT ELEMENT SE BDA HAI MTLB SBSE BDA WHI HAI 
//             return m;           // TOH WO RETURN KRDE
//         }else if(arr[m-1]>arr[m]){  // AGAR MID CHOTA HAI MID-1 SE TOH MID -1 JYADA BDA HAI NA BHAI TOH MID -1 RETURN KRDE 
//             return m-1;
//         }else if(arr[m]<arr[s]){ // AUR AGAR DONO CASE NHI HAI UPAR WALE SE AUR MID KI VALUE START SE CHOTI HAI TOH LEFT SIDE DEKHO
//             e =m-1;
//         }else{   // NHI TOH RIGHT SIDE DEKHO
//             s=m+1;
//         }
//         m=s+(e-s)/2;
//     }
//     return INT_MAX;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,1,2};
//     int size =9;
//     int ans =findpivot(arr,size);
//     cout<<"Ans is: "<<ans<<endl;

// }


//SEARCH IN A ROTATED SORTED ARRAY

int findpivot(int arr[],int size){
    int s =0;
    int e = size -1;
    int m = s+(e-s)/2;
    while(s<=e){
        if(arr[m]>arr[m+1]){    // DEKH BHAI AGAR MID JO HAI WO M+1 MTLB NEXT ELEMENT SE BDA HAI MTLB SBSE BDA WHI HAI 
            return m;           // TOH WO RETURN KRDE
        }else if(arr[m-1]>arr[m]){  // AGAR MID CHOTA HAI MID-1 SE TOH MID -1 JYADA BDA HAI NA BHAI TOH MID -1 RETURN KRDE 
            return m-1;
        }else if(arr[m]<arr[s]){ // AUR AGAR DONO CASE NHI HAI UPAR WALE SE AUR MID KI VALUE START SE CHOTI HAI TOH LEFT SIDE DEKHO
            e =m-1;
        }else{   // NHI TOH RIGHT SIDE DEKHO
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return INT_MAX;
}


int Binarysearch(int arr[],int size,int key){  // using function for the binary serach for the element 
    int start=0;   // initialize start with =0
    int end=size-1;//initialize end with size -1
    int mid = start+(end-start)/2; //finding the mid
    while(start<end){  // basic condition for iterating the element using start <= end
        // int element  arr[mid];  // making a variable and storing the mid value 
        if (arr[mid]==key){   // when element == key 
            return mid;     // return mid
        }else if(key <=arr[mid]){ // when the element  is less than key then 
            end=mid-1;        // then we will use the end pointer to mid -1
        }else{
            start=mid;       // if the key is greater than element 
        }
        mid=start+(end-start)/2;    
    }
    return -1;
}

int search(int arr[],int key){
    int pivotindex =findpivot(arr,size);
    if(key>=arr[0] && key<=arr[pivotindex]){
        int ans=Binarysearch(arr,key,0,pivotindex);
        return ans;
    }else if(pivotindex+1<size && key>=arr[pivotindex+1] && key<=[size]){
        int ans =Binarysearch(arr,key,pivotindex+1,size);
        return ans;
    }
    return -1;
}




int main(){
    int arr[]={4,5,6,7,0,1,2};
    int size =7;
    int key=7;
    int finalans=search(arr,key);
    cout<<"ans is:"<<finalans<<endl;


// }
// int findpeak(int arr[],int size){
//     int s=0;
//     int e=size-1;
//     int m=s+(e-s)/2;

//     while(s < e){
//         if(arr[m]>arr[m+1]){
//             return m;
//         }else if(arr[m]<arr[m+1]){
//             e=m;
//         }
//         m=s+(e-s)/2;
//     }
//     return s;
// }
// int main(){
//     int arr[]={1,2,4,10,5,4,2};\
//     int size = 7;
//     int ans =findpeak(arr,size);
//     cout<<"the peak is: "<<ans<<endl;
// }

// int findpivot(int arr[],int size){
//     int s =0;
//     int e = size -1;
//     int m = s+(e-s)/2;
//     while(s <= e){
//         if(arr[m]>arr[m+1]){
//             return m;
//         }else if(arr[m]<arr[m-1]){
//             return m-1;
//         }else if(arr[s]>arr[m]){
//             e=m-1;
//         }else if(arr[s]<arr[m]){
//             s= m+1;
//         }
//         m = s+(e-s)/2;
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,1,2};
//     int size =9;
//     int ans =findpivot(arr,size);
//     cout<<"Ans is: "<<ans<<endl;

// }


