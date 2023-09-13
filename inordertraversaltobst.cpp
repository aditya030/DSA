#include<iostream>
using namespace std;

Node* bstusinginorder(int inorder[],int s, int e){
    if(s>e){
        return NULL;
    }
    
    int mid = s+e/2;
    int element = inorder[mid];
    Node* root = new Node[element];

    root->left = bstusinginorder(inorder,s,mid-1);
    root->right = bstusinginorder(inorder,mid+1,e);

    return root;
}
int main(){

    int inorder[]={1,2,3,4,5,6,7,8,9};
    int s =0;
    int e =8;
    Node* root = bstusinginorder(inorder,s,e);
    levelordertraversal(root);

}