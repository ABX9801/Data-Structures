//code to find the height of  binay tree;

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

int max(int a,int b){
    if (a>b){
        return a;
    }
    return b;
}

int height(node* root){
    if(root==NULL){
        return -1;
    }
    int left_height   = height(root->left);
    int right_height  = height(root->right);
    return max(left_height,right_height) + 1;
}

int main(void){
    node* root = NULL;
    root = Insert(root,10);
    root = Insert(root,5);
    root = Insert(root,15);
    root = Insert(root,7);

    cout<<height(root);
}