#include<stdio.h>
 int main(){

     int num;
     printf("input number");
     scanf("%d",&num);
     if(num>=0)
     {
         printf("positve number \n",num);
     }
     else if(num<=0)
     printf("negative number \n",num);
     else printf("otherwise zero number");
// int a, bs;
// printf("enter the number");
// scanf("%d %d",&a, &b);
// if(a+b)
// {
// printf("additonal");

// }else if(a-b)
// {
//     printf("subtraction");
// }
// else if(a*b)
// {
//     printf("multipl");
// }
// else{
//     printf("div");
// }
// int n1,n2,n3,n4;
// printf("enter the four numbers");
// scanf("%d %d %d %d ",&n1,&n2,&n3,&n4);
// if(n1>n2){
//     if(n1>n3){
//         if(n1>n4){
//             printf("%d is big",n1);
//         }
//         else{
//             printf("%d is big",n4);
//         }
//     }
// }
// else if(n2>n3){
//     if(n2>n4){
//         printf("%d is big",n2);
//     }
//      else{
//             printf("%d is big",n4);
//         }
// }
// else if(n3>n4){
    
//         printf("%d is big",n3);
// }
//      else{
//             printf("%d is big",n4);
//         }


//    int n;
//    printf("Enter a number: ");
//    scanf("%d",&n);
//    if(n>=0 && n<=9)
//    {
//        printf("Single digit number=%d",n);
//    }
//    else if(n>=10 && n<=99)
//    {
//         printf("double digit number=%d",n);
//    }
    return 0;
}