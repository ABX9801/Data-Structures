#include<iostream>

using namespace std;

void print_2d(int B[][2],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<2;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
}

void arr_3d(int A[][2][2]){
    cout<<"Success->"<<A[0][0][0]<<endl;
}

int main(void){

    int B[2][2] = {{1,2},{3,4}};
    print_2d(B,2);
    int C[2][2][2] ={{{1,2},{3,4}},{{5,6},{7,8}}};
    arr_3d(C);

    return 0;
}