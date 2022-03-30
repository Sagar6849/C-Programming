
#include<stdio.h>

struct demo1{
    char ch1;
    char ch2;
};

union demo2{
    char ch1;
    char ch2;
};
int main(){
    struct demo1 d1;
    union demo2 u1;
    printf("Size of d1 %d",sizeof(d1));
    printf("\nSize of u1 %d",sizeof(u1));
    return 0;
}

