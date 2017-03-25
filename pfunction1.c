#include <stdio.h>

void minus10(int *v);

int main()
{
    int value;
    value = 100;
    printf("The value is %d.\n", value);
    minus10(&value);
    printf("Now after the substraction, the value is %d\n", value);
    return(0);
}

void minus10(int *v){
    *v = *v - 10;
}
