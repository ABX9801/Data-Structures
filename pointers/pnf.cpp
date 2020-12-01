#include<iostream>

using namespace std;

void call_by_value(int a){
    a = a+1;
}

void call_by_reference(int* p){
    *p = *p + 1;
}

int main(void){
    int a = 5;
    cout<<"Value of a :"<<a<<endl;
    call_by_value(a);
    cout<<"Value of a after using call_by_value() function :"<<a<<endl;
    a = 5;
    call_by_reference(&a);
    cout<<"Value of a after using call_by_reference() function :"<<a<<endl;
    return 0;
}