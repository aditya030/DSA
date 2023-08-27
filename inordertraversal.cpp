#include<iostream>
using namespace std;
void inordertraversal(Node* root){
    if(root == NULL){
        return;
    }
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}

void preordertraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(Node* root){
    if(root == NULL){
        return;
    }
    preordertraversal(root->left);
    preordertraversal(root->right);
    cout<<root->data<<" ";
}
int main(){

}