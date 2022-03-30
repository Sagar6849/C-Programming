#include<stdio.h>
int main(){

    double amount[5]={235.45,2423.54,1000.54,3453.34,345.345};
    double *ptr=amount;
    int i;

    ptr=amount;
    printf("\nArray values using pointer\n");
    for(i=0; i<5; i++){
        printf("%d :- %f",i,*(ptr+i));
    }

    printf("\nArray Values using Amount variable\n");
    for(i=0; i<5; i++){
        printf("%d %f",i,*(amount+i));
    }


    return 0;
}
