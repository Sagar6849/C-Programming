#include<stdio.h>
#include<string.h>
// void display(char[]);

// void display(char str[]){
//     printf("String is %s",str);
//     puts(str);
// }

int main(){

    char name[]="Sagar Todkar";
    printf("%c\n",*name);
    printf("%c\n",*(name+1));


    char *cPtr;
    cPtr=name;
    printf("\n%c",*cPtr);
    printf("\n%c",*(cPtr+1));
    
//     char c5[100];

//     printf("Enter String\n");
//     fgets(c5,sizeof(c5),stdin);
//     printf("STring is %s",c5);
//     puts(c5);

//     display(c5);

// char c5[100];

//     printf("Enter String\n");
//     fgets(c5,sizeof(c5),stdin);
//     printf("STring is %s",c5);
//     puts(c5);

    
// char c5[100];

//     printf("Enter String\n");
//     scanf("%s",c5);

//     printf("String is %s",c5);


    return 0;
}
