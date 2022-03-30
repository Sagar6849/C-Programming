#include<stdio.h>

int main(){
    char message[100];
    int i;
    int countUpp,countLow,countSpe,countDig;

    printf("Enter message\n");
    gets(message);

    printf("Message is %s\n", message);

    countUpp=countLow=countSpe=countDig=0;
    for(i=0;message[i]!='\0';i++){
        if(message[i]>='A' && message[i]<='Z' || message[i]>='a'&& message[i]<='z'){
            if(message[i]>='A' && message[i]<='Z'){
                countUpp++;
            }
            else{
                countLow++;
            }
        }
        else if(message[i]>='0' && message[i]<'9'){
            countDig++;
        }
        else
            countSpe++;
    }

    printf("\nCapital Letters :  %d",countUpp);
    printf("\nSmall Letters :  %d",countLow);
    printf("\nSpecial Letters :  %d",countSpe);
    printf("\nDigits are :  %d",countDig);


    return 0;
} 
