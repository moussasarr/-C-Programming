#include <stdio.h>

int main()
{
    char *gang[5]={
    "Chuck Meyer",
    "Salif Diao",
    "Pete The Great",
    "Tindo Bin Mutunhire",
    "The General Moussa"};

    int x;
    char *cptr;

    for(x=0;x<5;x++){
        cptr = gang[x];
        while(*cptr){
            putchar(*cptr);
            cptr++;
        }
        putchar('\n');
    }
}
