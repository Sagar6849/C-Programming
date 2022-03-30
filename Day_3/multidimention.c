#include<stdio.h>
int main(){


  int arr[2][3][2]={
        {{1,2},{2,3},{4,5}},
        {{6,7},{8,9},{10,11}},
    },i,j,k;

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<2;k++){
                printf("%d ",arr[i][j][k]);
            }

                printf("\n");
        }
    }

    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;

    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf(" %d",arr[i][j]);
    //     }
    //     printf("\n");
    // }


    return 0;
}
