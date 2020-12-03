#include<iostream>

using namespace std;

// In this code we will observe linked list as a stack implementation
struct node
{
    int data;
    node* next;
};

node* head = NULL;

// Push()
void push(int val){
    node* temp = (node*)malloc(sizeof(node));
    temp->next = head;
    temp->data = val;
    head = temp;
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


int main(){
    
    push(1);
    push(2);
    push(5);
    printlist(head);//5 2 1
    pop();
    push(6);
    printlist(head);//6 2 1

    return 0;
}