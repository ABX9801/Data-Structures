#include<iostream>

using namespace std;

int main(void){
    
    // computer give me an integer
    int a = 5;
    // computer give me an integer pointer that points to a
    int* p = &a;
    //computer give me a pointer that points to an integer pointer;
    int** q;// make it point to p
    q = &p;

    cout<<a<<endl;// value of a 
    cout<<*p<<endl;// dereferencing p
    cout<<*(*q)<<endl;// dereferncing the pointer q is pointing to
    // The above 3 output statements yield same result
    
    cout<<p<<endl;// value inside p
    cout<<*q;//value to which q is poining to
    // The above 2 output statements yield same result

    return 0;
}