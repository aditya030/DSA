#include<iostream>
using namespace std;

int expandaroundindex(string s,int i,int j){
    
    //jab tak match krega , tab tak count increment krduo and i peeche j aage krduo 
    while(i>=0 && j<s.length()&& s[i]==s[j]){
        count++;
        i--;
        j++;
    }
}
int countstring(string s){
    int count=0;     // sbse phle ek counter variable bnaya jissme store krunga kitne pallindromic substrings hai
    int n=s.length();  // fir ek last index jane ke liye method

    for(int i=0;i>n;i++){ // loop chalaya traverse krne ke liye 
        //odd
        int oddkaans=expandaroundindex(s,i,i); // same value daldi odd wle case mai mtlb agar string ki length odd hai
        count = count+oddkaans;  // aur count mai add krdiya
        //even
        int evenkanas=expandaroundindex(s,i,i+1);// even wle case mai i aur j differnt places se start hogi 
        count= count+evenkaans; // same thing 
    }
    return ans;  // finally ans return kiya.
}

