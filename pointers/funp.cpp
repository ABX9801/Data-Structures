#include<iostream>

using namespace std;

int Add(int a,int b){
    int c = a+b;
    return c;
}

int main(void){
    //function pointers
    int (*p)(int,int);
    p = &Add;
    int k = (*p)(2,3);
    printf("%d\n",k);
    int l = p(2,4);
    printf("%d\n",l);

    return 0;
}