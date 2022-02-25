#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){

    struct Student student1;
    student1.age = 16;
    student1.gpa = 3.2;
    //strcpy: string copy
    strcpy( student1.name, "Young Billy");
    strcpy( student1.major, "Computer Science");
    printf("%s", student1.name);

    return 0;
}