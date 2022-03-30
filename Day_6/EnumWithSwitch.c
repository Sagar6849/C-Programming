#include<stdio.h>
int main(){

    int i;  //build in data type
//    Emp e1; //structure data type 

    //enum days{Sunday=1,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
    enum year {Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    enum year y;
    y=11;

    switch(y){
        case Jan: 
                printf("January month\n");
                break;
        case Feb: 
                printf("February month\n");
                break;
        case Mar: 
                printf("March month\n");
                break;
        case Apr: 
                printf("April month\n");
                break;
        case May: 
                printf("May month\n");
                break;
        case Jun: 
                printf("June month\n");
                break;
        case Jul: 
                printf("July month\n");
                break;
        case Aug: 
                printf("August month\n");
                break;
        case Sep: 
                printf("September month\n");
                break;
        case Oct:
                printf("Octomber month\n");
                break;
        case Nov:
                printf("November month\n");
                break;
        case Dec:
                printf("December month\n");
                break;

         


    }

    
    
    }