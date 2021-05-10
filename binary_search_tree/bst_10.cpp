// Deleting a node in a ninary search tree

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

node* Delete(node* root,int val){
    if(root==NULL) return root;
    else if(val < root->data ){
        root->left = Delete(root->left,val);
    }
    else if(val > root->data){
        root->right = Delete(root->right,val);
    }
    else{
        //Case 1 the node to be deleted has no child
        if(root->left==NULL && root->right==NULL){
            delete root;
            root = NULL;
            return root;
        }
        //Case 2 node has no left child
        else if(root->left == NULL){
            node* temp = root;
            root = root->right;
            delete temp;
            return root;
        }
        //case 2 node has no right child
        else if(root->right == NULL){
            node* temp = root;
            root = root->left;
            delete temp;
            return root;
        }
        //case 3 node has both childs
        else{
            node* temp = min(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
    }

}

void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
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

    cout<<"INORDER (before deletion) : ";
    inorder(root);
    cout<<endl;
    cout<<"INORDER (after  deletion) :  ";
    root = Delete(root,10);
    inorder(root);

}
