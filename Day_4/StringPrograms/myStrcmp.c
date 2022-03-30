int myStrcmp(char str1[],char str2[]){
    int i=0,flag=0,diff;

    for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++){
        diff=str1[i]-str2[i];
        if(diff!=0){
            return diff;
        }
    }
    return 0;
}
