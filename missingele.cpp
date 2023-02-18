#include<iostream>
#include<vector>
using namespace std;
// // here is the function for the finding the missing element 
//  void missingele(int arr[], int size ){
//     int i=0;
//     while(i<size){           //condition should be that the element should not be greatewr than the size of the array
//         int index = arr[i]-1;  // index should be initialized with the real value /*
//         if(arr[index]!=arr[i]){  //swap if not equal
//             swap(arr[index],arr[i]);
//         }else{
//             i++;// move to next element 
//         }
//     }
// }

// int main(){
//     int arr[]={0,0,0,0,0};
//     int size = 5;
//     missingele(arr,size);
//     cout<<"Printing the missing element: ";
//     for(int i=0;i<size;i++){
//         if(arr[i]!=i+1){ ///*
//         cout<<"("<<i+1<<")"<<" ";
//         }
//     }
// cout<<endl;
// }

//Find first repeating element 
// here lets use the first approach 
// int findrepeating(int arr[],int size){
// for(int i=0;i<size;i++){ //here first we will iterate through every element of the array
//     bool isrepeated =false;  // lets make a variable bool type to check if it is repeated or not and initialize it with false as of now

//     for(int j=i+1;j<size;j++){  // now to check that the element is repeating or not we will initialize from i+1 because we are checking for i only and we will comapre it with itself if we initialize it with i
//         if(arr[i]==arr[j]){ // if found 
//             isrepeated =true; // change the variable to true
//             return i+1; // and return 1 based indexing thats why i+1
//         }
        
//     }
//     //cout<<i+1;

// }
// return -1; // else simply return -1; that is for not found in the array
// }

// int main(){
// int arr[]={1,2,3,2,3};
// int size =5;
// findrepeating(arr,size);
// // int repeating =findrepeating(arr,size);
// // for(int i=0;i<size;i++){
// //     cout<<arr[i];
// // }

// //}

// now lets find the optimal solution using stl c++ hashing function
//it is just the function you need to pass the array in main function
// int findrepeating(int arr[],int size){
//     unordered_map<int, int>hash;  // creating a hash table to store all the elements that how much time is it occuring in an array
//     for(int i=0;i<size;i++){   // now iterating the array
//         hash[a[i]]++;  //and increasing the count from 0 to 1 for each element 
//     }
//     for(int i=0;i<size;i++){  // now aftwer storing again iterating the loop 
//         if(hash[a[i]]>1){ // if the occurance of the element is mor ethan 1 return the element 
//             return i+1;  // and here we need to used 1 based indexing thats why i+1
//         }
//     }
//     return -1; // else return -1
// }
//FIND COMMON ELEMENT IN 3 SORTED ARRAY
vector <int> findcommon(int arr[],int brr[],int crr[],int size1,int size2,int size3){ // THIS IS THE FUNCTION FOR FINDING THE COMMON ELEMENT
    vector<int>ans; //making a vector to store the value which is common in 3 sorted array
    set<int>st;  // using a c++ stl library set for to remove the duplicate 
    int i=0;
    int j=0;
    int k=0;
    while(i<size1 && j<size2 && k<size3){  // basic condition for iterating through the loop till the size 
        if(arr[i]==brr[j]==crr[k]){ // first if the elements are equal in 3 arrays then just insert it into the set to check if the numbers are repeating then set will remove the duplicate because we all want one common element only in 3 arrays
            st.insert(arr[i]); // here pushed the set to remove the duplicates 
            i++,j++,k++;  // if found then the move to next element to check if there is more common
        }else if(arr[i]<brr[j]){   //then we will find the smallest element then increment it and then check for other elements is it common.
            i++;
        }else if(brr[j]<crr[k]){
            j++;
        }else{
            k++;
        }
    }
    for(auto i:st){   // now we will iterate through set 
        ans.push_back(i);  // then push it
    }
    return ans;  // return the ans.
}
int main(){
    int arr[]={1,5,10,20,40,80};
    int brr[]={6,7,20,80,100};
    int crr[]={3,4,15,20,30,70,80,120};
    int size1=6;
    int size2=5;
    int size3=8;
    findcommon(arr,brr,crr,size1,size2,size3);
}