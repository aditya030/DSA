#include<iostream>
using namespace std;


//  void permutationofastring(string str,int i){
//      if(i>=str.length()){
//          cout<<str<<" ";//
//          return;
//      }

//       for(int j=i;j<str.length();j++){// abc wle case mai j =0,1,2 ke liye chlegi sbse phle j aur i same place mai rhega fir i har next next step mai incrememnt krega 
//           swap(str[i],str[j]); // aur fir humme swap krna hoga 
//           permutationofastring(str,i+1);  // fir agge ka kaam recursion sambhalega 
//           //swap(str[i],str[j]);  // fir wapas se isliye krenge because jab hum j =1 case mai jayenge tab string ko humme recreate krke wapas se whi lana hoga jo ki input mai hai
//       }

//  }




// int main(){
//     string str = "abc";
//     int i = 0;

//     permutationofastring(str,i);
// }

void stringcombinations(string str,int i){
    if(i>=str.length()){
        return;
    }

    for(int j=i;j<str.length();j++){

        swap(arr[i],arr[j]);
        stringcombinations(str,i+1);
        swap(arr[i],arr[j]);
    }
}

int main(){
    string str = "abc";
    int i =0;
    stringcombinations(str,i);
}