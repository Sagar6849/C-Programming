#include<stdio.h>
void addition(void);
void subtraction(int, int);
int multiplication();
int divsion(int ,int);
 //int x,y;

int main(){
    printf("\n1]addition\n2]subtration\n3]multiplication\n4]division");
    int choice,x,y;
    scanf("%d",&choice);
    scanf("%d %d",&x,&y);
    switch (choice)
    {
    case 1:
          addition();
        break;
    case 2:
          subtraction(x,  y);
        break;
    
    case 3:
         printf("%d", multiplication());
        break;
    
    case 4:
         //divsion ();
         printf("%d",divsion ( x,y));
        break;
    
    default:
        break;
    }
}
void addition(){
    int a=3,b=5;
    printf("%d",a+b);
}
void subtraction(int a,int b){
    printf("%d",a-b);
}


int multiplication(){
    int a=8,b=90,c;
    //printf("%d",a*b);
    c=a*b;
    return c;
}
int divsion(int a,int b){
    int c;
    c=a/b;
    return c;
}