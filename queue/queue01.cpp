//ARRAY IMPLEMENTATION OF QUEUE
#include<iostream>

using namespace std;

int A[100];
int front = -1;
int rear  = -1;

bool IsEmpty(){
    if(front==-1 && rear==-1){
        return true;
    }
    return false;
}

void Enqueue(int a){
    if(IsEmpty()){
        front = 0;
        rear = 0;
    }
    else{
        rear++;
    }
    A[rear] = a;
}

void Dequeue(){
    if(IsEmpty()){
        cout<<"QUEUE IS EMPTY";
    }
    else{
        if(front==rear){
            front = -1;
            rear = -1;
            cout<<"QUEUE IS EMPTY";
        }
        else{
            front++;
        }
    }
}

int main(void){
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Dequeue();
    for(int i=front;i<=rear;i++){
        cout<<A[i]<<" ";
    }
}