//Implementation of a queue using linked list

#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* front = NULL;
node* rear = NULL;

bool IsEmpty(){
    if(front==NULL && rear==NULL){
        return true;
    }
    return false;
}

void Enqueue(int val){
    node* temp = new(node);
    temp->data = val;
    temp->next = NULL;
    if(IsEmpty()){
        front = temp;
        rear  = temp;
    }
    else{
        rear->next = temp;
        rear = temp;
    }
}

void Dequeue(){
    node* temp = front;
    if(IsEmpty()){
        cout<<"Queue is Empty";
    }
    else if(front==rear){
        front = NULL;
        rear = NULL;
    }
    else{
        front = front->next;
    }
    free(temp);

}

void print(){
    node* k = front;
    while(front!=NULL){
        cout<<k->data<<" ";
        k = k->next;
    }
}

int main(void){
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Enqueue(6);
    Dequeue();
    print();
}