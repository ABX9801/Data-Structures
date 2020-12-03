#include<iostream>

using namespace std;


// In this code we will observe linked list as a queue implementation
struct node
{
    int data;
    node* next;
};

node* head = NULL;

void append(int value){
    if(head==NULL){
        node* temp = (node*)malloc(sizeof(node));
        head = temp;
        temp->data = value;
        temp->next = NULL;
    }
    else{
        node* k = head;
        while(k->next!=NULL){
            k = k->next;
        }
        node* temp = (node*)malloc(sizeof(node));
        k->next = temp;
        temp->next = NULL;
        temp->data = value;
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

    append(1);
    append(2);
    append(3);
    printlist(head);

    return 0;
}