#include <stdio.h>

int main()
{
    int array[] = {4,2,8.9};

    int x;
    for(x=0;x<4;x++)
        printf("Element %d:  %d\n",x+1,array[x]);

    return(0);
}
