#include<iostream>

using namespace std;

int main(void){

    int A[5] = {1,2,3,4,5};
    // Accessing elements of Array
    cout<<A[0]<<"-"<<A[1]<<"-"<<A[2]<<"-"<<A[3]<<"-"<<A[4]<<endl;
    //address of array
    cout<<&A<<"-"<<A<<endl;// both have same output
    //dereferencing A
    cout<<*A<<"-"<<A[0]<<endl;// both have same output
    cout<<*(A+1)<<"-"<<A[1];// both have same output
    
    return 0;
}