#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;

void push(int val){
    node* temp = (node*)malloc(sizeof(node));
    temp->next = head;
    temp->data = val;
    head = temp;
}

//insert an element at required position 
void insert(int pos,int val){
    if(pos!=0){
        node* k = head;
        for(int i=0;i<pos-1;i++){
            k = k->next;
        }
        node* temp = (node*)malloc(sizeof(node));
        temp->data = val;
        temp->next = k->next;
        k->next = temp;
    }
    else{
        node* temp = (node*)malloc(sizeof(node));
        temp->data = val;
        temp->next = head;
        head = temp;
    }

}

//POP()
void pop(){
    if(head->next==NULL){
        head = NULL;
    }
    else{
        head = head->next;
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
    insert(2,5);
    printlist(head);
}