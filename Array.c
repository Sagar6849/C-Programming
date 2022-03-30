#include<stdio.h>
void showVales(int[]);

void showVales(int p[]){
    int i;
    printf("\nValues are\n");
    for(i=0;i<10;i++){
        printf("\n%d",p[i]);
    }
}

int main(){
    int arr[10],i,j;
    printf("Enter 10 values");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    showVales(arr);


    return 0;
}

//new file

// #include<stdio.h>

// int main(){



//     int arr[10],i,j;

//     printf("Enter 10 values");
//     for(i=0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("\nValues are\n");
//     for(i=0;i<10;i++){
//         printf("\n%d",arr[i]);
//     }

    
    // int marks[5],i;
    // marks[0]=78;
    // marks[1]=87;
    // marks[2]=56;
    // marks[3]=89;
    // marks[4]=67;

    // for(i=0;i<5;i++){
    //     printf("\n%d", marks[i]);
    // }


//     return 0;
// }
