#include<stdio.h>

int main(){

    int arr[]={10,20,30,40,50};
    int i,*ptr[5];
    for(i=0;i<5;i++){
        ptr[i]=&arr[i];
    }

    for(i=0;i<5;i++){
        printf("Addresses [%d]=%u\n",i,ptr[i]);
    }

    for(i=0;i<5;i++){
        printf("Value of arr[%d]=%d\n",i,*ptr[i]);
    }

    return 0;
}

