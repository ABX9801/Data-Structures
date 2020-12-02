#include<iostream>
#include<cstring>

using namespace std;

void print(char* a){
    int i=0;
    while(a[i]!='\0'){
        printf("%c",a[i]);
        i+=1;
    }
}

int main(void){

    // Character array must be large enough to store the array
    // min_size = no. of characters in string + 1(for null character)
    char c[4];
    c[0] = 'J';
    c[1] = 'O';
    c[2] = 'H';
    c[3] = 'N';
    printf("%s\n",c);//JOHN<garbage Value>

    char c2[20];
    c2[0] = 'J';
    c2[1] = 'O';
    c2[2] = 'H';
    c2[3] = 'N';
    c2[4] = '\0';
    printf("%s\n",c2);//JOHN
    int len = strlen(c2);
    cout<<len<<endl;//4

    char c3[] = "JOHN";//NULL character is automatic if we make strings like this
    printf("%s\n",c3);//JOHN
    int len3 = strlen(c3);
    cout<<len3<<endl;//4

    char c4[5] = {'J','O','H','N','\0'};
    printf("%s\n",c4);//JOHN
    int len4 = strlen(c4);
    cout<<len4<<endl; //4

    char* c5;
    c5 = "JOHN";
    printf("%s\n",c5);//JOHN
    int len5 = strlen(c5);
    cout<<len5<<endl;//4
    //While passing array into functions always use call-by-reference functions
    print(c5);//JOHN

    return 0;
}