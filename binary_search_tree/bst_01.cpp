//binary tree implementation
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
    else if(val<=root->data){
        root->left = Insert(root->left,val);
    }
    else{
        root->right = Insert(root->right,val);
    }
    return root;
}



int main(void){
    node* root = NULL;
    root = Insert(root,5);
    root = Insert(root,4);
    root = Insert(root,6);
    cout<<root->data;
    cout<<" "<<root->left->data;
    cout<<" "<<root->right->data<<endl;
}
