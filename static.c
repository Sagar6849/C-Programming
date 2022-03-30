#include<stdio.h>
void showCounter(void);
static int counter=5;
int main(){

    while(counter--){
        showCounter();
    }



    return 0;	
}

void showCounter(void)  {
    static int i=5;
    i++;
    printf("Values of counter:- %d and i:- %d\n", counter,i);
}
