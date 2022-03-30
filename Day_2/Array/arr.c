
#include<stdio.h>
#include "Header.h"

int main(){
    int arr[10],i,j;
    printf("Enter 10 values");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    ascending(arr);


    return 0;
}
