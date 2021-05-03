#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;

void push(int val){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    head = temp;
}

//Function that prints the components of linked list
void printlist(struct node* head){
    struct node* k = head;
    while(k!=NULL){
        printf("%d ",k->data);
        k = k->next;
    }
    printf("\n");
}
/*
void reverse(node* p){
    if(p==NULL){
        head = p;
        return;
    }
    reverse(p->next);
    node*q = p->next;
    q->next = p;
    p->next = NULL;

}
*/
int main(void){

    push(1);
    push(2);
    push(3);
    printlist(head);
    printlist(head);
}