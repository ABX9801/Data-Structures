//Implementation of a circular queue;

#include<iostream>

using namespace std;

int A[10];
int front=-1;
int rear =-1;

bool IsEmpty(){
    if(front==rear&&front==-1){
        return true;
    }
    return false;
}

bool IsFull(){
    if((rear+1)%10==front){
        return true;
    }
    return false;
}

void Enqueue(int a){
    if(IsEmpty()){
        front=0;
        rear=0;
        A[rear] = a;
    }
    else if(IsFull()){
        cout<<"QUEUE IS FULL";
    }
    else{
        rear = (rear+1)%10;
        A[rear] = a;
    }
    
}

void Dequeue(){
    if(IsEmpty()){
        cout<<"Queue is empty";
    }
    else if(front==rear){
        front = -1;
        rear = -1;
    }
    else{
        front = (front+1)%10;
    }
}

void Print(){
    int c = front;
    while(c!=rear){
        cout<<A[c]<<" ";
        c = (c+1)%10;
    }
    cout<<A[c++]<<" ";
}

int main(void){
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Enqueue(6);
    Enqueue(7);
    Enqueue(8);
    Enqueue(9);
    Enqueue(10);
    Dequeue();
    Dequeue();
    Enqueue(51);
    Enqueue(23);
    Dequeue();
    Print();
}