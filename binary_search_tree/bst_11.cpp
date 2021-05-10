// Finding Inorder Successor of the node in O(h) time

#include<iostream>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* getnewnode(int val){
    node* temp = new(node);
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node* Insert(node* root, int val){
    node* tmp = getnewnode(val);
    if(root==NULL){
        root = tmp;
    }
    else if(val < root->data){
        root->left = Insert(root->left,val);
    }
    else{
        root->right = Insert(root->right,val);
    }
    return root;
}

node* min(node* root){
    if(root==NULL){
        return  NULL;
    }
    else if(root->left==NULL){
        return root;
    }
    else{
        return min(root->left);
    }
}

node*  Search(node* root,int val){
    if(root==NULL){
        return NULL;
    }
    else if(root->data == val){
        return root;
    }
    else if(val<root->data){
        return Search(root->left,val);
    }
    else{
        return Search(root->right,val);
    }
}

node* InorderSuccessor(node* root, int val){
    node* current = Search(root,val);
    if(current==NULL){
        return;
    }
    else if(current->right!=NULL){
        return min(root->right);
    }
    else{
        node* successor = NULL;
        node* ancestor  = root;
        while (ancestor != current){
            if(current->data<ancestor->data){
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else{
                ancestor = ancestor->right;
            }
        }
        return successor;
        
    }
}