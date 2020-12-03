#include<iostream>

using namespace std;

void A(){
    cout<<"HELLO";
}

void B(void (*p)()){
    p();
}

int main(void){

    void (*p)() = &A;
    B(p);

    return 0;
}