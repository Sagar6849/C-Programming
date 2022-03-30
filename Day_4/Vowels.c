
#include<stdio.h>

int main(){
    char text[100];
    int i,j;

    printf("Enter your text\n");
    gets(text);

    printf("\nCharcters are \n");
    for(i=0; text[i]!='\0'; i++){
        printf("%c", text[i]);
    }

    printf("\nVowels are\n");
    for(i=0; text[i]!='\0'; i++){
        if(text[i]=='A'||text[i]=='a'||text[i]=='E'||text[i]=='e'||text[i]=='I'||text[i]=='i'||text[i]=='O'||text[i]=='o'||text[i]=='U'||text[i]=='u')
        printf("%c", text[i]);
    }
    return 0;
}
