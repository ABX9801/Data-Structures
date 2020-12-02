#include<iostream>

using namespace std;

int main(void){

    //1-D array
    int A[4] = {1,2,3,4};
    int* P = A;//A is same as &A[0]
    cout<<*P<<"-"<<*(P+1)<<"-"<<*(P+2)<<"-"<<*(P+3)<<endl;
    cout<<*A<<"-"<<*(A+1)<<"-"<<*(A+2)<<"-"<<*(A+3)<<endl;
    cout<<A[0]<<"-"<<A[1]<<"-"<<A[2]<<"-"<<A[3]<<endl;

    //2-D array
    int B[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<B<<"-"<<B[0]<<"-"<<&B[0][0]<<endl;//same address
    cout<<*(*B)<<"-"<<*B[0]<<"-"<<B[0][0]<<endl<<endl;//1
    //note *B[1] == 4, *(*B+1) = 4

    //Display all components of array
    //METHOD-1
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //METHOD2;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<*(B[i]+j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //METHOD3
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<*((*B+i)+j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}