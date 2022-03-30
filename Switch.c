#include<stdio.h>
void add_(void);
void sub_(int,int);
int mult_(void);
int div_(int,int);

int main(){
    int n1,n2;
    char ch;
    printf("enter the option");
    scanf("%c",&ch);

    switch(ch)
    case '+':
    printf("addition",add_());
    break;

    case '-':
    printf("subtract",sub_());
    break;

    case '*':
    printf("multiplication",mult_());
    break;

    case '/':
    printf("division",div_());
    break;
}

void add_() {
    int n1,n2;
    printf("enter two no.");
    scanf("%d%d",&n1,&n2);
    printf("addition is:",n1+n2);
}
void sub_(int a,int b){
    printf("subtraction is:",a-b);

}

int mult_(void) {

    int num1,num2,c;
    printf("%d%d")
}