/// This code is for deleting a node in the list;

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

void remove(int pos){
    node*k = head;
    if(pos==0){
        head = k->next;
    }
    else{
        for(int i=0;i<pos-1;i++){
            k = k->next;
            }
        k->next = k->next->next;   
    }
    
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

int main(void){

    push(1);
    push(2);
    push(3);
    printlist(head);
    remove(2);
    printlist(head);
}