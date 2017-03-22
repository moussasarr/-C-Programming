#include <stdio.h>

int main()
{
    char alpha;
    alpha = 'A';
    do{
        putchar(alpha);
        printf("\n");
        alpha++;
    }while(alpha != 'Z'+1);
    return(0);
}
