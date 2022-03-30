#include<stdio.h>
#include<malloc.h>
#include<string.h>
int records=0;
static int count=0;
typedef struct Employee{
    int empId;
    char name[100];
    double salary;

}Emp;

Emp* addNewRecord(Emp*);
void displayRecords(Emp*);
void searchRecord(Emp*);
void updateRecord(Emp*);
void TotalSal(Emp*);
void AscendingOrder(Emp*);
void updateRecord(Emp* cPtr){
    int localEmpId;
    int found=0;
    printf("\nEnter empId to update\n");
    scanf("%d",&localEmpId);

    for(int i=0; i<count; i++){
        if((cPtr+i)->empId==localEmpId){
            printf("\nEnter new Name for the same record\n");
            fflush(stdin);
            gets((cPtr+i)->name);
            printf("\nEnter new Salary for ths same record");
            scanf("%lf",&(cPtr+count)->salary);
            
            found=1;
            printf("\nNEw Record  %s %d %lf\n",(cPtr+i)->name,(cPtr+i)->empId,(cPtr+i)->salary);
        }
    }
    if(found==0){
        printf("\nRecord not found\n");
    }
}


void searchRecord(Emp* cPtr){

    char searchName[40];
    int found=0;
    printf("\nEnter the name you want to search\n");
    fflush(stdin);
    gets(searchName);
    for(int i=0; i<count; i++){
        if(strcmp((cPtr+i)->name,searchName)==0){
            found=1;
            printf("\nRecord found %s %d %lf\n",(cPtr+i)->name,(cPtr+i)->empId,(cPtr+i)->salary);
        }
    }
    if(found==0){
        printf("\nRecord not found\n");
    }
}
void TotalSal(Emp* cPtr){
    long totalsalary =0;
    for(int i=0;i<count;i++){
        totalsalary+=(cPtr+i)->salary;

    }
    printf("Total salary of all emp is:%d",totalsalary);
}


void displayRecords(Emp* cPtr){
    for(int i=0; i<count; i++){
        printf("\n %d   %s   %lf\n",(cPtr+i)->empId,(cPtr+i)->name,(cPtr+i)->salary);
    }
}
void AscendingOrder(Emp* cPtr){

}


Emp* addNewRecord(Emp* cPtr){
    
    if(count<records){
        printf("\nEnter empId,name,salary for %d employee\n ",count+1);
        scanf("%d",&(cPtr+count)->empId);
        fflush(stdin);
        gets((cPtr+count)->name);
    
        scanf("%lf",&(cPtr+count)->salary);
        count++;
    }
    else{
        printf("\nYou are not allowed to enter new record\n");
    }

    return cPtr;

}
int main(){
    Emp *ePtr;
    int choice;
    char ch;

    printf("\nEnter how many records you want to enter\n");
    scanf("%d",&records);

    ePtr=(Emp*)calloc(sizeof(ePtr),records);

    do
    {
        printf("\n1] Add record\n2] Update Record\n3] Display Records\n4] Search Record\nEnter your choice\n\n");
        scanf("%d",&choice);
        switch(choice){

            case 1:
                    ePtr=addNewRecord(ePtr);
                    break;
            case 2:
                    updateRecord(ePtr);
                    break;
            case 3:
                    displayRecords(ePtr);
                    break;
            case 4:
                    searchRecord(ePtr);
                    break;
            case 5:
                    TotalSal(ePtr);
                    break;
            case 6:
                    AscendingOrder(ePtr);
                    break;

        }



        printf("\n\nDo you want to continue?\n");
        fflush(stdin);
        scanf("%c",&ch);
    } while (ch=='Y'||ch=='y');
    

    free(ePtr);

    return 0;
}


