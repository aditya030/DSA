#include<iostream>
using namespace std;

void printtopview(Node* root){
    if(root == NULL){
        return;
    }
    // create a map for storing horizo node se 
    map<int , int> topnode;

    //level order
    // we will store a pair consisting of node and horizontal distance

    queue< pair<Node* , int>> q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node* , int> temp = q.front();
        q.pop();


        Node* frontNode = temp.first();
        int hd = temp.second();


        
            // create entry

            topnode[hd]=frontNode->data;
            if(frontNode ->left)
            q.push(make_pair(frontNode->left,hd-1));

            if(frontNode->right)
            q.push(make_pair(frontNode->right,hd+1));

        }


        for(auto i:topnode){
            cout<<i.first<<" "<<i.second;
        }

    }


}
int main(){

}