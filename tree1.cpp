#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

};

Node* buildtree(){
    int data;
    cout<<"enter the data: "<<endl;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    // step a, b ,c
    Node* root = new Node(data);
    cout<<"enter data for left part of : "<<data<<": node"<<endl;
    root->left = buildtree();
     cout<<"enter data for right part of : "<<data<<"node"<<endl;
    root->right = buildtree();

    return root;

}
int main(){

Node* root = NULL;

root = buildtree();

}