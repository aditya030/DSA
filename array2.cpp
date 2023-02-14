#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
// int main(){
//     int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};  //for printing element in a 2d array row wise
//     for(int i=0;i<3;i++){ //outer loop
//         for(int j=0;j<3;j++){   //inner loop
//             cout<<brr[i][j]<<" ";
//         }
//           cout<<endl;
//     }
   
// }
// int main(){
//     int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};//now for printing elements in a 2d array column wise
//     for(int i=0;i<3;i++){ //outer loop
//         for(int j=0;j<3;j++){   //inner loop
// cout<<brr[j][i]<<" ";
// }
// cout<<endl;
//     }
// }



// int main(){
//     int arr[2][2];
//     int rows=2;
//     int column=2;
//     for(int i=0;i<rows;i++){ //outer loop
//         for(int j=0;j<column;j++){   //inner loop
//             cin>>arr[i][j];
//         }
          
//     }
// for(int i=0;i<rows;i++){ //outer loop
//         for(int j=0;j<column;j++){   //inner loop
//             cout<<arr[i][j]<<" ";
// }
// cout<<endl;
// }
// }
//Row print sum function.
//   void printrowwisesum(int arr[3][3],int rows,int column){
      
//       for(int i=0;i<rows;i++){
//          int sum=0;
//           for(int j=0;j<column;j++){
//               sum =sum+arr[i][j];

//           }
//            cout<<sum<<endl;
//       }
//   }

// //ROW SUM PRINT
// int main(){
//     int arr[3][3];
//     int rows=3;
//     int column=3;
//     for(int i=0;i<rows;i++){ //outer loop
//         for(int j=0;j<column;j++){   //inner loop
//             cin>>arr[i][j];
//         }
          
//     }
//     for(int i=0;i<rows;i++){ //outer loop
//         for(int j=0;j<column;j++){   //inner loop
//             cout<<arr[i][j]<<" ";
// }
//          cout<<endl;
  
//    }
//    printrowwisesum(arr,rows,column);
//  }
    



    // COLUMN WISE SUM
//  void printcolumnwisesum(int arr[3][3],int rows,int columns){
//      for(int i=0;i<rows;i++){
//          int sum=0;
//          for(int j=0;j<columns;j++){
//               sum=sum+arr[i][j];
             
//          }
//          cout<<sum<<endl;
//      }
//  }

//     int main(){
//         int arr[3][3];
//         int rows=3;
//         int columns=3;
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<columns;j++){
//                 cin>>arr[i][j];
//             }
//         }


//         for(int i=0;i<rows;i++){
//             for(int j=0;j<columns;j++){
//                 cout<<arr[j][i]<<" ";
//             }
//             cout<<endl;
//         }
//         printcolumnwisesum(arr,rows,columns);
//     }



//Linear search of an element in a 2d array
//  bool linearsearch(int arr[3][3],int rows,int columns,int key){
//      for(int i=0;i<rows;i++){
//          for(int j=0;j<columns;j++){
//              if(arr[i][j]==key){
//                  return true;
//              }
//          }
//          return false;
//      }
 
// int main() {
//     int arr[3][3];
//     int rows=3;
//     int key =1;
//     int columns=3;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// linearsearch(arr,rows,columns,key);
    
// }
//  }
 


//FIND THE MAXIMUM NUMBER IN A 2D ARRAY
//  int findmax(int arr[3][3],int rows,int columns){
//     int max=INT_MIN;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             if(arr[i][j]>max){
//                 max=arr[i][j];
//             }
//         }
//     }
    
//     return max;
// }
// //Function for finding the  minimum number is 

// int findmin(int arr[3][3],int rows,int columns){
//     int min=INT_MAX;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             if(arr[i][j]<min){
//                 min=arr[i][j];
//             }
//         }
//     }
//     return min;
// }
// int main(){
//     int arr[3][3];
//     int rows=3;
//     int columns=3;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     findmax(arr,rows,columns);
//     findmin(arr,rows,columns);
//     cout<<findmax(arr,rows,columns)<<" :is the Maximum number"<<endl;
//     cout<<findmin(arr,rows,columns)<<" :is the Minimum number"<<endl;
// }

// CODE FOR FINDING THE TRANSPOSE OF A MATRIX 

// void findtranspose(int arr[3][3],int rows,int columns,int transpose[3][3]){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             // swap(arr[i][j],arr[j][i]);
//             transpose[j][i]=arr[i][j];
//         }
//     }
// }
// void printarray(int arr[3][3],int rows,int columns){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int arr[3][3];
//     int rows=3;
//     int columns=3;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     int transpose[3][3];
//     findtranspose(arr,rows,columns,transpose);
//     printarray(transpose,rows,columns);
// }

// int main(){
// vector<vector <int> >arr;
// vector<int>a{1,2,3};
// vector<int>b{4,5,6};
// vector<int>c{7,8,9};
// arr.push_back(a);
// arr.push_back(b);
// arr.push_back(c);

// for(int i=0;i<arr.size();i++){
//     for(int j=0;j<arr.size(i);j++){
//         cout<<arr[i][j];
//     }
//     cout<<endl;
// }
// return 0;
// }
int main(){
    int row =3;
    int column=5;
    vector<vector<int> >arr(row,vector<int>(column,101))
}