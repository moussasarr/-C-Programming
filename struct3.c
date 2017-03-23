#include <stdio.h>
#include <string.h>

int main()
{
    struct person{
        char name[32];
        int age;
    };

    struct person president;
    strcpy(president.name, "George Washington");
    president.age = 67;

    printf("%s was %d old \n", president.name,president.age);
}

