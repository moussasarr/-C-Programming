#include <stdio.h>

int main()
{
    char ch;
    ch ='a';

    printf("Big %c ",toupper(ch));
    printf("Little %c ", tolower(ch));
    printf("What begins with %c", ch);

    return(0);
}
