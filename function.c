
#include<stdio.h>

void addition(int,int);//declarations of user defined function

int main(){
    int val1,val2;
    printf("Enter two values: ");
    scanf("%d%d",&val1,&val2);

    addition(val1,val2);//calling of user defined function

    return 0;

}

void addition(int num1,int num2) //definitions of user defined function
{
    printf("Addition is %d",num1+num2);
}


// #include<stdio.h>

// void cateres(void); //declarations of user defined function

// int main(){
//     printf("\nMain is called");
//     cateres(); //calling of user defined function
//    return 0;
// }


// void cateres(void){  //definitions of user defined function

//     printf("\ncateres is called");
// }
