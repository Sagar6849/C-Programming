#include<stdio.h>
#include<malloc.h>
int main(){

    int *arr,elements,i,j;
    printf("\nEnter how many elements you want to enter\n");
    scanf("%d",&elements);

    arr=(int*)calloc(elements,sizeof(int));

    printf("\nEnter elements\n");
    for(i=0;i<elements;i++){
        // scanf("%d",&arr[i]);
        scanf("%d",&(*(arr+i)));
    }

    printf("\nValues are\n");
    for(i=0;i<elements;i++){
        // printf("   %d",arr[i]);
        printf("   %d",*(arr+i));
    }

    printf("\nAddresses are\n");
    for(i=0;i<elements;i++){
        printf("   %d",&(*(arr+i)));
    }


    free(arr);

    return 0;
}
// #include<stdio.h>
// #include<malloc.h>
// void showValues(int**,int,int);

// int main(){
//     int rows,cols,i,j;
//     int **arr;

//     printf("\nEnter rows and cols for the array\n");
//     scanf("%d%d",&rows,&cols);

//     arr=(int**)calloc(sizeof(int*),rows); //allocation for number of rows
//     for(i=0;i<rows;i++){
//         arr[i]=(int*)calloc(sizeof(int),cols); //allocation for number of cols
//     }

//     printf("\nEnter %d  elements",rows*cols);
//     for(i=0;i<rows;i++){
//         for(j=0;j<cols;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     showValues(arr,rows,cols);

//     for(i=0;i<rows;i++){
//       free(arr[i]);
//     }
//     free(arr);
//     return 0;
// }