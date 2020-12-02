#include<iostream>

using namespace std;

// A functions that takes in a character pointer as an argument
// A call-by-reference type function
void print(char* C){
    int i=0;
    while(*(C+i)!='\0'){
        printf("%c",*(C+i));
        i+=1;
    }
}

int main(void){
    char* C = "Anurag";
    print(C);
    return 0;
}