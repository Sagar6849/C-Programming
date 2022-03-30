/*
1] Ascending
2] Descending
3] Even numbers
4] Odd numbers
5] Prime numbers
6] Armstrong numbers
7] Reverse
8] Sum of numbers
9] Addition of two arrays
10] Subtraction of two arrays
*/

#include <stdio.h>
#include<math.h>
void ascending(int arr[],int n);
void descending(int arr[],int n);
void even(int arr[],int n);
void odd(int arr[],int n);
void prime(int arr[],int n);
void armstrong(int arr[],int n);
void reverse(int arr[],int n);
void sum(int arr[],int n);
void add_two_arrays(int arr[],int n);
void subtract_two_arrays(int arr[],int n);


int main(void){
    int n,choices;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    scanf("%d",&choices);
    printf("\n");
    switch(choices) {
        case 1:
        ascending(arr,n);
        for(int i=0; i<n; i++) {
        printf("%d\n",arr[i]);}
        break;
         case 2:
        descending(arr,n);
        for(int i=0; i<n; i++) {
        printf("%d\n",arr[i]);}
        break;
        case 3:
        even(arr,n);
        for(int i=0; i<n; i++) {
        printf("%d\n",arr[i]);}
        break;
        case 4:
        odd(arr,n);
        for(int i=0; i<n; i++) {
        printf("%d\n",arr[i]);}
        break;
        case 5:
        prime(arr,n);
       // for(int i=0; i<n; i++) {
       // printf("%d\n",arr[i]);
      // }
        break;

        case 6:
        armstrong(arr,n);
        for(int i=0; i<n; i++) {
        printf("%d\n",arr[i]);}
        break;
         case 7:
        reverse(arr,n);
        for(int i=0; i<n; i++) {
     printf("%d\n",arr[i]);
       }
        break;
        case 8:
        add_two_arrays(arr,n);
        break;
      subtract_two_arrays( arr, n);

    }


}
void ascending(int arr[],int n) {
    //arr[0] =8;
   int temp;
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

            }

        }
    }

}
void descending(int arr[],int n) {
    //arr[0] =8;
   int temp;
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

            }

        }
    }

}
void even(int arr[],int n) {
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            printf("%d",arr[i]);

        }
    }
}
void odd(int arr[],int n) {
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            printf("%d",arr[i]);
            
        }
    }
}
void prime(int arr[],int n) {
    int count;
    for(int i=0; i<n; i++){
        count=0;
         for(int j=2; j<=arr[i]; j++){
             if(arr[i]%j==0){
                 count++;
             }
             
         }
         if(count==1){
             printf("%d\n",arr[i]);
         }
    }
}
void armstrong(int arr[],int n) {
    
        int i=0, temp, sum=0, rem, c=0;
        for(i=0; i<n; i++)
        {
              sum=0;
              temp=arr[i];
              while(arr[i]!=0)
              {
                      rem=arr[i]%10;
                      sum=sum+rem*rem*rem;
                      arr[i]=arr[i]/10;
               }
               if(temp==sum)
               {
                   printf(" this is armstrong%d\n",temp);
                       c++;
              }
        }
        printf("\nTotal armstrng no in array is: %d ",c);
}

void reverse(int arr[],int n){
    int temp,i;
    for(i=0; i<n/2; i++){
    temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
    }
    

}
void sum(int arr[],int n) {
    int sum=0;
    for(int i=0; i<n;i++){
        sum=sum+arr[i];
    }
    printf("\nsum is equql to%d\t", sum);
}
void add_two_arrays(int arr[],int n) {
    printf("Enter second array");
    int n1=n;
    int arr1[n1],add[n];

    for(int i=0; i<n1; i++){
        scanf("%d",&arr1[i]);

    }
    for(int i=0; i<n1; i++){
        add[i]=arr1[i]+arr[i];
        printf("new array is equql to%d\t", add[i]);

    }

}


void subtract_two_arrays(int arr[],int n) {
    printf("Enter second array");
    int n1=n;
    int arr1[n1],sub[n];

    for(int i=0; i<n1; i++){
        scanf("%d",&arr1[i]);

    }
    for(int i=0; i<n1; i++){
        sub[i]=arr1[i]-arr[i];
        printf("new array is equql to%d\t", sub[i]);

    }

}