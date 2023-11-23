#include <iostream>
using namespace std;

class Node{
    public:
        Node* left;
        int data;
        Node* right;
        Node(int value){
            left = nullptr;
            data = value;
            right = nullptr;
        }
};


Node* insert(Node* root,int value){
    if(!root){
        root = new Node(value);
        return root;
    }
    else if(root->data > value){
        root->left = insert(root->left,value);
    }
    else if(root->data < value){
        root->right = insert(root->right,value);
    }
    return root;
}

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


Node * Inorder_Success(Node * root){
    Node * temp = root;
    while(!root->left){
        temp = temp->left;
    }
    return temp;
}

Node * remove(Node * root, int value){
    if(root->data > value){
        root->left = remove(root->left,value);
    }
    else if(root->data < value){
        root->right = remove(root->right,value);
    }
    else{
        if(!root->left and !root->right){
            return nullptr;
        }
        else if(!root->left){
            return root->right; 
        }
        else if(!root->right){
            return root->left;
        }
        else{
            Node * temp = Inorder_Success(root->right);
            root->data = temp->data;
            root->right = remove(root->right,temp->data);
        }
    }
        return root;
}


int main(){
    Node* root = NULL;
    for (int i = 0; i < 7; i++)
    {
        /* code */
        root = insert(root,i);
    }
    

    cout << "Preorder of the tree: "; 
    preorder(root);
    cout << endl;
    
    cout << "Inorder of the tree: "; 
    inorder(root);
    cout << endl;

    cout << "Postorder of the tree: "; 
    postorder(root);
    cout << endl;
    
    remove(root,6);
    cout << endl << "Removing 6 from BST" << endl << endl;


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