#include<stdio.h>
int main(){

    int count =0;
printf("Prime number between 1 and 50 are:\n"); 
for(int i=1;i<=50;i++){
    for(int j=2;j<i;j++)
    {
        if(i%j==0){
            count++;
            break;
        }
    }
    if(count==0 && i!=1)
    printf("%d\n",i);
    count=0;
}
    return 0;
}