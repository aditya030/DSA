#include<iostream>
#include<vector>
using namespace std;


// int main(){  uncomment for codes till line no->53
//     // create vector
//     vector<int>arr;
//     cout<<arr.size()<<endl; // at starting the default size is->0
//     cout<<arr.capacity()<<endl;// how much elements i can store in an array


//     //insert
//     arr.push_back(5);
//     arr.push_back(6);

//     //print
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// cout<<endl;


// //remove
// arr.pop_back();
// // again printing
// for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// cout<<endl;

// int n;
// cout<<"enter the value of n to know ur array size";
// cin>>n;
// vector<int>brr(n,-1); // brutfully assigning the vector size and from which value i want to initialize the array
// cout<<"sizer of b: "<<brr.size()<<endl;
// cout<<"capacity of b: "<<brr.capacity()<<endl;

// for(int i=0;i<brr.size();i++){
//         cout<<brr[i]<<" ";
//     }

// // vector<int>crr{10,20,30,40};
// // for(int i=0;i<crr.size();i++){
// //         cout<<crr[i]<<" ";
// //     }



// cout<<endl;
 

//  cout<<"vector brr is empty or not: "<<brr.empty()<<endl;



//To find a unique element in an array

// int findunique(vector<int>arr){     //function to find the unique element using xor concept because it will cancel all repeating
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//        ans= ans^arr[i];  //we used 0 as ans because 0^10^10^20 will give use eventually 20 as unique and other element will cut fromitself becausw in xor same elements cut themselves
//     }
//     return ans;
// }


// int main(){
// int n;
// cout<<"Enter the no of elements you want in an array: "<<endl;
// cin>>n;
// vector<int>arr(n);
// cout<<"enter the elements inside the array: "<<endl;
// for(int i=0;i<arr.size();i++){
//     cin>>arr[i];
// }

// int uniqueelement=findunique(arr);
// cout<<"Unique element is: "<<uniqueelement;


//Union
// int main(){
//     int arr[]={1,3,5,7,9};
//     int sizea=5;
//     int brr[]={2,4,6,8};
//     int sizeb=4;

//     vector<int>ans;

//     //now pushing all the elements of array a into ans array
//     for(int i=0;i<sizea;i++){
//         ans.push_back(arr[i]);
//     }

//     ////now pushing all the elements of array b into ans array
//     for(int i=0;i<sizeb;i++){
//         ans.push_back(brr[i]);
//     }

//     cout<<"printing the finale array: "<<endl;
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// return 0;
// }

//INTERSECTION
// int main(){
//     int arr[]={1,3,5,7,9};
//     int sizea=5;
//     int brr[]={2,3,4,5};
//     int sizeb=4;


//     vector<int>ans;

//     for(int i=0;i<sizea;i++){
//         for(int j=0;j<sizeb;j++){
//             if(arr[i]==brr[j]){
//                 ans.push_back(brr[j]); // we can use arr[i] as well or make a variable element 
//             }
//         }
//     }

//     //printing
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }



//PAIR SUM
// int main(){
//     int arr[]={10,20,30,40,50};
//     int size=5;
//     int sum=80;
// /// outer loop will traverse for each element
//     for(int i=0;i<size;i++){
//         int element=arr[i];
//         //for every element will traverse on aage wala element
//     for(int j=i+1;j<size;j++){
//         if(element+arr[j]==sum){
//             cout<<"pair found: "<<element<<","<<arr[j]<<endl;
//         }
       
//     }
// }
// }

//TRIPLET SUM
// int main(){
//     int arr[]={10,20,30,40,50,60,70};
//     int sum=80;
//     int size=7;
//     for(int i=0;i<size;i++){
//         // int element =arr[i];
//         for(int j=i+1;j<size;j++){
//             // int nextelement=arr[j];
//             for(int k=j+1;k<size;k++){
//                 if(arr[i]+arr[j]+arr[k]==sum){
//                     cout<<"triplet found: "<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
//                 }
//             }
//         }
//     }
// }


// now for 4 numbers.
// int main(){
//     int arr[]={2,4,6,8,10,5,12,14,16};
//     int sum=26;
//     int size=9;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             for(int k=j+1;k<size;k++){
//                 for(int l=k+1;l<size;l++){
//                     if(arr[i]+arr[j]+arr[k]+arr[l]==sum){
//                         cout<<"four number sum found: "<<"{"<<arr[i]<<","<<arr[j]<<","<<arr[k]<<","<<arr[l]<<"}"<<endl;
//                     }
//                 }
//             }
//         }
//     }
// }


// Sort 0'sin the first place and then 1'sin the last place
int main(){
    int arr[]={0,1,1,1,1,1,1,1,1,0,0};
    int size=11;
    int start = 0;
	int end = size-1;
	int i = 0;
    while(start<=end) {
		
		if(arr[i] == 0) {
			
			swap(arr[start], arr[i]);
			start++;
			i++;
			
		}
		else {
			
			swap(arr[end], arr[i]);
			
			end--;
						

		}
	}
	
	//print
	for(auto val : arr) {
		cout << val << " ";
	}
	
	
	
	
	return 0;
}

