#include <stdio.h>
#include <stdlib.h>

int main(){

    char name[20];
    printf("Enter your age: ");
    //scanf: Gets the users input up to the first space
    //scanf("%s", name);
    //fgets: Gets the users input as a full line of text
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
    return 0;
}