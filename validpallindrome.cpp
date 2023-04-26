#include<iostream>
using namespace std;
bool checkpallindrome(string s,int i,int j){
     while(i<=j){
        if(s[i]!=s[j]){
            return false;
            i++;
            j--;
        }else{
            return true;
        }
     }
}
 bool vallidpallindrome(string s){
    int i =0;
    int j =s.length()-1;

    while(i<=j){
        if(s[i]!=s[j]){
            return checkpallindrome(s,i+1,j)||checkpallindrome(s,i,j-1);
        }
        else{
            //s[i]==s[j]
            i++;
            j--;

        }

    }
    return true;
}
