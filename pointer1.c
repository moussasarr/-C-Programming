#include <stdio.h>

int main()
{
    int pokey;
    int *p;
    p = &pokey;
    printf("The address of the variable pokey is %p\n",&pokey);
    printf("The address of the variable pokey is %p\n",p);
    return(0);
}
