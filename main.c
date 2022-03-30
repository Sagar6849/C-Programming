#include<stdio.h>
static int count=0;
int main(){
    int count=5;
    printf("Count %d",count);
    count++;
    while(count!=0){
        main();
        count--; 
        
    }
     return 0;
}

// int count;
// extern void write_extern();


// int main(){
//     count=5;
//     write_extern();
   


