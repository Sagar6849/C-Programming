#include<stdio.h>
#include<string.h>
int main(){ 

    char name[100];
    int length=0;

    printf("\nEnter your name\n");
    fgets(name,sizeof(name),stdin);

    // printf("Length is %d\n",strlen(name));

    for(int i=0;name[i]!='\0';i++){
        length++;
    }
    printf("Length of String is %d\n",length);

    return 0;
}