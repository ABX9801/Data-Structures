//Reversing a linked list using a stack;
#include<iostream>
#include<stack>

using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;

void push(int val){
    node* temp = new(node);
    temp->data = val;
    temp->next = head;
    head = temp;
}

void printlist(node* head){
    node* k = head;
    while(k!=NULL){
        cout<<k->data<<" ";
        k = k->next;
    }
    cout<<endl;
}

void pop(){
    head = head->next;
}

node* Reverse(node* head){
    stack<node*> S;
    node* k = head;
    while(k!=NULL){
        S.push(k);
        k = k->next;
    }
    k = S.top();
    node* hd = k;
    S.pop();
    while(!S.empty()){
        k->next = S.top();
        k = k->next;
        S.pop();
    }
    k->next = NULL;
    return hd;
}

int main(void){
    push(3);
    push(4);
    push(5);
    printlist(head);
    node* hd = Reverse(head);
    printlist(hd);
    return 0;
}