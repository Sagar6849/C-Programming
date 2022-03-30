#include<stdio.h>

#define LIMIT 5
#define MY main
// #define LOL int

typedef int LOL;

#define AREA(l,b) (l*b)

LOL MY(){
    LOL area;

    area=AREA(10,20);


    printf("The value of limit %d",LIMIT);
    printf("\nDate is %d-March-2022",LIMIT);
    printf("\nAREA is %d",area);

    
    return 0;
}