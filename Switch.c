#include<stdio.h>

int main(){

    int num1,num2,iChoice;

    printf("Enter two numbers\n");
    scanf("%d",&num1);
    scanf("%d",&num2);

    printf("\n1] Addition\n2] Subtraction\n3] Multiplication\n4] Division\n");
    printf("\nEnter your choice\n");
    scanf("%d",&iChoice);


    switch(iChoice){

        case 1:
                printf("Addition of two numbers %d\n",num1+num2);
                break;
        case 2:
                printf("Subtraction of two numbers %d\n",num1-num2);
                break;
        
        case 3:
                printf("Multiplication of two numbers %d\n",num1*num2);
                break;
        
        case 4:
                printf("Division of two numbers %f\n",(float)num1/num2);
                break;
        default:
                printf("Invalied choice\n");
                
        

    }

    return 0;
}

