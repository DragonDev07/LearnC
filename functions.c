#include <stdio.h>
#include <stdlib.h>

int main(){

    sayHi("Teo");
    return 0;
}

void sayHi(char name[]){

    printf("Hello %s\n", name);

}