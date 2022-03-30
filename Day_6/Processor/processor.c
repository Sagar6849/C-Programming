#include "Header.h"
#ifndef FILE_SIZE
#define FILE_SIZE 60
#endif
// #undef FILE_SIZE
// #define FILE_SIZE 50
int main(){
    // printf("File size %d",FILE_SIZE);
    
    printf("\nDate %s",__DATE__);
    printf("\nTime %s",__TIME__);
    printf("\nFILE %s",__FILE__);
    printf("\nLINE %d",__LINE__);
    printf("\nSTDC %d",__STDC__);

    
    return 0;
}
