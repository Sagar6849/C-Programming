void ascending(int arr[]){

    int i,j,temp;
    for(i=0; i<10; i++){
        for(j=i+1;j<10;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("Ascending Order\n");
    for(i=0; i<10; i++){
        printf("\n%d",arr[i]);
    }
}

