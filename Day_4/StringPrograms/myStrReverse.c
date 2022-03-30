void myStrreverse(char str[]){
    int i,length=0;

    for(i=0;str[i]!='\0';i++);

    length=i;

    for(i=length-1;i>=0;i--){
        printf("%c",str[i]);
    }
}
