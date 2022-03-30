#include<stdio.h>

#define LIMIT 5
#define MY main
// #define LOL int

typedef int LOL;

#define AREA(l,b) (l*b)
#define min(a,b) (((a)<(b))?(a):(b))

#define ELE 1,\
            2,\
            3,\
            4,\
            5

// #define ELE 1,2,3,4,5


LOL MY(){
    
    LOL arr[]={ELE};
    
    LOL area;

    area=AREA(10,20);

    for(int i=0;i<5;i++){
        printf("\n%d",arr[i]);
    }

    printf("The value of limit %d",LIMIT);
    printf("\nDate is %d-March-2022",LIMIT);
    printf("\nAREA is %d",area);

    printf("\n\nMin value is %d",min(100,20));
    
    return 0;
}

