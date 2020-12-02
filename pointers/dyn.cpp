#include<iostream>

using namespace std;

int main(void){
    int a = 5;
    int* p = (int*)malloc(sizeof(int));// Dynamically allocating a pointer
    p = &a;
    cout<<*p<<endl;
    //Dynammically Allocating an array
    int* A = (int*)malloc(3*sizeof(int));
    *A = 1;
    *(A+1) = 2;
    *(A+2) = 3;
    for(int i=0;i<3;i++){
        cout<<*(A+i)<<" ";
    }
    cout<<endl;
    //Dynamically allocating an array using calloc
    int* A1 = (int*)calloc(3,sizeof(int));
    *A1 = 4;
    *(A1+1) = 5;
    *(A1+2) = 6;
    for(int i=0;i<3;i++){
        cout<<*(A1+i)<<" ";
    }
    cout<<endl;
    //We come to know that our array is short in size 
    int* A2 = (int*)realloc(A1,6);
    *(A2+3) = 7;
    *(A2+4) = 8;
    *(A2+5) = 9;
    for(int i=0;i<6;i++){
        cout<<*(A2+i)<<" ";
    }
    cout<<endl;

    free(p);
    free(A);
    free(A1);
    free(A2);
    return 0;
}