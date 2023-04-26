#include<iostream>
using namespace std;
bool checkpallindrome(string s,int i,int j){ // just a normal function to check wether it is a palllindrome or not 
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
 bool vallidpallindrome(string s){ // now the problem statement was that to check that if the string is appalindrome or not even if we removes one element from the string
    int i =0;//2 pointer approach starting
    int j =s.length()-1; /// ending

    while(i<=j){ // base condition
        if(s[i]!=s[j]){ // if they are not equal then we will remove that index element or the element that is not matched with the element that we are standing on
            return checkpallindrome(s,i+1,j)||checkpallindrome(s,i,j-1); // this would be the condition for that 
        }
        else{
            //s[i]==s[j] // else increment and check for other 
            i++;
            j--;

        }

    }
    return true;
}
