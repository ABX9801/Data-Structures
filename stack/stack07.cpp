//Prefix evaluation using stack
#include<iostream>
#include<string>
#include<stack>

using namespace std;

int operation(int a,int b,char x){
    int c;
    if(x=='+'){
        c = a+b;
    }
    else if(x=='-'){
        c = a-b;
    }
    else if(x=='*'){
        c=a*b;
    }
    else if(x=='/'){
        c = a/b;
    }
    return c;
}

int main(void){
    string exp = "-+*23*549";
    stack<int> S;
    int t;
    int a,b,res;
    int n = exp.length();
    for(int i=n-1;i>=0;i--){
        if(exp[i]=='*'||exp[i]=='+'||exp[i]=='-'||exp[i]=='/'){
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            res = operation(a,b,exp[i]);
            S.push(res);
        }
        else{
            t = ((int)(exp[i]) - 48);
            S.push(t);
        }
    }

    cout<<"ANS : "<<S.top();
    return 0;
}