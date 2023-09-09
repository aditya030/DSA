#include<iostream>
using namespace std;
void printleftnodes(Node* root){
    if(root ==  NULL)
    return;
    //leaf node
    if(root->left==NULL && root->right == NULL)
    return;

    cout<<root->data<<" ";
    if(root->left){
         printleftnodes(root->left);
    }
   else{
    printleftnodes(root->right);
   }
}

void printleafboundary(Node* root){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right==NULL ){
        cout<<root->data<<" ";
    }
    printleafboundary(root->left);
    printleafboundary(root->right);
}

void printrightnodes(Node* root){
    if(root == NULL)
            return;
            if(root->left == NULL && root->right==NULL){
                return;
            }

            printrightnodes(root->right);
            printrightnodes(root->left);

            cout<<root->data;
}




void boundarytraversal(Node* root){
    if(root == NULL){
        return;
    }

    cout<< root->data<<" ";
    printleftnodes(root->left);

    printleafnodes(root);

    printrightnodes(root->right);
}
int main(){

}