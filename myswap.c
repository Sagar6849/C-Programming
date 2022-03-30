
#include<stdio.h>

void mySwap(int*,int*);
int main(){

    int val1,val2;

    printf("Enter two values\n");
    scanf("%d%d",&val1,&val2);
    printf("\nBefore swapping values are %d %d",val1,val2);
    mySwap(&val1,&val2);
    printf("\nAfter swapping values are %d %d",val1,val2);
    return 0;
}

void mySwap(int *x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
