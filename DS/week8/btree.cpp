#include <iostream>
using namespace std;

class Node{
    public:
        Node(int value){
            left = nullptr;
            data = value;
            right = nullptr;
        }
        Node * left;
        int data;
        Node * right;
};


void preorder(Node * root){
    if(!root){
        return;
    }
    else{
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node * root){
    if(!root){
        return;
    }
    else{
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(Node * root){
    if(!root){
        return;
    }
    else{
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}



int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Preorder of the tree: "; 
    preorder(root);
    cout << endl;
    
    cout << "Inorder of the tree: "; 
    inorder(root);
    cout << endl;

    cout << "Postorder of the tree: "; 
    postorder(root);
    cout << endl;

    return 0;
}