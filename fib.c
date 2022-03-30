int main(){
    int n, t1=0,t2=1;
    int t3=t1+t2;
    printf("enter the number ");
    scanf("%d",&n);
    printf("fibonacci Series: %d, %d, ",t1, t2);
    for(int i=0;i<n;i++){
        printf("%d, ", t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;	

    }
    return 0;
}