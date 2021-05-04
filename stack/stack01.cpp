// This is the array implementation of stack;
#include<iostream>

using namespace std;

int stack[100];
int top = -1;

void printstack(){
    if(top==-1){
        cout<<"STACK IS EMPTY";
        cout<<endl;
    }
    else{
        for(int i=0;i<=top;i++){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}

void push(int val){
    top = top+1;
    if(top>=100){
        cout<<"STACK OVERFLOW"<<endl;
        return;
    }
    stack[top] = val;
}

void pop(){
    if(top==-1){
        cout<<"STACK UNDERFLOW"<<endl;
        return;
    }
    top = top-1;
}

void Top(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        cout<<"Top  ELement of the Stack : "<<stack[top]<<endl;
    }
}

void IsEmpty(){
    if(top==-1){
        cout<<"STACK IS EMPTY";
    }
    else{
        cout<<"STACK IS NOT EMPTY";
    }
    cout<<endl;
}


int main(void){
    cout<<"WELCOME TO ARRAY IMPLEMENTATION OF STACK"<<endl<<endl;
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