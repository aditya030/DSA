#include<iostream>
using namespace std;
int main(){
// //prtinting solid rectangle
// //outer loop for rows
// for(int i=0;i<3;i++){
//     //inner loop for column
//     for(int j=0;j<5;j++){
//         cout<<"* ";
// }
// cout<<endl;
//     }



//SQUARE PATTER 4*4
// int n;
// cout<<"enter the no rows*columns_"<<endl;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// generic hollow pattern.
// int row_count;
// int col_count;
// cin>>row_count;
// cin>>col_count;

// for(int i=0;i<row_count;i++){
//     if(i==0||i==row_count-1){
//         for(int j=0;j<col_count;j++){
//             cout<<"* ";
//         }
//     }
//         else{
//             cout<<"* ";
        
//         for(int i=0;i<row_count-2;i++){
//             cout<<" ";
//         }
//         cout<<"* ";
//     }
//     cout<<endl;
// }
//  }
//        int rowCount, colCount;
//     cin >> rowCount;
//      cin >> colCount;
// for(int row=0; row<rowCount; row=row+1) {
//     //  //first row or last row -> print 5 *
//      if(row == 0  || row == rowCount-1 ){
//         for(int col=0; col<colCount; col++) {
//               cout << "* ";
//           }
//      }
//      else {
//     //      //remainging middle rows
//     //      //first star
//           cout << "* ";
//     //      //spaces
//          for(int i=0; i< colCount-2; i=i+1){
//              cout << "  ";
//           }
//     //      //last star
//          cout << "* ";
//      }
//       cout << endl;
//      }
// }

//pyramid 
//  int n;
//  cin>>n;
//  for(int i=0;i<n;i++){
//      for(int j=0;j<i+1;j++){
//          cout<<"* ";
//      }
//      cout<<endl;
//  }
// }

//inverse pyramid

// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
 
 //numeric pyramid
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<j+1;
//     }
//     cout<<endl;
// }

// }

//inverse numeric pyramid

int n;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<j+1;
    }
    cout<<endl;
}
}