#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 30;
    int * pAge = &age;
    //To dereference a pointer just put an *
    printf("%d", *pAge);

    return 0;
}