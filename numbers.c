#include <stdio.h>
#include <stdlib.h>

int main(){
    //math basic functions
    printf("%f", 8.9);
    printf("%f", 5.0 + 4.5);
    printf("%f", 5.0 - 4.5);
    printf("%f", 5.0 * 4.5);
    printf("%f", 5.0 / 4.5);

    //Math functions
    //pow: exponents
    printf("%f", pow(2, 3));
    //sqrt: sqare root of a number
    printf("%f", sqrt(36));
    //ceil: round up
    printf("%f", ceil(36.567));
    //floor: rounds down
    prinf("%f", floor(36.567));

    return 0;
}