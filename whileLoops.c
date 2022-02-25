#include <stdio.h>
#include <stdlib.h>

int main(){

    int index = 1;
    int index2 = 3;
    while(index <= 5){
        printf("%d\n", index);
        index ++;
    }
    //do while: Runs the code before checking if it can do it again.
    do{
        printf("Did!");
    }while(index2 <= 2);

    return 0;
}