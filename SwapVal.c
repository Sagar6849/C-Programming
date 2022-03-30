#include<stdio.h>
void swap(int*,int*);
int main(){

    int v1,v2;
    printf("enter two number\n");
    scanf("%d%d",&v1,&v2);
   swap(&v1,&v2);
    return 0;
}
void swap(int *a,int *b){
    printf("square of 1st no:%d",*a * *a);
    printf("\n cube of 2nd no:%d",*b * *b * *b);

}