#include <stdio.h>
#include <stdlib.h>

int main(){
    //r: read file
    //w: write file
    //a: apened information
    FILE * fpointer =  fopen("fileTest.txt", "a");

    fprintf(fpointer, "\nThis adds to the file!");

    fclose(fpointer);
    return 0;
}