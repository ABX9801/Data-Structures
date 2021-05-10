// Find if the binary tree is a binary search tree or not???

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
}

node* Insert(node* root,int val){
    if(root==NULL){
        root = getnewnode(val);
    }
    else if(val<root->data){
        root->left = Insert(root->left,val);
    }
    else{
        root->right = Insert(root->right,val);
    }
    return root;
}

bool IsSubtreeGreater(node* root,int val){
    if(root==NULL){
        return true;
    } 
    else if(root->data > val && IsSubtreeGreater(root->left,val)&&IsSubtreeGreater(root->right,val)){
        return true;
    }
    else{
        return false;
    }

}

bool IsSubtreeLesser(node* root,int val){
    if(root==NULL){
        return true;
    }

    else if(root->data <= val && IsSubtreeLesser(root->left,val)&&IsSubtreeLesser(root->right,val)){
        return true;
    }
    else{
        return false;
    }
}

bool IsBinarySearchTree(node* root){
    if(root==NULL){
        return true;
    }
    else if(IsSubtreeLesser(root->left,root->data) && IsSubtreeGreater(root->right,root->data) && IsBinarySearchTree(root->left) && IsBinarySearchTree(root->right)){
        return true;
    }
    else{
        return false;
    }
}

int main(void){
    node* root = NULL;
    root = Insert(root,15);
    root = Insert(root,20);
    root = Insert(root,10);
    root = Insert(root,11);
    root = Insert(root,7);
    root = Insert(root,18);
    root = Insert(root,25);
    root->data = 100;
    cout<<IsBinarySearchTree(root);
}