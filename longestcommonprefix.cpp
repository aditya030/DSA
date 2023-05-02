#include<iostream>
using namespace std;

///need to do again not clear....

string longestcommonprefix(vector<string>& strs){
    string ans;
    int i=0;
    while(true){
        char curr_char=0;
        for(auto str:strs){
            if(i>=str.size()){
                //out of bound
                curr_char=0;
                break;
            }

            if(curr_ch==0){
                curr_ch=str[i];

            }
            else if(str[i]!=curr_ch){
                curr_ch=0;
                break;
            }
        }

        if(curr_ch==0){
            break;
        }
        ans.push_back(curr_ch);
        i++;
    }
    return ans;
}