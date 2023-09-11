#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to insert a node into the BST
Node* insertIntoBST(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insertIntoBST(root->left, data);
    } else {
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

// Function to take input and build a BST
void takeInput(Node* &root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}
void levelordertraversal(Node* root){
    queue<Node*> q;

    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();

        q.pop();

        cout<<temp->data<<" ";

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp ->right);
        }
    }
}


void preordertraversal(Node* root){
    //NLR
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}

void inordertraversal(Node* root){
    //lnR
    if(root == NULL){
        return;
    }

   
    preordertraversal(root->left);
     cout<<root->data<<" ";
    preordertraversal(root->right);
}

void postordertraversal(Node* root){
    //lrn
    if(root == NULL){
        return;
    }

   
    preordertraversal(root->left);
    preordertraversal(root->right);
    cout<<root->data<<" ";
}

Node* findNodeinbst(Node* root, int target){
    if(root == NULL){
        return NULL;
    }

    if(root->data == target){
        return root;
    }

    if(target>root->data){
        return findNodeinbst(root->right,target);

    }else{
        return findNodeinbst(root->left,target);
    }
}

void minval(Node* root){
    Node* temp = root;
    if(temp==NULL){
        return -1;
    }
    while(temp->left !=NULL){
        temp = temp->left;
    }
    return temp->data;
}

Node* deleteNodeinbst(Node* root,int target){
    if(root == NULL){
        return root;
    }

    //step 1
    Node* temp = findNodeinbst(root, target);
    // i wan to delete temp

    if(temp->left == NULL && temp->right==NULL){
        delete temp;
        return NULL;
    }

    if(temp->left == NULL && temp->right!=NULL){
        Node* child = temp->right;
        delete temp;
        return child;
    }
    if(temp->left!=NULL && temp->right == NULL){
        Node* child = temp->left;
        delete temp;
        return child;
    }
    if(temp->left!=NULL && temp->right!=NULL){
        // inorder predecessor and 
        int inordersuc = minval(temp->right);
        temp->data = inordersuc;
        deleteNodeinbst(temp->left,inordersuc);
    }
}


int main() {
    Node* root = NULL;
    cout << "Enter the data for nodes (-1 to stop):" << endl;
    takeInput(root);

    // You can now perform operations on the BST
    // For example, you can perform inorder traversal to check if the tree is built correctly.
    // Implement additional operations as needed.
    cout<<"printing the tree"<<endl;
    levelordertraversal(root);
    cout<<endl;
    inordertraversal(root);
    cout<<endl;
    cout<<"Printing inorder: "<<endl;
    preordertraversal(root);
    cout<<endl;
    cout<<"printing pretorder: "<<endl;
    postordertraversal(root);
    cout<<endl;
    cout<<"printing postorder: "<<endl;
    bool ans = findnodeinbst(root,15);
    cout<<"present or not: "<<ans<<endl;
    return 0;
}
