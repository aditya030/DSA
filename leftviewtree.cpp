#include<iostream>
using namespace std;
void leftview(Node* root,vector<int> &ans, int level)
{
if(root == NULL){
    return;
}

if(level == ans.size()){
    ans.push_back(root->data);
}

//
leftview(root->left,ans,level+1);
leftview(root->right,ans,level+1);
}
})
int main(){

}