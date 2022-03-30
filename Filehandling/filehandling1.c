#include<stdio.h>
int main(){

  FILE *fp;
    fp = fopen("c:\\CFileHandling\\myFile2.txt","w");
    fputs("Welcome to C programming",fp);
    fclose(fp);


    // FILE *fp;
    // char name[100];

    // fp=fopen("c:\\CFileHandling\\myFile.txt","w+");
    // if(!fp)
    //     printf("File is not created");
    // else{
    //     printf("File is created");
    //     printf("Enter your name\n");
    //     fflush(stdin);
    //     gets(name);

    //     fprintf(fp, "%s\n", name);
    // }

    // fclose(fp);




    return 0;
}
