//This is the Array Implementation of stack
#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* top = NULL;

void push(int val){
    node* temp = new(node);
    temp->data = val;
    temp->next = top;
    top = temp;
}

void pop(){
    top = top->next;
}

void printstack(){
    if(top==NULL){
        cout<<"STACK IS EMPTY"<<endl;
        return;
    }
    node* k = top;
    while(k!=NULL){
        printf("%d ",k->data);
        k = k->next;
    }
    cout<<endl;
}

void Top(){
    if(top==NULL){
        cout<<"STACK IS EMPTY"<<endl;
    }
    else{
        cout<<"The Top Element of the Stack is : "<<top->data<<endl;
    }
}

void IsEmpty(){
    if(top==NULL){
        cout<<"STACK IS EMPTY";
    }
    else{
        cout<<"STACK IS NOT EMPTY";
    }
    cout<<endl;
}

int main(void){
    cout<<"WELCOME TO LINKED-LIST IMPLEMENTATION OF STACK"<<endl<<endl;
    int choice;
    int n;
    cout<<"1: Print Stack Elements "<<endl;
    cout<<"2: Push Element"<<endl;
    cout<<"3: Pop  Element"<<endl;
    cout<<"4: Get Top Element of Stack"<<endl;
    cout<<"5: Check if Stack is empty"<<endl;
    cout<<"6: Exit the App"<<endl;
    while(true){
        cout<<"enter your choice : ";
        cin>>choice;
        if(choice==1){
            printstack();
        }
        else if(choice==2){
            cout<<"Enter the element you want to push. : ";
            cin>>n;
            push(n);
        }
        else if(choice==3){
            pop();
        }
        else if(choice==4){
            Top();
        }
        else if(choice==5){
            IsEmpty();
        }
        else if(choice==6){
            break;
        }
        else{
            cout<<"INVALID CHOICE"<<endl;
        }
    }   
}