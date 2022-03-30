#include<stdio.h>
typedef struct Student{
    char stdName[100];
     char stdDob[20];
     int stdid;
     float stdMark[100];
}Stud;

int main(){
    Stud s1[5];

    printf("enter infomation of students\n");
    for(int i=0; i<=5;i++){
       
        printf("\n enter name:\n");
        gets(s1[i].stdName);
        fflush(stdin);
        gets(s1[i].stdDob);
        scanf("%d",&s1[i].stdid);
        
        for(int j=0; j<=5; j++){
            scanf("%f",&s1[i].stdMark[j]);
        }
    }

    for(int i=0; i<=5;i++){
        printf(" name of std %s",s1[i].stdName);
        printf("\nDob of std%s",s1[i].stdDob);
        for(int j=0; j<=5;j++){
            printf("marks of std",s1[i].stdMark[j]);
        }
    }
}
