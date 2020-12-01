#include<iostream>

using namespace std;

int main(void){

    // Ask the computer to give you an integer variable and set its value to 5
    int a = 5;
    cout<<sizeof(a)<<endl;// The computer allocates 4 bytes of memory to the integer a and stores 5 at there
    cout<<&a<<endl;// Address of the 1st byte where a is stored
    // Ask the Computer to give you a pointer that can point to an integer
    int* p = NULL;
    // Make the pointer point to a (i.e. point to the address of a)
    p = &a;
    cout<<p<<endl;//address stored in p
    cout<<&p<<endl;//address of p
    // What is the value of the integer stored in the address where p is pointing
    cout<<*p<<endl;
    // What is the value stored in a
    cout<<a;
    return 0;
}