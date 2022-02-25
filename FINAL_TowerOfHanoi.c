#include <stdio.h>
#include <stdlib.h>

void tower(int numPlates, char x, char y, char z){
    if(numPlates > 0){
        tower(numPlates-1, x, z, y);
        printf("%c to %c\n", x, y);
        tower(numPlates-1, z, y, x);
        numPlates--;
    }
}

int main(){

    int numPlates = 3;
    tower(numPlates, 'A', 'B', 'C');

    return 0;
}