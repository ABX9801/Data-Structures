//Code to reverse a linked list.
#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;

void push(int val){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = val;
    temp->next = head;
    head = temp;
}

//Function that prints the components of linked list
void printlist(node* head){
    node* k = head;
    while(k!=NULL){
        printf("%d ",k->data);
        k = k->next;
    }
    cout<<endl;
}

void reverse(){
    node* crnt = head;
    node* prev = NULL;
    node* nxt = NULL;
    while(crnt!=NULL){
        nxt = crnt->next;
        crnt->next = prev;
        prev = crnt;
        crnt = nxt;
    }
    head = prev;
}

//print contents of list in reverse order
void printreverse(node* h){
    if(h==NULL){
        return;
    }
    printreverse(h->next);
    cout<<h->data<<" ";
}

int main(void){

    push(1);
    push(2);
    push(3);
    printlist(head);
    printreverse(head);
    cout<<endl;
    reverse();
    printlist(head);
}