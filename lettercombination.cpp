#include<iostream>
#include<Vectors>
using namespace std;


void solve(vector<string>ans,int index,string output,string digits,vector<string>mapping){
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }

    int digit = digit[index]-1;
    string value =mapping[digit];
    for(int i =0;i<value.length();i++){
        char ch = value[i];
        output.push_back(ch);
        solve(ans,index+1,output,digit,mapping);
        output.pop_back();
    }
}






int main(){
    vector<string> ans;
    string digit;
    if(digit.length()==0){
        return ans;
    }
    int index =0;
    string output ="";
    vector<string> mapping;
    mapping[2]="abc";
    mapping[3]="def";
    mapping[4]="ghi";
    mapping[5]="jkl";
    mapping[6]="mno";
    mapping[7]="pqrs";
    mapping[8]="tuv";
    mapping[9]="xyz";

    solve(ans,index,output,digits,mapping);
}