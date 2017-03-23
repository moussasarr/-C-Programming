#include <stdio.h>

int main()
{
    int a;
    char c;
    float f;
    double d;

    printf("An int variable occupies %lu bytes of storage\n", sizeof(a));
    printf("A character variable occupies %lu byte of storage\n", sizeof(c));
    printf("A float variable occupies %lu bytes of storage\n", sizeof(f));
    printf("A double variable occupies %lu bytes of storage\n", sizeof(d));
    return(0);
}
