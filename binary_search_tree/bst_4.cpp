// Finding min and max elements in a tree : Recursive solution

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


int min(node* root){
    if(root==NULL){
        return  -1;
    }
    else if(root->left==NULL){
        return root->data;
    }
    else{
        return min(root->left);
    }
}

int max(node*  root){
    if(root==NULL){
        return -1;
    }
    else if(root->right==NULL){
        return root->data;
    }
    else{
        return max(root->right);
    }
}

int main(void){
    node* root = NULL;
    root = Insert(root,15);
    root = Insert(root,40);
    root = Insert(root,6);
    root = Insert(root,14);
    root = Insert(root,22);
    root = Insert(root,5);

    cout<<min(root);
    cout<<" "<<max(root);
}