#include <stdio.h>

int main()
{
    char input[64];
    int len;

    printf("Type your instructions here ...");
    fgets(input,64,stdin);
    len = strlen(input);
    printf("Your instructions contain %d characters",len);
}

