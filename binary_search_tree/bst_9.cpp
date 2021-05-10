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

bool IsBST(node* root, int minValue, int maxValue){
    if(root==NULL){
        return true;
    }
    else if(root->data>minValue && root->data<maxValue && IsBST(root->left,minValue,root->data) && IsBST(root->right,root->data,maxValue)){
        return true;
    }
    else{
        return false;
    }
}

bool IsBinarySearchTree(node* root){
    return IsBST(root,-10000,10000);
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
    //root->data = 100;
    cout<<IsBinarySearchTree(root);
}