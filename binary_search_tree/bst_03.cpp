// code to find min max elements of the tree : normal method

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
        return -1;
    }
    while(root->left!=NULL){
        root = root->left;
    }
    return root->data;
}

int max(node* root){
    if(root==NULL){
        return -1;
    }
    while(root->right!=NULL){
        root = root->right;
    }
    return root->data;
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
