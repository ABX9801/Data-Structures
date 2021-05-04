//infix to postfix conversion
#include<iostream>
#include<stack>

using namespace std;

bool precedence(char a, char b){
    if(a=='*'&&(b=='+'||b=='-')){
        return true;
    }
    else if(a=='+'&&b=='-'){
        return true;
    }
    else if(a=='-'&&b=='+'){
        return true;
    }
    return false;
}

int main(void){
    string exp = "A+B*C-D*E";
    int n = exp.length();
    stack<char> S;
    string P = "";
    for(int i = 0;i<n;i++){
        if(exp[i]=='*'||exp[i]=='+'||exp[i]=='-'){
            if(S.empty()){
                S.push(exp[i]);
            }
            else{
                while(!S.empty()&&precedence(S.top(),exp[i])){
                    P+=S.top();
                    S.pop();
                }
                S.push(exp[i]);
            }
        }
        else{
            P+=exp[i];
        }
    }
    while(!S.empty()){
        P+=S.top();
        S.pop();
    }
    cout<<P;
}