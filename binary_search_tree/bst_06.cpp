// Level Order Traversal of Tree
// Breadth First search
#include<iostream>
#include<queue>

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

node* LevelOrderTraversal(node* root){
    if(root==NULL){
        cout<<"Tree is Empty";
    }
    else{
        queue<node*> Q;
        Q.push(root);
        while(!Q.empty()){
            node* current = Q.front();
            if(current->left!=NULL){
                Q.push(current->left);
            }
            if(current->right!=NULL){
                Q.push(current->right);
            }
            Q.pop();
            cout<<current->data<<" ";
        }
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

    LevelOrderTraversal(root);
}
