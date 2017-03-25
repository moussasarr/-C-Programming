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
    for(x=0;x<5;x++){
        printf("%p\n", gang[x]);
    }
}
