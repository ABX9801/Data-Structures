#include<iostream>

using namespace std;

int main(void){

    int a = 1025;
    //The above integer takes 4 bytes of memory to store
    //Note 1 byte - 8 bits
    // 00000000 00000000 00000100 00000001
    //  byte3     byte2    byte1   byte0  
    //1025 is stored as shown above, the left most bit is the sign bit
    int* p = &a;
    // p points to a;
    cout<<*p<<endl;//the value stored at the address where p is pointing to 1025
    cout<<*(p+1)<<endl;//the value stored at the address where p+1 is pointing to (garbage value)
    // the above thing happens bcoz incrementing p by one step acyually increments it by 4 bytes

    //Char only needs 1 byte of memory, we can use char pointers here and see what is stored at all the 4 bytes 
    //thus a char pointer moves only one byte ahead
    char* p0;
    p0 = (char*)p;
    printf("%d ",*p0);//1
    printf("%d ",*(p0+1));//4
    printf("%d ",*(p0+2));//0
    printf("%d ",*(p0+3));//0

    printf("\n%d\n",p);
    printf("%d",p0);// address pointed by p and p0 is same
    
    return 0;
}