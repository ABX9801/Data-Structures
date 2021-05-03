// Doubly Linked List
#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
    node*prev;
};

node* head = NULL;
node* tail = NULL;

void push(int val){
    if(head==NULL){
        node* tmp = new(node);
        tmp->data = val;
        tmp->next = head;
        tmp->prev = NULL;
        head = tmp;
        tail = tmp;
    }
    else{
        node* tmp = new(node);
        tmp->data = val;
        tmp->next = head;
        tmp->prev = NULL;
        node* k = head;
        k->prev = tmp;
        head = tmp;
    }    
}


//Function that prints the components of linked list
void printlist(node* head){
    node* k = head;
    while(k!=NULL){
        printf("%d ",k->data);
        k = k->next;
    }
    printf("\n");
}

void reverseprint(node* tail){
    node* k = tail;
    while(k!=NULL){
        printf("%d ",k->data);
        k = k->prev;
    }
    printf("\n");
}

int main(void){

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printlist(head);
    reverseprint(tail);
}