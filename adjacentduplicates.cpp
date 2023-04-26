#include<iostream>
using namespace std;
 string removeduplicates(string s){
    string ans ="";
    int size =6;
    int i =0;

    while(i<size){
        if(ans.size()-1==s[i]){
            ans.pop_back();
        }else{
            ans.push_back(ans[i]);
        }
        i++;
    }
    return ans;
 }


int main(){
    string ans ="abbaca";
    removeduplicates(ans);
    cout<<"the final ans is: "<<ans<<endl;
}
    