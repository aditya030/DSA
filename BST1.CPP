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

    return 0;
}
