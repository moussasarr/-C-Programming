#include <stdio.h>

int main()
{
    int array[] = {17, 18, 21, 14};
    int *aptr;

    aptr=array;

    int x;
    for(x=0; x<4; x++){
       printf("Element %d: %d\n", x+1, *aptr);
       aptr++;
    }
    return(0);




}
