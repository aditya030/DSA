#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(vector<string> ans,int n1,int n2,int open,int close,vector<string> output){
    if(open==0 && close == 0){
        ans.push_back(output);
        return;

    }
   //include
   if(open>0){
       output.push_back('(');
       solve(ans,n1,n2,open-1,close,output);
       output.pop_back();
   }
   if(open>close){
       output.push_back(')');
       solve(ans,n1,n2,open,close-1,output);
       output.pop_back();
   }


}

int main(){
    vector<string> ans;
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int open = n1;
    int close = n2;
    vector<string> output =" ";
    solve(ans,n1,n2,open,close,output);
    ans = solve;
    cout<<ans;

}