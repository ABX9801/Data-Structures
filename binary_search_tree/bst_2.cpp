//search elements in a binary tree
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

bool Search(node* root,int val){
    if(root==NULL){
        return false;
    }
    else if(root->data == val){
        return true;
    }
    else if(val<root->data){
        return Search(root->left,val);
    }
    else{
        return Search(root->right,val);
    }
}

int main(void){
    node* root = NULL;
    root = Insert(root,5);
    root = Insert(root,4);
    root = Insert(root,6);
    root = Insert(root,8);
    root = Insert(root,1);
    root = Insert(root,7);
    int s;
    while(true){
        cout<<"Enter the number you want to search(enter 0  to quit) : ";
        cin>>s;
        if(s==0){
            break;
        }
        bool ans = Search(root,s);
        if(ans){
            cout<<"Found"<<endl;
        }
        else{
            cout<<"Not Found"<<endl;
        }
    }
}