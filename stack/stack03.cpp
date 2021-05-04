// Reverse a string Using Stack
// Time Complexity  : O(n);
// Space Complexity : O(n);

#include<iostream>
#include<cstring>
#include<stack>

using namespace std;

void Reverse(char C[], int n){
    stack<char> S;
    for(int i=0;i<n;i++){
        S.push(C[i]);
    }
    for(int i=0;i<n;i++){
        C[i] = S.top();
        S.pop();
    }
}

int main(void){
    char C[50];
    cout<<"Enter a String : ";
    gets(C);
    Reverse(C,strlen(C));
    cout<<"The Reversed string is : "<<C;
    return 0;
}