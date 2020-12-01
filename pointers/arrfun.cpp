#include<iostream>

using namespace std;

int sum_1(int A[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum+=A[i];
    }

    return sum;
}

int sum_2(int *A){// can alsobe written as A[]
    //Actually *A that is passed is a pointer to an integer;
    //It points to the 1st element of Array. So its size is 4
    int sum=0;
    int size = sizeof(A)/sizeof(A[0]);//1
    for(int i=0;i<size;i++){
        sum+=A[i];
    }

    return sum;
}
int sum_3(int* A,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=A[i];
    }

    return sum;
}

int main(void){
    int A[5] = {1,2,3,4,5};
    int sum1 = sum_1(A,5);//15
    cout<<sum1<<endl;
    int sum2 = sum_2(A);//1
    cout<<sum2<<endl;
    int size = sizeof(A)/sizeof(A[0]);
    int sum3 = sum_3(A,size);//15
    cout<<sum3<<endl;

    return 0;
}