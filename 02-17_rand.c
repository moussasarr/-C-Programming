#include <stdio.h>
#include <stdlib.h>


int main()
{
    int r;
    srand((unsigned)time(NULL));
    r = rand();

    printf("%d is a random number \n",r);
    return(0);
}
