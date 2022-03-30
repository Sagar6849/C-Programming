#include<stdio.h>
 int main(){

     int num;
     printf("input number");
     scanf("%d",&num);
     if(num>=0)
     {
         printf("positve number \n",num);
     }
     else if(num<=0){
           printf("negative number \n",num);
     }else printf("otherwise zero number");
return 0;
 }