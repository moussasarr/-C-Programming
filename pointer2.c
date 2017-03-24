#include <stdio.h>
//Dual Nature of pointers in C

int main()
{
    int pokey;
    int *p;
    p=&pokey;

    printf("The address of 'pokey' is %p\n",&pokey);
    printf("The address of 'pokey' is %p\n", p);

    printf("The contents of 'pokey' are %d\n",pokey);
    printf("The contents of the variable 'pokey' are %d\n", *p);
    return(0);
}
