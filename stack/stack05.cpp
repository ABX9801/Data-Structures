//Balenced Paranthesis

#include<iostream>
#include<stack>
#include<cstring>

using namespace std;

char op1 = '(';
char cl1 = ')';
char op2 = '{';
char cl2 = '}';
char op3 = '[';
char cl3 = ']';

bool CheckParen(char C[],int n){
    bool ans = false;
    stack<char> S;
    if(C[0]==cl1 || C[0]==cl2 || C[0]==cl3){
        return false;
    }
    else{
        for(int i=0;i<n;i++){
            if(C[i]==op1 || C[i]==op2 || C[i]==op3){
                S.push(C[i]);
            }
            else{
                if(C[i]==cl1 && S.top()==op1){
                    S.pop();
                }
                else if(C[i]==cl2 && S.top()==op2){
                    S.pop();
                }
                else if(C[i]==cl3 && S.top()==op3){
                    S.pop();
                }
                else if(C[i]==cl2 && S.top()==op2){
                    S.pop();
                }
                else if(C[i]==cl3 && S.top()==op3){
                    S.pop();
                }
            }
        }
        if(S.empty()){
            ans = true;
        }
        return ans;
    }

}

int main(void){
    char C[50] = "{[[{}]]}";
    bool ans = CheckParen(C,strlen(C));
    if(ans){
        cout<<"VALID";
    }
    else{
        cout<<"INVALID";
    }
    return 0;
}